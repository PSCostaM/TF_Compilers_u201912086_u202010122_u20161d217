
// Generated from Expr.g4 by ANTLR 4.13.1


#include "ExprListener.h"

#include "ExprParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ExprParserStaticData final {
  ExprParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ExprParserStaticData(const ExprParserStaticData&) = delete;
  ExprParserStaticData(ExprParserStaticData&&) = delete;
  ExprParserStaticData& operator=(const ExprParserStaticData&) = delete;
  ExprParserStaticData& operator=(ExprParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag exprParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ExprParserStaticData *exprParserStaticData = nullptr;

void exprParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (exprParserStaticData != nullptr) {
    return;
  }
#else
  assert(exprParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ExprParserStaticData>(
    std::vector<std::string>{
      "command", "script", "simpleCommand", "statement", "ifCommand", "loop", 
      "assignment", "listDeclaration", "condition", "expression", "simpleExpression"
    },
    std::vector<std::string>{
      "", "'if'", "'then'", "'else'", "'fi'", "'for'", "'in'", "','", "'do'", 
      "'done'", "'while'", "'='", "'declare'", "' -a'", "'['", "']'", "'&&'", 
      "'||'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "WORD", "ARG", "STRING", "NUMBER", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,22,119,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,1,0,1,0,3,0,25,8,0,1,1,5,1,28,8,1,10,
  	1,12,1,31,9,1,1,2,1,2,4,2,35,8,2,11,2,12,2,36,3,2,39,8,2,1,3,1,3,1,3,
  	1,3,3,3,45,8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,
  	5,5,5,61,8,5,10,5,12,5,64,9,5,3,5,66,8,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,
  	1,5,1,5,1,5,3,5,78,8,5,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,5,7,92,8,7,10,7,12,7,95,9,7,3,7,97,8,7,1,7,1,7,1,8,1,8,1,9,1,9,1,9,
  	1,9,1,9,1,9,1,9,1,9,1,9,5,9,112,8,9,10,9,12,9,115,9,9,1,10,1,10,1,10,
  	0,1,18,11,0,2,4,6,8,10,12,14,16,18,20,0,1,2,0,18,19,21,21,121,0,24,1,
  	0,0,0,2,29,1,0,0,0,4,32,1,0,0,0,6,44,1,0,0,0,8,46,1,0,0,0,10,77,1,0,0,
  	0,12,79,1,0,0,0,14,83,1,0,0,0,16,100,1,0,0,0,18,102,1,0,0,0,20,116,1,
  	0,0,0,22,25,3,4,2,0,23,25,3,8,4,0,24,22,1,0,0,0,24,23,1,0,0,0,25,1,1,
  	0,0,0,26,28,3,6,3,0,27,26,1,0,0,0,28,31,1,0,0,0,29,27,1,0,0,0,29,30,1,
  	0,0,0,30,3,1,0,0,0,31,29,1,0,0,0,32,38,5,18,0,0,33,35,5,19,0,0,34,33,
  	1,0,0,0,35,36,1,0,0,0,36,34,1,0,0,0,36,37,1,0,0,0,37,39,1,0,0,0,38,34,
  	1,0,0,0,38,39,1,0,0,0,39,5,1,0,0,0,40,45,3,0,0,0,41,45,3,10,5,0,42,45,
  	3,12,6,0,43,45,3,14,7,0,44,40,1,0,0,0,44,41,1,0,0,0,44,42,1,0,0,0,44,
  	43,1,0,0,0,45,7,1,0,0,0,46,47,5,1,0,0,47,48,3,16,8,0,48,49,5,2,0,0,49,
  	50,3,2,1,0,50,51,5,3,0,0,51,52,3,2,1,0,52,53,5,4,0,0,53,9,1,0,0,0,54,
  	55,5,5,0,0,55,56,5,18,0,0,56,65,5,6,0,0,57,62,5,18,0,0,58,59,5,7,0,0,
  	59,61,5,18,0,0,60,58,1,0,0,0,61,64,1,0,0,0,62,60,1,0,0,0,62,63,1,0,0,
  	0,63,66,1,0,0,0,64,62,1,0,0,0,65,57,1,0,0,0,65,66,1,0,0,0,66,67,1,0,0,
  	0,67,68,5,8,0,0,68,69,3,2,1,0,69,70,5,9,0,0,70,78,1,0,0,0,71,72,5,10,
  	0,0,72,73,3,16,8,0,73,74,5,8,0,0,74,75,3,2,1,0,75,76,5,9,0,0,76,78,1,
  	0,0,0,77,54,1,0,0,0,77,71,1,0,0,0,78,11,1,0,0,0,79,80,5,18,0,0,80,81,
  	5,11,0,0,81,82,3,18,9,0,82,13,1,0,0,0,83,84,5,12,0,0,84,85,5,13,0,0,85,
  	86,5,18,0,0,86,87,5,11,0,0,87,96,5,14,0,0,88,93,3,18,9,0,89,90,5,7,0,
  	0,90,92,3,18,9,0,91,89,1,0,0,0,92,95,1,0,0,0,93,91,1,0,0,0,93,94,1,0,
  	0,0,94,97,1,0,0,0,95,93,1,0,0,0,96,88,1,0,0,0,96,97,1,0,0,0,97,98,1,0,
  	0,0,98,99,5,15,0,0,99,15,1,0,0,0,100,101,5,18,0,0,101,17,1,0,0,0,102,
  	103,6,9,-1,0,103,104,3,20,10,0,104,113,1,0,0,0,105,106,10,2,0,0,106,107,
  	5,16,0,0,107,112,3,20,10,0,108,109,10,1,0,0,109,110,5,17,0,0,110,112,
  	3,20,10,0,111,105,1,0,0,0,111,108,1,0,0,0,112,115,1,0,0,0,113,111,1,0,
  	0,0,113,114,1,0,0,0,114,19,1,0,0,0,115,113,1,0,0,0,116,117,7,0,0,0,117,
  	21,1,0,0,0,12,24,29,36,38,44,62,65,77,93,96,111,113
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  exprParserStaticData = staticData.release();
}

}

ExprParser::ExprParser(TokenStream *input) : ExprParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ExprParser::ExprParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ExprParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *exprParserStaticData->atn, exprParserStaticData->decisionToDFA, exprParserStaticData->sharedContextCache, options);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

const atn::ATN& ExprParser::getATN() const {
  return *exprParserStaticData->atn;
}

std::string ExprParser::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return exprParserStaticData->ruleNames;
}

