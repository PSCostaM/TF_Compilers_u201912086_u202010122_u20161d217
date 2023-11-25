
// Generated from Expr.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprListener.h"


/**
 * This class provides an empty implementation of ExprListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ExprBaseListener : public ExprListener {
public:

  virtual void enterCommand(ExprParser::CommandContext * /*ctx*/) override { }
  virtual void exitCommand(ExprParser::CommandContext * /*ctx*/) override { }

  virtual void enterScript(ExprParser::ScriptContext * /*ctx*/) override { }
  virtual void exitScript(ExprParser::ScriptContext * /*ctx*/) override { }

  virtual void enterSimpleCommand(ExprParser::SimpleCommandContext * /*ctx*/) override { }
  virtual void exitSimpleCommand(ExprParser::SimpleCommandContext * /*ctx*/) override { }

  virtual void enterStatement(ExprParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(ExprParser::StatementContext * /*ctx*/) override { }

  virtual void enterIfCommand(ExprParser::IfCommandContext * /*ctx*/) override { }
  virtual void exitIfCommand(ExprParser::IfCommandContext * /*ctx*/) override { }

  virtual void enterLoop(ExprParser::LoopContext * /*ctx*/) override { }
  virtual void exitLoop(ExprParser::LoopContext * /*ctx*/) override { }

  virtual void enterAssignment(ExprParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(ExprParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterListDeclaration(ExprParser::ListDeclarationContext * /*ctx*/) override { }
  virtual void exitListDeclaration(ExprParser::ListDeclarationContext * /*ctx*/) override { }

  virtual void enterCondition(ExprParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(ExprParser::ConditionContext * /*ctx*/) override { }

  virtual void enterExpression(ExprParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(ExprParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterSimpleExpression(ExprParser::SimpleExpressionContext * /*ctx*/) override { }
  virtual void exitSimpleExpression(ExprParser::SimpleExpressionContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

