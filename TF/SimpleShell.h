#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#include <string>
#include "ExprBaseVisitor.h"

class SimpleShell : public ExprBaseVisitor {
public:
    SimpleShell();

    // Funciones de visita para las reglas definidas en la gramática
    antlrcpp::Any visitScript(ExprParser::ScriptContext *ctx) override;

    antlrcpp::Any visitCommand(ExprParser::CommandContext *ctx) override;

    antlrcpp::Any visitSimpleCommand(ExprParser::SimpleCommandContext *ctx) override;

    antlrcpp::Any visitIfCommand(ExprParser::IfCommandContext *ctx) override;

    antlrcpp::Any visitLoop(ExprParser::LoopContext *ctx) override;

    antlrcpp::Any visitAssignment(ExprParser::AssignmentContext *ctx) override;

    antlrcpp::Any visitListDeclaration(ExprParser::ListDeclarationContext *ctx) override;

    antlrcpp::Any visitCondition(ExprParser::ConditionContext *ctx) override;

    antlrcpp::Any visitExpression(ExprParser::ExpressionContext *ctx) override;
    
    antlrcpp::Any visitSimpleExpression(ExprParser::SimpleExpressionContext *ctx) override;
};

#endif // SIMPLE_SHELL_H