const dfa::Vocabulary& ExprParser::getVocabulary() const {
  return exprParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ExprParser::getSerializedATN() const {
  return exprParserStaticData->serializedATN;
}


//----------------- CommandContext ------------------------------------------------------------------

ExprParser::CommandContext::CommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::SimpleCommandContext* ExprParser::CommandContext::simpleCommand() {
  return getRuleContext<ExprParser::SimpleCommandContext>(0);
}

ExprParser::IfCommandContext* ExprParser::CommandContext::ifCommand() {
  return getRuleContext<ExprParser::IfCommandContext>(0);
}


size_t ExprParser::CommandContext::getRuleIndex() const {
  return ExprParser::RuleCommand;
}

void ExprParser::CommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommand(this);
}

void ExprParser::CommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommand(this);
}

ExprParser::CommandContext* ExprParser::command() {
  CommandContext *_localctx = _tracker.createInstance<CommandContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprParser::RuleCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(24);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::WORD: {
        enterOuterAlt(_localctx, 1);
        setState(22);
        simpleCommand();
        break;
      }

      case ExprParser::T__0: {
        enterOuterAlt(_localctx, 2);
        setState(23);
        ifCommand();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScriptContext ------------------------------------------------------------------

ExprParser::ScriptContext::ScriptContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::StatementContext *> ExprParser::ScriptContext::statement() {
  return getRuleContexts<ExprParser::StatementContext>();
}

ExprParser::StatementContext* ExprParser::ScriptContext::statement(size_t i) {
  return getRuleContext<ExprParser::StatementContext>(i);
}


size_t ExprParser::ScriptContext::getRuleIndex() const {
  return ExprParser::RuleScript;
}

void ExprParser::ScriptContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScript(this);
}

void ExprParser::ScriptContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScript(this);
}

ExprParser::ScriptContext* ExprParser::script() {
  ScriptContext *_localctx = _tracker.createInstance<ScriptContext>(_ctx, getState());
  enterRule(_localctx, 2, ExprParser::RuleScript);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 267298) != 0)) {
      setState(26);
      statement();
      setState(31);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleCommandContext ------------------------------------------------------------------

ExprParser::SimpleCommandContext::SimpleCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::SimpleCommandContext::WORD() {
  return getToken(ExprParser::WORD, 0);
}

std::vector<tree::TerminalNode *> ExprParser::SimpleCommandContext::ARG() {
  return getTokens(ExprParser::ARG);
}

tree::TerminalNode* ExprParser::SimpleCommandContext::ARG(size_t i) {
  return getToken(ExprParser::ARG, i);
}


size_t ExprParser::SimpleCommandContext::getRuleIndex() const {
  return ExprParser::RuleSimpleCommand;
}

void ExprParser::SimpleCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleCommand(this);
}

