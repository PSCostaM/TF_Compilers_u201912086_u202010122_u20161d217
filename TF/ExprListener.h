
// Generated from Expr.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ExprParser.
 */
class  ExprListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCommand(ExprParser::CommandContext *ctx) = 0;
  virtual void exitCommand(ExprParser::CommandContext *ctx) = 0;

  virtual void enterScript(ExprParser::ScriptContext *ctx) = 0;
  virtual void exitScript(ExprParser::ScriptContext *ctx) = 0;

  virtual void enterSimpleCommand(ExprParser::SimpleCommandContext *ctx) = 0;
  virtual void exitSimpleCommand(ExprParser::SimpleCommandContext *ctx) = 0;

  virtual void enterStatement(ExprParser::StatementContext *ctx) = 0;
  virtual void exitStatement(ExprParser::StatementContext *ctx) = 0;

  virtual void enterIfCommand(ExprParser::IfCommandContext *ctx) = 0;
  virtual void exitIfCommand(ExprParser::IfCommandContext *ctx) = 0;

  virtual void enterLoop(ExprParser::LoopContext *ctx) = 0;
  virtual void exitLoop(ExprParser::LoopContext *ctx) = 0;

  virtual void enterAssignment(ExprParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(ExprParser::AssignmentContext *ctx) = 0;

  virtual void enterListDeclaration(ExprParser::ListDeclarationContext *ctx) = 0;
  virtual void exitListDeclaration(ExprParser::ListDeclarationContext *ctx) = 0;

  virtual void enterCondition(ExprParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(ExprParser::ConditionContext *ctx) = 0;

  virtual void enterExpression(ExprParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(ExprParser::ExpressionContext *ctx) = 0;

  virtual void enterSimpleExpression(ExprParser::SimpleExpressionContext *ctx) = 0;
  virtual void exitSimpleExpression(ExprParser::SimpleExpressionContext *ctx) = 0;


};

