
// Generated from Expr.g4 by ANTLR 4.13.1


#include "ExprLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct ExprLexerStaticData final {
  ExprLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ExprLexerStaticData(const ExprLexerStaticData&) = delete;
  ExprLexerStaticData(ExprLexerStaticData&&) = delete;
  ExprLexerStaticData& operator=(const ExprLexerStaticData&) = delete;
  ExprLexerStaticData& operator=(ExprLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag exprlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ExprLexerStaticData *exprlexerLexerStaticData = nullptr;

void exprlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (exprlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(exprlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ExprLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "WORD", "ARG", "STRING", "NUMBER", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,22,143,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,
  	1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,
  	9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,12,1,12,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,15,1,16,1,16,1,
  	16,1,17,1,17,5,17,111,8,17,10,17,12,17,114,9,17,1,18,1,18,3,18,118,8,
  	18,1,19,1,19,5,19,122,8,19,10,19,12,19,125,9,19,1,19,1,19,1,20,3,20,130,
  	8,20,1,20,4,20,133,8,20,11,20,12,20,134,1,21,4,21,138,8,21,11,21,12,21,
  	139,1,21,1,21,0,0,22,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,
  	11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,
  	1,0,6,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,34,34,2,
  	0,43,43,45,45,1,0,48,57,3,0,9,10,13,13,32,32,148,0,1,1,0,0,0,0,3,1,0,
  	0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,
  	1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,
  	0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,
  	0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,1,45,1,0,0,0,3,48,
  	1,0,0,0,5,53,1,0,0,0,7,58,1,0,0,0,9,61,1,0,0,0,11,65,1,0,0,0,13,68,1,
  	0,0,0,15,70,1,0,0,0,17,73,1,0,0,0,19,78,1,0,0,0,21,84,1,0,0,0,23,86,1,
  	0,0,0,25,94,1,0,0,0,27,98,1,0,0,0,29,100,1,0,0,0,31,102,1,0,0,0,33,105,
  	1,0,0,0,35,108,1,0,0,0,37,117,1,0,0,0,39,119,1,0,0,0,41,129,1,0,0,0,43,
  	137,1,0,0,0,45,46,5,105,0,0,46,47,5,102,0,0,47,2,1,0,0,0,48,49,5,116,
  	0,0,49,50,5,104,0,0,50,51,5,101,0,0,51,52,5,110,0,0,52,4,1,0,0,0,53,54,
  	5,101,0,0,54,55,5,108,0,0,55,56,5,115,0,0,56,57,5,101,0,0,57,6,1,0,0,
  	0,58,59,5,102,0,0,59,60,5,105,0,0,60,8,1,0,0,0,61,62,5,102,0,0,62,63,
  	5,111,0,0,63,64,5,114,0,0,64,10,1,0,0,0,65,66,5,105,0,0,66,67,5,110,0,
  	0,67,12,1,0,0,0,68,69,5,44,0,0,69,14,1,0,0,0,70,71,5,100,0,0,71,72,5,
  	111,0,0,72,16,1,0,0,0,73,74,5,100,0,0,74,75,5,111,0,0,75,76,5,110,0,0,
  	76,77,5,101,0,0,77,18,1,0,0,0,78,79,5,119,0,0,79,80,5,104,0,0,80,81,5,
  	105,0,0,81,82,5,108,0,0,82,83,5,101,0,0,83,20,1,0,0,0,84,85,5,61,0,0,
  	85,22,1,0,0,0,86,87,5,100,0,0,87,88,5,101,0,0,88,89,5,99,0,0,89,90,5,
  	108,0,0,90,91,5,97,0,0,91,92,5,114,0,0,92,93,5,101,0,0,93,24,1,0,0,0,
  	94,95,5,32,0,0,95,96,5,45,0,0,96,97,5,97,0,0,97,26,1,0,0,0,98,99,5,91,
  	0,0,99,28,1,0,0,0,100,101,5,93,0,0,101,30,1,0,0,0,102,103,5,38,0,0,103,
  	104,5,38,0,0,104,32,1,0,0,0,105,106,5,124,0,0,106,107,5,124,0,0,107,34,
  	1,0,0,0,108,112,7,0,0,0,109,111,7,1,0,0,110,109,1,0,0,0,111,114,1,0,0,
  	0,112,110,1,0,0,0,112,113,1,0,0,0,113,36,1,0,0,0,114,112,1,0,0,0,115,
  	118,3,35,17,0,116,118,3,39,19,0,117,115,1,0,0,0,117,116,1,0,0,0,118,38,
  	1,0,0,0,119,123,5,34,0,0,120,122,8,2,0,0,121,120,1,0,0,0,122,125,1,0,
  	0,0,123,121,1,0,0,0,123,124,1,0,0,0,124,126,1,0,0,0,125,123,1,0,0,0,126,
  	127,5,34,0,0,127,40,1,0,0,0,128,130,7,3,0,0,129,128,1,0,0,0,129,130,1,
  	0,0,0,130,132,1,0,0,0,131,133,7,4,0,0,132,131,1,0,0,0,133,134,1,0,0,0,
  	134,132,1,0,0,0,134,135,1,0,0,0,135,42,1,0,0,0,136,138,7,5,0,0,137,136,
  	1,0,0,0,138,139,1,0,0,0,139,137,1,0,0,0,139,140,1,0,0,0,140,141,1,0,0,
  	0,141,142,6,21,0,0,142,44,1,0,0,0,7,0,112,117,123,129,134,139,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  exprlexerLexerStaticData = staticData.release();
}

}

ExprLexer::ExprLexer(CharStream *input) : Lexer(input) {
  ExprLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *exprlexerLexerStaticData->atn, exprlexerLexerStaticData->decisionToDFA, exprlexerLexerStaticData->sharedContextCache);
}

ExprLexer::~ExprLexer() {
  delete _interpreter;
}

std::string ExprLexer::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprLexer::getRuleNames() const {
  return exprlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& ExprLexer::getChannelNames() const {
  return exprlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& ExprLexer::getModeNames() const {
  return exprlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& ExprLexer::getVocabulary() const {
  return exprlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ExprLexer::getSerializedATN() const {
  return exprlexerLexerStaticData->serializedATN;
}

const atn::ATN& ExprLexer::getATN() const {
  return *exprlexerLexerStaticData->atn;
}




void ExprLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  exprlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(exprlexerLexerOnceFlag, exprlexerLexerInitialize);
#endif
}