void ExprParser::SimpleCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleCommand(this);
}

ExprParser::SimpleCommandContext* ExprParser::simpleCommand() {
  SimpleCommandContext *_localctx = _tracker.createInstance<SimpleCommandContext>(_ctx, getState());
  enterRule(_localctx, 4, ExprParser::RuleSimpleCommand);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(32);
    match(ExprParser::WORD);
    setState(38);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::ARG) {
      setState(34); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(33);
        match(ExprParser::ARG);
        setState(36); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == ExprParser::ARG);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

ExprParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::CommandContext* ExprParser::StatementContext::command() {
  return getRuleContext<ExprParser::CommandContext>(0);
}

ExprParser::LoopContext* ExprParser::StatementContext::loop() {
  return getRuleContext<ExprParser::LoopContext>(0);
}

ExprParser::AssignmentContext* ExprParser::StatementContext::assignment() {
  return getRuleContext<ExprParser::AssignmentContext>(0);
}

ExprParser::ListDeclarationContext* ExprParser::StatementContext::listDeclaration() {
  return getRuleContext<ExprParser::ListDeclarationContext>(0);
}


size_t ExprParser::StatementContext::getRuleIndex() const {
  return ExprParser::RuleStatement;
}

void ExprParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void ExprParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

ExprParser::StatementContext* ExprParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 6, ExprParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(44);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(40);
      command();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(41);
      loop();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(42);
      assignment();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(43);
      listDeclaration();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfCommandContext ------------------------------------------------------------------

ExprParser::IfCommandContext::IfCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::ConditionContext* ExprParser::IfCommandContext::condition() {
  return getRuleContext<ExprParser::ConditionContext>(0);
}

std::vector<ExprParser::ScriptContext *> ExprParser::IfCommandContext::script() {
  return getRuleContexts<ExprParser::ScriptContext>();
}

ExprParser::ScriptContext* ExprParser::IfCommandContext::script(size_t i) {
  return getRuleContext<ExprParser::ScriptContext>(i);
}


size_t ExprParser::IfCommandContext::getRuleIndex() const {
  return ExprParser::RuleIfCommand;
}

void ExprParser::IfCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfCommand(this);
}

void ExprParser::IfCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfCommand(this);
}

ExprParser::IfCommandContext* ExprParser::ifCommand() {
  IfCommandContext *_localctx = _tracker.createInstance<IfCommandContext>(_ctx, getState());
  enterRule(_localctx, 8, ExprParser::RuleIfCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    match(ExprParser::T__0);
    setState(47);
    condition();
    setState(48);
    match(ExprParser::T__1);
    setState(49);
    script();
    setState(50);
    match(ExprParser::T__2);
    setState(51);
    script();
    setState(52);
    match(ExprParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopContext ------------------------------------------------------------------

ExprParser::LoopContext::LoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ExprParser::LoopContext::WORD() {
  return getTokens(ExprParser::WORD);
}

tree::TerminalNode* ExprParser::LoopContext::WORD(size_t i) {
  return getToken(ExprParser::WORD, i);
}

ExprParser::ScriptContext* ExprParser::LoopContext::script() {
  return getRuleContext<ExprParser::ScriptContext>(0);
}

ExprParser::ConditionContext* ExprParser::LoopContext::condition() {
  return getRuleContext<ExprParser::ConditionContext>(0);
}


size_t ExprParser::LoopContext::getRuleIndex() const {
  return ExprParser::RuleLoop;
}

void ExprParser::LoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoop(this);
}

void ExprParser::LoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoop(this);
}

ExprParser::LoopContext* ExprParser::loop() {
  LoopContext *_localctx = _tracker.createInstance<LoopContext>(_ctx, getState());
  enterRule(_localctx, 10, ExprParser::RuleLoop);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(77);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::T__4: {
        enterOuterAlt(_localctx, 1);
        setState(54);
        match(ExprParser::T__4);
        setState(55);
        match(ExprParser::WORD);
        setState(56);
        match(ExprParser::T__5);
        setState(65);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == ExprParser::WORD) {
          setState(57);
          match(ExprParser::WORD);
          setState(62);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == ExprParser::T__6) {
            setState(58);
            match(ExprParser::T__6);
            setState(59);
            match(ExprParser::WORD);
            setState(64);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(67);
        match(ExprParser::T__7);
        setState(68);
        script();
        setState(69);
        match(ExprParser::T__8);
        break;
      }

      case ExprParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(71);
        match(ExprParser::T__9);
        setState(72);
        condition();
        setState(73);
        match(ExprParser::T__7);
        setState(74);
        script();
        setState(75);
        match(ExprParser::T__8);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

ExprParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::AssignmentContext::WORD() {
  return getToken(ExprParser::WORD, 0);
}

ExprParser::ExpressionContext* ExprParser::AssignmentContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}


size_t ExprParser::AssignmentContext::getRuleIndex() const {
  return ExprParser::RuleAssignment;
}

void ExprParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void ExprParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

ExprParser::AssignmentContext* ExprParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 12, ExprParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(ExprParser::WORD);
    setState(80);
    match(ExprParser::T__10);
    setState(81);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListDeclarationContext ------------------------------------------------------------------

ExprParser::ListDeclarationContext::ListDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ListDeclarationContext::WORD() {
  return getToken(ExprParser::WORD, 0);
}

std::vector<ExprParser::ExpressionContext *> ExprParser::ListDeclarationContext::expression() {
  return getRuleContexts<ExprParser::ExpressionContext>();
}

ExprParser::ExpressionContext* ExprParser::ListDeclarationContext::expression(size_t i) {
  return getRuleContext<ExprParser::ExpressionContext>(i);
}


size_t ExprParser::ListDeclarationContext::getRuleIndex() const {
  return ExprParser::RuleListDeclaration;
}

void ExprParser::ListDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterListDeclaration(this);
}

