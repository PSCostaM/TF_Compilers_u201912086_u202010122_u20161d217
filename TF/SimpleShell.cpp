#include "SimpleShell.h"
#include "ExprLexer.h"
#include "ExprParser.h"
#include <iostream>

SimpleShell::SimpleShell() {}

antlrcpp::Any SimpleShell::visitScript(ExprParser::ScriptContext *ctx) {
    // Inicializa el resultado del script
    antlrcpp::Any scriptResult;

    // Itera sobre cada declaración en el script
    for (auto statement : ctx->statement()) {
        // Ejecutar la declaración actual
        scriptResult = visit(statement);
    }

    // Devuelve el resultado del último statement en el script
    return scriptResult;
}

antlrcpp::Any SimpleShell::visitCommand(ExprParser::CommandContext *ctx) {
    if (ctx->simpleCommand()) {
        // Si es un comando simple, ejecuta el comando simple
        return visit(ctx->simpleCommand());
    } else if (ctx->ifCommand()) {
        // Si es una estructura if, evalua la condición y ejecuta el bloque correspondiente
        auto conditionResult = visit(ctx->ifCommand()->condition());
        if (antlrcpp::is<bool>(conditionResult) && antlrcpp::as<bool>(conditionResult)) {
            // Si la condición es verdadera, ejecuta el bloque 'then'
            return visit(ctx->ifCommand()->script(0));
        } else {
            // Si la condición es falsa, ejecuta el bloque 'else' si existe
            if (ctx->ifCommand()->script(1)) {
                return visit(ctx->ifCommand()->script(1));
            }
        }
    }

    // En caso de que no sea ni un comando simple ni una estructura if
    return antlrcpp::Any(); 
}

antlrcpp::Any SimpleShell::visitSimpleCommand(ExprParser::SimpleCommandContext *ctx) {
    // Obtiene el nombre del comando (la primera palabra)
    std::string commandName = ctx->WORD()->getText();

    // Inicializa la lista de argumentos
    std::vector<std::string> arguments;

    // Si hay argumentos, los recorre y agrega a la lista
    if (ctx->ARG()) {
        for (auto arg : ctx->ARG()) {
            arguments.push_back(arg->getText());
        }
    }

    // Procesa el comando o imprime la información
    std::cout << "Command: " << commandName << std::endl;
    std::cout << "Arguments: ";
    for (const auto &arg : arguments) {
        std::cout << arg << " ";
    }
    std::cout << std::endl;

    return visitChildren(ctx);
}

antlrcpp::Any SimpleShell::visitIfCommand(ExprParser::IfCommandContext *ctx) {
    // Obtiene la condición y el bloque 'then' del contexto
    auto condition = ctx->condition();
    auto thenBlock = ctx->script(0);

    // Evalúa la condición
    bool conditionResult = visitCondition(condition);

    // Si la condición es verdadera, ejecuta el bloque 'then'
    if (conditionResult) {
        visitScript(thenBlock);
    }

    if (ctx->script().size() > 1) {
        auto elseBlock = ctx->script(1);
        // Si hay un bloque 'else', se ejecuta
        if (!conditionResult) {
            visitScript(elseBlock);
        }
    }

    return antlrcpp::Any(); 
}

antlrcpp::Any SimpleShell::visitLoop(ExprParser::LoopContext *ctx) {
    if (ctx->FOR()) {
        // Bucle 'for'
        std::string variable = ctx->WORD(0)->getText();

        // Obtén la lista de palabras sobre las cuales iterar
        std::vector<std::string> words;
        for (size_t i = 2; i < ctx->WORD().size(); ++i) {
            words.push_back(ctx->WORD(i)->getText());
        }

        // Ejecuta el bucle
        for (const auto& word : words) {
            // Asigna el valor de la palabra a la variable del bucle
            variables[variable] = word;
            // Ejecuta el bloque del bucle
            visitScript(ctx->script());
        }
    } else if (ctx->WHILE()) {
        // Bucle 'while'
        while (visitCondition(ctx->condition())) {
            // Ejecuta el bloque del bucle
            visitScript(ctx->script());
        }
    }

    return antlrcpp::Any();
}

antlrcpp::Any SimpleShell::visitAssignment(ExprParser::AssignmentContext *ctx) {
    // Obtiene el nombre de la variable
    std::string variable = ctx->WORD()->getText();

    // Evalúa la expresión y obtén su valor como string
    std::string value = visitExpression(ctx->expression());

    // Asigna el valor a la variable
    variables[variable] = value;

    return antlrcpp::Any(); 
}

antlrcpp::Any SimpleShell::visitListDeclaration(ExprParser::ListDeclarationContext *ctx) {
    // Obtiene el nombre de la variable
    std::string variable = ctx->WORD(1)->getText();

    // Evalúa las expresiones dentro de la lista y obtén sus valores como strings
    std::vector<std::string> values;
    for (auto expr : ctx->expression()) {
        values.push_back(visitExpression(expr));
    }

    // Asigna los valores a la variable
    listVariables[variable] = values;

    return antlrcpp::Any();  
}

antlrcpp::Any SimpleShell::visitCondition(ExprParser::ConditionContext *ctx) {
    if (ctx->WORD()) {
        // Si la condición es una palabra, simplemente devuelve el texto de la palabra
        return ctx->WORD()->getText();
    } else if (ctx->expression()) {
        // Si la condición es una expresión, evalúala y devuelve el resultado
        return visit(ctx->expression());
    } else {
        // Si la condición no es ni una palabra ni una expresión, maneja otros casos según sea necesario
        return "Condición no válida";
    }
}

antlrcpp::Any SimpleShell::visitExpression(ExprParser::ExpressionContext *ctx) {
    // Evalua la expresión booleana
    antlrcpp::Any left = visit(ctx->simpleExpression(0));
    antlrcpp::Any right = visit(ctx->simpleExpression(1));

    // Obtiene los valores de las expresiones (pueden ser strings, números, etc.)
    std::string leftValue = left.as<std::string>();
    std::string rightValue = right.as<std::string>();

    // Evalua el operador
    if (ctx->op->getText() == "&&") {
        return leftValue == "true" && rightValue == "true" ? "true" : "false";
    } else if (ctx->op->getText() == "||") {
        return leftValue == "true" || rightValue == "true" ? "true" : "false";
    } else {
        // Maneja otros operadores según sea necesario
        return "Operador no válido";
    }
}

antlrcpp::Any SimpleShell::visitSimpleExpression(ExprParser::SimpleExpressionContext *ctx) {
    if (ctx->WORD()) {
        // Si la expresión simple es una palabra, devuelve el texto de la palabra
        return ctx->WORD()->getText();
    } else if (ctx->NUMBER()) {
        // Si la expresión simple es un número, devuelve el texto del número
        return ctx->NUMBER()->getText();
    } else {
        // Maneja otros casos según sea necesario
        return "Expresión simple no válida";
    }
}