void ExprParser::ListDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitListDeclaration(this);
}

ExprParser::ListDeclarationContext* ExprParser::listDeclaration() {
  ListDeclarationContext *_localctx = _tracker.createInstance<ListDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 14, ExprParser::RuleListDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    match(ExprParser::T__11);
    setState(84);
    match(ExprParser::T__12);
    setState(85);
    match(ExprParser::WORD);
    setState(86);
    match(ExprParser::T__10);
    setState(87);
    match(ExprParser::T__13);
    setState(96);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2883584) != 0)) {
      setState(88);
      expression(0);
      setState(93);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ExprParser::T__6) {
        setState(89);
        match(ExprParser::T__6);
        setState(90);
        expression(0);
        setState(95);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(98);
    match(ExprParser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

ExprParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ConditionContext::WORD() {
  return getToken(ExprParser::WORD, 0);
}


size_t ExprParser::ConditionContext::getRuleIndex() const {
  return ExprParser::RuleCondition;
}

void ExprParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void ExprParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}

ExprParser::ConditionContext* ExprParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 16, ExprParser::RuleCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    match(ExprParser::WORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

ExprParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::SimpleExpressionContext* ExprParser::ExpressionContext::simpleExpression() {
  return getRuleContext<ExprParser::SimpleExpressionContext>(0);
}

ExprParser::ExpressionContext* ExprParser::ExpressionContext::expression() {
  return getRuleContext<ExprParser::ExpressionContext>(0);
}


size_t ExprParser::ExpressionContext::getRuleIndex() const {
  return ExprParser::RuleExpression;
}

void ExprParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void ExprParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


ExprParser::ExpressionContext* ExprParser::expression() {
   return expression(0);
}

ExprParser::ExpressionContext* ExprParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  ExprParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, ExprParser::RuleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(103);
    simpleExpression();
    _ctx->stop = _input->LT(-1);
    setState(113);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(111);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(105);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(106);
          match(ExprParser::T__15);
          setState(107);
          simpleExpression();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpression);
          setState(108);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(109);
          match(ExprParser::T__16);
          setState(110);
          simpleExpression();
          break;
        }

        default:
          break;
        } 
      }
      setState(115);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- SimpleExpressionContext ------------------------------------------------------------------

ExprParser::SimpleExpressionContext::SimpleExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::SimpleExpressionContext::WORD() {
  return getToken(ExprParser::WORD, 0);
}

tree::TerminalNode* ExprParser::SimpleExpressionContext::ARG() {
  return getToken(ExprParser::ARG, 0);
}

tree::TerminalNode* ExprParser::SimpleExpressionContext::NUMBER() {
  return getToken(ExprParser::NUMBER, 0);
}


size_t ExprParser::SimpleExpressionContext::getRuleIndex() const {
  return ExprParser::RuleSimpleExpression;
}

void ExprParser::SimpleExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleExpression(this);
}

void ExprParser::SimpleExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleExpression(this);
}

ExprParser::SimpleExpressionContext* ExprParser::simpleExpression() {
  SimpleExpressionContext *_localctx = _tracker.createInstance<SimpleExpressionContext>(_ctx, getState());
  enterRule(_localctx, 20, ExprParser::RuleSimpleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2883584) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ExprParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 9: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ExprParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void ExprParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  exprParserInitialize();
#else
  ::antlr4::internal::call_once(exprParserOnceFlag, exprParserInitialize);
#endif
}
