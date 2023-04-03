
#include "LiuPQ.h"
#include <iostream>

using namespace std;
void LL1::CreateLL1Table() {
	
	LL1Table[Rep::Program][LexType::PROGRAM] = 1;
	LL1Table[Rep::ProgramHead][LexType::PROGRAM] = 2;
	LL1Table[Rep::ProgramName][LexType::ID] = 3;
	LL1Table[Rep::DeclarePart][LexType::TYPE] = 4;
	LL1Table[Rep::DeclarePart][LexType::VAR] = 4;
	LL1Table[Rep::DeclarePart][LexType::PROCEDURE] = 4;
	LL1Table[Rep::DeclarePart][LexType::BEGIN1] = 4;
	LL1Table[Rep::TypeDecpart][LexType::VAR] = 5;
	LL1Table[Rep::TypeDecpart][LexType::PROCEDURE] = 5;
	LL1Table[Rep::TypeDecpart][LexType::BEGIN1] = 5;
	LL1Table[Rep::TypeDecpart][LexType::TYPE] = 6;
	LL1Table[Rep::TypeDec][LexType::TYPE] = 7;
	LL1Table[Rep::TypeDecList][LexType::ID] = 8;
	LL1Table[Rep::TypeDecMore][LexType::VAR] = 9;
	LL1Table[Rep::TypeDecMore][LexType::PROCEDURE] = 9;
	LL1Table[Rep::TypeDecMore][LexType::BEGIN1] = 9;
	LL1Table[Rep::TypeDecMore][LexType::ID] = 10;
	LL1Table[Rep::TypeId][LexType::ID] = 11;
	LL1Table[Rep::TypeDef][LexType::INTEGER] = 12;
	LL1Table[Rep::TypeDef][LexType::CHAR1] = 12;
	LL1Table[Rep::TypeDef][LexType::CHARC] = 12;
	LL1Table[Rep::TypeDef][LexType::ARRAY] = 13;
	LL1Table[Rep::TypeDef][LexType::RECORD] = 13;
	LL1Table[Rep::TypeDef][LexType::ID] = 12;
	LL1Table[Rep::BaseType][LexType::INTEGER] = 15;
	LL1Table[Rep::BaseType][LexType::CHAR1] = 16;
	LL1Table[Rep::BaseType][LexType::CHARC] = 16;
	LL1Table[Rep::StructureType][LexType::ARRAY] = 17;
	LL1Table[Rep::StructureType][LexType::RECORD] = 18;
	LL1Table[Rep::ArrayType][LexType::ARRAY] = 19;
	LL1Table[Rep::Low][LexType::INTC] = 20;
	LL1Table[Rep::Top][LexType::INTC] = 21;
	LL1Table[Rep::RecType][LexType::RECORD] = 22;
	LL1Table[Rep::FieldDecList][LexType::INTEGER] = 23;
	LL1Table[Rep::FieldDecList][LexType::CHAR1] = 23;
	LL1Table[Rep::FieldDecList][LexType::CHARC] = 23;
	LL1Table[Rep::FieldDecList][LexType::ARRAY] = 24;
	LL1Table[Rep::FieldDecMore][LexType::END1] = 25;
	LL1Table[Rep::FieldDecMore][LexType::CHAR1] = 26;
	LL1Table[Rep::FieldDecMore][LexType::CHARC] = 26;
	LL1Table[Rep::FieldDecMore][LexType::INTEGER] = 26;
	LL1Table[Rep::FieldDecMore][LexType::ARRAY] = 26;
	LL1Table[Rep::IdList][LexType::ID] = 27;
	LL1Table[Rep::IdMore][LexType::SEMI] = 28;
	LL1Table[Rep::IdMore][LexType::COMMA] = 29;
	LL1Table[Rep::VarDecpart][LexType::PROCEDURE] = 30;
	LL1Table[Rep::VarDecpart][LexType::BEGIN1] = 30;
	LL1Table[Rep::VarDecpart][LexType::VAR] = 31;
	LL1Table[Rep::VarDec][LexType::VAR] = 32;
	LL1Table[Rep::VarDecList][LexType::INTEGER] = 33;
	LL1Table[Rep::VarDecList][LexType::CHAR1] = 33;
	LL1Table[Rep::VarDecList][LexType::CHARC] = 33;
	LL1Table[Rep::VarDecList][LexType::ARRAY] = 33;
	LL1Table[Rep::VarDecList][LexType::RECORD] = 33;
	LL1Table[Rep::VarDecList][LexType::ID] = 33;
	LL1Table[Rep::VarDecMore][LexType::PROCEDURE] = 34;
	LL1Table[Rep::VarDecMore][LexType::BEGIN1] = 34;
	LL1Table[Rep::VarDecMore][LexType::INTEGER] = 35;
	LL1Table[Rep::VarDecMore][LexType::CHAR1] = 35;
	LL1Table[Rep::VarDecMore][LexType::CHARC] = 35;
	LL1Table[Rep::VarDecMore][LexType::ARRAY] = 35;
	LL1Table[Rep::VarDecMore][LexType::RECORD] = 35;
	LL1Table[Rep::VarDecMore][LexType::ID] = 35;
	LL1Table[Rep::VarIdList][LexType::ID] = 36;
	LL1Table[Rep::VarIdMore][LexType::SEMI] = 37;
	LL1Table[Rep::VarIdMore][LexType::COMMA] = 38;
	LL1Table[Rep::ProcDecPart][LexType::BEGIN1] = 39;
	LL1Table[Rep::ProcDecPart][LexType::PROCEDURE] = 40;
	LL1Table[Rep::ProcDec][LexType::PROCEDURE] = 41;
	LL1Table[Rep::ProcDecMore][LexType::BEGIN1] = 42;
	LL1Table[Rep::ProcDecMore][LexType::PROCEDURE] = 43;
	LL1Table[Rep::ProcName][LexType::ID] = 44;
	LL1Table[Rep::ParamList][LexType::RPAREN] = 45;
	LL1Table[Rep::ParamList][LexType::INTEGER] = 46;
	LL1Table[Rep::ParamList][LexType::CHAR1] = 46;
	LL1Table[Rep::ParamList][LexType::CHARC] = 46;
	LL1Table[Rep::ParamList][LexType::ARRAY] = 46;
	LL1Table[Rep::ParamList][LexType::RECORD] = 46;
	LL1Table[Rep::ParamList][LexType::ID] = 46;
	LL1Table[Rep::ParamList][LexType::VAR] = 46;
	LL1Table[Rep::ParamDecList][LexType::INTEGER] = 47;
	LL1Table[Rep::ParamDecList][LexType::CHAR1] = 47;
	LL1Table[Rep::ParamDecList][LexType::CHARC] = 47;
	LL1Table[Rep::ParamDecList][LexType::ARRAY] = 47;
	LL1Table[Rep::ParamDecList][LexType::RECORD] = 47;
	LL1Table[Rep::ParamDecList][LexType::ID] = 47;
	LL1Table[Rep::ParamDecList][LexType::VAR] = 47;
	LL1Table[Rep::ParamMore][LexType::LPAREN] = 48;
	LL1Table[Rep::ParamMore][LexType::SEMI] = 49;
	LL1Table[Rep::Param][LexType::INTEGER] = 50;
	LL1Table[Rep::Param][LexType::CHAR1] = 50;
	LL1Table[Rep::Param][LexType::CHARC] = 50;
	LL1Table[Rep::Param][LexType::ARRAY] = 50;
	LL1Table[Rep::Param][LexType::RECORD] = 50;
	LL1Table[Rep::Param][LexType::ID] = 50;
	LL1Table[Rep::Param][LexType::VAR] = 51;
	LL1Table[Rep::FormList][LexType::ID] = 52;
	LL1Table[Rep::FidMore][LexType::SEMI] = 53;
	LL1Table[Rep::FidMore][LexType::RPAREN] = 53;
	LL1Table[Rep::FidMore][LexType::COMMA] = 54;
	LL1Table[Rep::ProcDecPart][LexType::TYPE] = 55;
	LL1Table[Rep::ProcDecPart][LexType::VAR] = 55;
	LL1Table[Rep::ProcDecPart][LexType::PROCEDURE] = 55;
	LL1Table[Rep::ProcDecPart][LexType::BEGIN1] = 55;
	LL1Table[Rep::ProcBody][LexType::BEGIN1] = 56;
	LL1Table[Rep::ProgramBody][LexType::BEGIN1] = 57;
	LL1Table[Rep::StmList][LexType::ID] = 58;
	LL1Table[Rep::StmList][LexType::IF] = 58;
	LL1Table[Rep::StmList][LexType::WHILE] = 58;
	LL1Table[Rep::StmList][LexType::RETURN1] = 58;
	LL1Table[Rep::StmList][LexType::READ] = 58;
	LL1Table[Rep::StmList][LexType::WRITE] = 58;
	LL1Table[Rep::StmMore][LexType::ELSE] = 59;
	LL1Table[Rep::StmMore][LexType::FI] = 59;
	LL1Table[Rep::StmMore][LexType::END1] = 59;
	LL1Table[Rep::StmMore][LexType::ENDWH] = 59;
	LL1Table[Rep::StmMore][LexType::SEMI] = 60;
	LL1Table[Rep::Stm][LexType::IF] = 61;
	LL1Table[Rep::Stm][LexType::WHILE] = 62;
	LL1Table[Rep::Stm][LexType::READ] = 63;
	LL1Table[Rep::Stm][LexType::WRITE] = 64;
	LL1Table[Rep::Stm][LexType::RETURN1] = 65;
	LL1Table[Rep::Stm][LexType::ID] = 66;
	LL1Table[Rep::AssCall][LexType::ASSIGN] = 67;
	LL1Table[Rep::AssCall][LexType::DOT] = 67;
	LL1Table[Rep::AssCall][LexType::LIMIDPAREN] = 67;
	LL1Table[Rep::AssCall][LexType::LIMIDPAREN] = 68;
	LL1Table[Rep::AssignmentRest][LexType::LIMIDPAREN] = 69;
	LL1Table[Rep::AssignmentRest][LexType::DOT] = 69;
	LL1Table[Rep::AssignmentRest][LexType::ASSIGN] = 69;
	LL1Table[Rep::ConditionalStm][LexType::IF] = 70;
	LL1Table[Rep::LoopStm][LexType::WHILE] = 71;
	LL1Table[Rep::InputStm][LexType::READ] = 72;
	LL1Table[Rep::InVar][LexType::ID] = 73;
	LL1Table[Rep::OutputStm][LexType::WRITE] = 74;
	LL1Table[Rep::ReturnStm][LexType::RETURN1] = 75;
	LL1Table[Rep::CallStmRest][LexType::LPAREN] = 76;
	LL1Table[Rep::ActParamList][LexType::RPAREN] = 77;
	LL1Table[Rep::ActParamList][LexType::LPAREN] = 78;
	LL1Table[Rep::ActParamList][LexType::INTC] = 78;
	LL1Table[Rep::ActParamList][LexType::ID] = 78;
	LL1Table[Rep::ActParamMore][LexType::RPAREN] = 79;
	LL1Table[Rep::ActParamMore][LexType::COMMA] = 80;
	LL1Table[Rep::RelExp][LexType::LPAREN] = 81;
	LL1Table[Rep::RelExp][LexType::INTC] = 81;
	LL1Table[Rep::RelExp][LexType::ID] = 81;
	LL1Table[Rep::OtherRelE][LexType::LT] = 82;
	LL1Table[Rep::OtherRelE][LexType::EQ] = 82;
	LL1Table[Rep::Exp][LexType::LPAREN] = 83;
	LL1Table[Rep::Exp][LexType::INTC] = 83;
	LL1Table[Rep::Exp][LexType::ID] = 83;
	LL1Table[Rep::OtherTerm][LexType::LT] = 84;
	LL1Table[Rep::OtherTerm][LexType::EQ] = 84;
	LL1Table[Rep::OtherTerm][LexType::RMIDPAREN] = 84;
	LL1Table[Rep::OtherTerm][LexType::THEN] = 84;
	LL1Table[Rep::OtherTerm][LexType::ELSE] = 84;
	LL1Table[Rep::OtherTerm][LexType::FI] = 84;
	LL1Table[Rep::OtherTerm][LexType::DO] = 84;
	LL1Table[Rep::OtherTerm][LexType::ENDWH] = 84;
	LL1Table[Rep::OtherTerm][LexType::RPAREN] = 84;
	LL1Table[Rep::OtherTerm][LexType::END1] = 84;
	LL1Table[Rep::OtherTerm][LexType::SEMI] = 84;
	LL1Table[Rep::OtherTerm][LexType::COMMA] = 84;
	LL1Table[Rep::OtherTerm][LexType::PLUS] = 85;
	LL1Table[Rep::OtherTerm][LexType::MINUS] = 85;
	LL1Table[Rep::Term][LexType::LPAREN] = 86;
	LL1Table[Rep::Term][LexType::INTC] = 86;
	LL1Table[Rep::Term][LexType::ID] = 86;
	LL1Table[Rep::OtherFactor][LexType::PLUS] = 87;
	LL1Table[Rep::OtherFactor][LexType::MINUS] = 87;
	LL1Table[Rep::OtherFactor][LexType::LT] = 87;
	LL1Table[Rep::OtherFactor][LexType::EQ] = 87;
	LL1Table[Rep::OtherFactor][LexType::RMIDPAREN] = 87;
	LL1Table[Rep::OtherFactor][LexType::THEN] = 87;
	LL1Table[Rep::OtherFactor][LexType::ELSE] = 87;
	LL1Table[Rep::OtherFactor][LexType::FI] = 87;
	LL1Table[Rep::OtherFactor][LexType::DO] = 87;
	LL1Table[Rep::OtherFactor][LexType::ENDWH] = 87;
	LL1Table[Rep::OtherFactor][LexType::RPAREN] = 87;
	LL1Table[Rep::OtherFactor][LexType::END1] = 87;
	LL1Table[Rep::OtherFactor][LexType::SEMI] = 87;
	LL1Table[Rep::OtherFactor][LexType::COMMA] = 87;
	LL1Table[Rep::OtherFactor][LexType::TIMES] = 88;
	LL1Table[Rep::OtherFactor][LexType::OVER] = 88;
	LL1Table[Rep::Factor][LexType::LPAREN] = 89;
	LL1Table[Rep::Factor][LexType::INTC] = 90;
	LL1Table[Rep::Factor][LexType::ID] = 91;
	LL1Table[Rep::Variable][LexType::ID] = 92;
	LL1Table[Rep::VarIdMore][LexType::ASSIGN] = 93;
	LL1Table[Rep::VarIdMore][LexType::TIMES] = 93;
	LL1Table[Rep::VarIdMore][LexType::OVER] = 93;
	LL1Table[Rep::VarIdMore][LexType::PLUS] = 93;
	LL1Table[Rep::VarIdMore][LexType::MINUS] = 93;
	LL1Table[Rep::VarIdMore][LexType::LT] = 93;
	LL1Table[Rep::VarIdMore][LexType::EQ] = 93;
	LL1Table[Rep::VarIdMore][LexType::THEN] = 93;
	LL1Table[Rep::VarIdMore][LexType::ELSE] = 93;
	LL1Table[Rep::VarIdMore][LexType::FI] = 93;
	LL1Table[Rep::VarIdMore][LexType::DO] = 93;
	LL1Table[Rep::VarIdMore][LexType::ENDWH] = 93;
	LL1Table[Rep::VarIdMore][LexType::RPAREN] = 93;
	LL1Table[Rep::VarIdMore][LexType::RMIDPAREN] = 93;
	LL1Table[Rep::VarIdMore][LexType::END1] = 93;
	LL1Table[Rep::VarIdMore][LexType::SEMI] = 93;
	LL1Table[Rep::VarIdMore][LexType::COMMA] = 93;
	LL1Table[Rep::VarIdMore][LexType::LPAREN] = 94;
	LL1Table[Rep::VarIdMore][LexType::DOT] = 95;
	LL1Table[Rep::FieldVar][LexType::ID] = 96;
	LL1Table[Rep::FieldVarMore][LexType::ASSIGN] = 97;
	LL1Table[Rep::FieldVarMore][LexType::TIMES] = 97;
	LL1Table[Rep::FieldVarMore][LexType::OVER] = 97;
	LL1Table[Rep::FieldVarMore][LexType::PLUS] = 97;
	LL1Table[Rep::FieldVarMore][LexType::MINUS] = 97;
	LL1Table[Rep::FieldVarMore][LexType::LT] = 97;
	LL1Table[Rep::FieldVarMore][LexType::ASSIGN] = 97;
	LL1Table[Rep::FieldVarMore][LexType::THEN] = 97;
	LL1Table[Rep::FieldVarMore][LexType::ELSE] = 97;
	LL1Table[Rep::FieldVarMore][LexType::FI] = 97;
	LL1Table[Rep::FieldVarMore][LexType::DO] = 97;
	LL1Table[Rep::FieldVarMore][LexType::ENDWH] = 97;
	LL1Table[Rep::FieldVarMore][LexType::RPAREN] = 97;
	LL1Table[Rep::FieldVarMore][LexType::RMIDPAREN] = 97;
	LL1Table[Rep::FieldVarMore][LexType::END1] = 97;
	LL1Table[Rep::FieldVarMore][LexType::SEMI] = 97;
	LL1Table[Rep::FieldVarMore][LexType::COMMA] = 97;
	LL1Table[Rep::FieldVarMore][LexType::LIMIDPAREN] = 98;
	LL1Table[Rep::CmpOp][LexType::LT] = 99;
	LL1Table[Rep::CmpOp][LexType::EQ] = 100;
	LL1Table[Rep::AddOp][LexType::PLUS] = 101;
	LL1Table[Rep::AddOp][LexType::MINUS] = 102;
	LL1Table[Rep::MultOp][LexType::TIMES] = 103;
	LL1Table[Rep::MultOp][LexType::OVER] = 104;
	
}
void LL1::CreateMatchTable() {
	
	matchTable[Rep::PROGRAM] = vector<LexType>();
	matchTable[Rep::PROGRAM].push_back(LexType::PROGRAM);
	matchTable[Rep::ID] = vector<LexType>();
	matchTable[Rep::ID].push_back(LexType::ID);
	matchTable[Rep::TYPE] = vector<LexType>();
	matchTable[Rep::TYPE].push_back(LexType::TYPE);
	matchTable[Rep::INTEGER] = vector<LexType>();
	matchTable[Rep::INTEGER].push_back(LexType::INTEGER);
	matchTable[Rep::CHAR] = vector<LexType>();
	matchTable[Rep::CHAR].push_back(LexType::CHAR1);
	matchTable[Rep::CHAR].push_back(LexType::CHARC);
	matchTable[Rep::ARRAY] = vector<LexType>();
	matchTable[Rep::ARRAY].push_back(LexType::ARRAY);
	matchTable[Rep::OF] = vector<LexType>();
	matchTable[Rep::OF].push_back(LexType::OF);
	matchTable[Rep::INTC] = vector<LexType>();
	matchTable[Rep::INTC].push_back(LexType::INTC);
	matchTable[Rep::RECORD] = vector<LexType>();
	matchTable[Rep::RECORD].push_back(LexType::RECORD);
	matchTable[Rep::END] = vector<LexType>();
	matchTable[Rep::END].push_back(LexType::END1);
	matchTable[Rep::VAR] = vector<LexType>();
	matchTable[Rep::VAR].push_back(LexType::VAR);
	matchTable[Rep::PROCEDURE] = vector<LexType>();
	matchTable[Rep::PROCEDURE].push_back(LexType::PROCEDURE);
	
	matchTable[Rep::BEGIN] = vector<LexType>();
	matchTable[Rep::BEGIN].push_back(LexType::BEGIN1);
	matchTable[Rep::IF] = vector<LexType>();
	matchTable[Rep::IF].push_back(LexType::IF);
	matchTable[Rep::THEN] = vector<LexType>();
	matchTable[Rep::THEN].push_back(LexType::THEN);
	matchTable[Rep::ELSE] = vector<LexType>();
	matchTable[Rep::ELSE].push_back(LexType::ELSE);
	matchTable[Rep::FI] = vector<LexType>();
	matchTable[Rep::FI].push_back(LexType::FI);
	matchTable[Rep::WHILE] = vector<LexType>();
	matchTable[Rep::WHILE].push_back(LexType::WHILE);
	matchTable[Rep::DO] = vector<LexType>();
	matchTable[Rep::DO].push_back(LexType::DO);
	matchTable[Rep::DOT] = vector<LexType>();
	matchTable[Rep::DOT].push_back(LexType::DOT);
	
	matchTable[Rep::ENDWH] = vector<LexType>();
	matchTable[Rep::ENDWH].push_back(LexType::ENDWH);
	matchTable[Rep::READ] = vector<LexType>();
	matchTable[Rep::READ].push_back(LexType::READ);
	matchTable[Rep::WRITE] = vector<LexType>();
	matchTable[Rep::WRITE].push_back(LexType::WRITE);
	matchTable[Rep::RETURN] = vector<LexType>();
	matchTable[Rep::RETURN].push_back(LexType::RETURN1);
	matchTable[Rep::COMMA] = vector<LexType>();
	matchTable[Rep::COMMA].push_back(LexType::COMMA);
	matchTable[Rep::分号] = vector<LexType>();
	matchTable[Rep::分号].push_back(LexType::SEMI);
	matchTable[Rep::冒号] = vector<LexType>();
	matchTable[Rep::冒号].push_back(LexType::COLON);
	matchTable[Rep::左小括号] = vector<LexType>();
	matchTable[Rep::左小括号].push_back(LexType::LPAREN);
	
	matchTable[Rep::右小括号] = vector<LexType>();
	matchTable[Rep::右小括号].push_back(LexType::RPAREN);
	matchTable[Rep::左中括号] = vector<LexType>();
	matchTable[Rep::左中括号].push_back(LexType::LIMIDPAREN);
	matchTable[Rep::右中括号] = vector<LexType>();
	matchTable[Rep::右中括号].push_back(LexType::RMIDPAREN);
	matchTable[Rep::加号] = vector<LexType>();
	matchTable[Rep::加号].push_back(LexType::PLUS);
	matchTable[Rep::减号] = vector<LexType>();
	matchTable[Rep::减号].push_back(LexType::MINUS);
	matchTable[Rep::乘号] = vector<LexType>();
	matchTable[Rep::乘号].push_back(LexType::TIMES);
	matchTable[Rep::除号] = vector<LexType>();
	matchTable[Rep::除号].push_back(LexType::OVER);
	matchTable[Rep::小于号] = vector<LexType>();
	matchTable[Rep::小于号].push_back(LexType::LT);
	matchTable[Rep::等于号] = vector<LexType>();
	matchTable[Rep::等于号].push_back(LexType::EQ);
	matchTable[Rep::赋值号] = vector<LexType>();
	matchTable[Rep::赋值号].push_back(LexType::ASSIGN);
	matchTable[Rep::点] = vector<LexType>();
	matchTable[Rep::点].push_back(LexType::DOT);
	matchTable[Rep::逗号] = vector<LexType>();
	matchTable[Rep::逗号].push_back(LexType::COMMA);
	
}
int LL1::Priosity(LexType op) {
	if (op == LexType::END1)return 0;
	else if (op == LexType::LT || op == LexType::EQ)return 1;
	else if (op == LexType::PLUS || op == LexType::MINUS)return 2;
	else if (op == LexType::TIMES || op == LexType::OVER)return 3;
	else return -1;
}
void LL1::Predict(int num) {
	switch (num) {
	case 1: {
		Process1();
		break;
	}
	case 2: {
		Process2();
		break;
	}
	case 3: {
		Process3();
		break;
	}
	case 4: {
		Process4();
		break;
	}
	case 5: {
		Process5();
		break;
	}
	case 6: {
		Process6();
		break;
	}
	case 7: {
		Process7();
		break;
	}
	case 8: {
		Process8();
		break;
	}
	case 9: {
		Process9();
		break;
	}
	case 10: {
		Process10();
		break;
	}
	case 11: {
		Process11();
		break;
	}
	case 12: {
		Process12();
		break;
	}
	case 13: {
		Process13();
		break;
	}
	case 14: {
		Process14();
		break;
	}
	case 15: {
		Process15();
		break;
	}
	case 16: {
		Process16();
		break;
	}
	case 17: {
		Process17();
		break;
	}
	case 18: {
		Process18();
		break;
	}
	case 19: {
		Process19();
		break;
	}
	case 20: {
		Process20();
		break;
	}
	case 21: {
		Process21();
		break;
	}
	case 22: {
		Process22();
		break;
	}
	case 23: {
		Process23();
		break;
	}
	case 24: {
		Process24();
		break;
	}
	case 25: {
		Process25();
		break;
	}
	case 26: {
		Process26();
		break;
	}
	case 27: {
		Process27();
		break;
	}
	case 28: {
		Process28();
		break;
	}
	case 29: {
		Process29();
		break;
	}
	case 30: {
		Process30();
		break;
	}
	case 31: {
		Process31();
		break;
	}
	case 32: {
		Process32();
		break;
	}
	case 33: {
		Process33();
		break;
	}
	case 34: {
		Process34();
		break;
	}
	case 35: {
		Process35();
		break;
	}
	case 36: {
		Process36();
		break;
	}
	case 37: {
		Process37();
		break;
	}
	case 38: {
		Process38();
		break;
	}
	case 39: {
		Process39();
		break;
	}
	case 40: {
		Process40();
		break;
	}
	case 41: {
		Process41();
		break;
	}
	case 42: {
		Process42();
		break;
	}
	case 43: {
		Process43();
		break;
	}
	case 44: {
		Process44();
		break;
	}
	case 45: {
		Process45();
		break;
	}
	case 46: {
		Process46();
		break;
	}
	case 47: {
		Process47();
		break;
	}
	case 48: {
		Process48();
		break;
	}
	case 49: {
		Process49();
		break;
	}
	case 50: {
		Process50();
		break;
	}
	case 51: {
		Process51();
		break;
	}
	case 52: {
		Process52();
		break;
	}
	case 53: {
		Process53();
		break;
	}
	case 54: {
		Process54();
		break;
	}
	case 55: {
		Process55();
		break;
	}
	case 56: {
		Process56();
		break;
	}
	case 57: {
		Process57();
		break;
	}
	case 58: {
		Process58();
		break;
	}
	case 59: {
		Process59();
		break;
	}
	case 60: {
		Process60();
		break;
	}
	case 61: {
		Process61();
		break;
	}
	case 62: {
		Process62();
		break;
	}
	case 63: {
		Process63();
		break;
	}
	case 64: {
		Process64();
		break;
	}
	case 65: {
		Process65();
		break;
	}
	case 66: {
		Process66();
		break;
	}
	case 67: {
		Process67();
		break;
	}
	case 68: {
		Process68();
		break;
	}
	case 69: {
		Process69();
		break;
	}
	case 70: {
		Process70();
		break;
	}
	case 71: {
		Process72();
		break;
	}
	case 72: {
		Process72();
		break;
	}
	case 73: {
		Process73();
		break;
	}
	case 74: {
		Process74();
		break;
	}
	case 75: {
		Process75();
		break;
	}
	case 76: {
		Process76();
		break;
	}
	case 77: {
		Process77();
		break;
	}
	case 78: {
		Process78();
		break;
	}
	case 79: {
		Process79();
		break;
	}
	case 80: {
		Process80();
		break;
	}
	case 81: {
		Process81();
		break;
	}
	case 82: {
		Process82();
		break;
	}
	case 83: {
		Process83();
		break;
	}
	case 84: {
		Process84();
		break;
	}
	case 85: {
		Process85();
		break;
	}
	case 86: {
		Process86();
		break;
	}
	case 87: {
		Process87();
		break;
	}
	case 88: {
		Process88();
		break;
	}
	case 89: {
		Process89();
		break;
	}
	case 90: {
		Process90();
		break;
	}
	case 91: {
		Process91();
		break;
	}
	case 92: {
		Process92();
		break;
	}
	case 93: {
		Process93();
		break;
	}
	case 94: {
		Process94();
		break;
	}
	case 95: {
		Process95();
		break;
	}
	case 96: {
		Process96();
		break;
	}
	case 97: {
		Process97();
		break;
	}
	case 98: {
		Process98();
		break;
	}
	case 99: {
		Process99();
		break;
	}
	case 100: {
		Process100();
		break;
	}
	case 101: {
		Process101();
		break;
	}
	case 102: {
		Process102();
		break;
	}
	case 103: {
		Process103();
		break;
	}
	case 104: {
		Process104();
		break;
	}
	
	}
}
bool LL1::IfNonTerminalSymbol(Rep cr) {
	if (cr >= Rep::PROGRAM)return true;
	return false;
}
float LL1::Result(TreeNode* t) {
	float lNum, rNum;
	if (t->child[0] != nullptr && t->child[1] != nullptr) {
		lNum = Result(t->child[0]);
		rNum = Result(t->child[1]);
		int priosity = Priosity(t->syntaxTreeNodeProperties.ExpAttr.op);
		if ( priosity== 1) {
			if (t->syntaxTreeNodeProperties.ExpAttr.op == LexType::LT)return (float)(lNum < rNum);
			else return (float)(lNum == rNum);
		}
		else if (priosity == 2) {
			if (t->syntaxTreeNodeProperties.ExpAttr.op == LexType::PLUS)return lNum + rNum;
			else return lNum - rNum;
		}
		else if (priosity == 3) {
			if (t->syntaxTreeNodeProperties.ExpAttr.op == LexType::TIMES)return lNum * rNum;
			else {
				if (rNum == 0) {
					//除零错误
				}
				else {
					return lNum / rNum;
				}
			}
		}
	}
	return t->syntaxTreeNodeProperties.ExpAttr.val;
}
bool LL1::Match() {
	for (LexType lt : matchTable[symbolStack.top()]) {
		if (lt == currentToken->Lex)return true;
	}
	return false;
}
TreeNode* LL1::CreateNode(TreeNode::TreeNodeType type) {
	TreeNode* t = new TreeNode();
	t->nodekind = type;
	return t;
}
TreeNode* LL1::CreateNode(TreeNode::TreeNodeType type, TreeNode::TreeNodeDeclareType decType) {
	TreeNode* t = CreateNode(type);
	t->kind.dec = decType;
	return t;
}
TreeNode* LL1::CreateNode(TreeNode::TreeNodeType type, TreeNode::TreeNodeStatementType staType) {
	TreeNode* t = CreateNode(type);
	t->kind.stmt = staType;
	return t;
}
TreeNode* LL1::CreateNode(TreeNode::TreeNodeType type, TreeNode::TreeNodeExpressionType expType) {
	TreeNode* t = CreateNode(type);
	t->kind.exp = expType;
	return t;
}

TreeNode* LL1::ParseLL() {
	CreateLL1Table();

	symbolStackEmptyFlag = true;
	Push(Rep::Program);

	proTreeNode = CreateNode(TreeNode::TreeNodeType::ProK);

	for (int i = 2; i >= 0; i--)Push(&proTreeNode->child[i]);

	currentToken = GetToken();
	try {
		while (!symbolStack.empty()) {
			if (!IfNonTerminalSymbol(symbolStack.top())) {
				//是终极符
				if (Match()) {
					Pop_cr();
					nowTreeNode->SetLineno(currentToken->Lineshow);
				}
				else {
					string value = to_string(currentToken->Lineshow);
					string str = "在第" + value + "行";
					throw 非期望单词错异常(str);
				}
			}
			else {
				//是非终极符
				int pNum = LL1Table[symbolStack.top()][currentToken->Lex];
				Pop_cr();
				Predict(pNum);
			}
		}
		if (currentToken->Lex != LexType::ENDFILE) {
			string value = to_string(currentToken->Lineshow);
			string str = "在第" + value + "行";
			throw 文件提前结束错误异常(str);
		}
	}
	catch (非期望单词错异常 e) {
		cout << "\n出现非期望单词错异常\n";
		e.what();
	}
	catch (文件提前结束错误异常 e) {
		cout << "\n文件提前结束错误\n";
		e.what();
	}
	
	return proTreeNode;
}

void LL1::Push(Rep cr) {
	symbolStack.push(cr);
}

void LL1::Push(TreeNode** t) {
	treeNodePointerStack.push(t);
}


Rep LL1::Pop_cr() {
	Rep cr = symbolStack.top();
	symbolStack.pop();
	return cr;
}
TreeNode** LL1::Pop_tnp() {
	TreeNode** t = treeNodePointerStack.top();
	treeNodePointerStack.pop();
	return t;
}
TreeNode* LL1::Pop_value() {
	TreeNode* f = operandStack.top();
	operandStack.pop();
	return f;
}
TreeNode* LL1::Pop_op() {
	TreeNode* lt = operatorStack.top();
	operatorStack.pop();
	return lt;
}

TokenList* LL1::GetToken() {
	TokenList* p = TokenListHead;
	TokenListHead = TokenListHead->next;
	return p;
}

void LL1::Process1() {

	Push(Rep::ProgramBody);
	Push(Rep::DeclarePart);
	Push(Rep::ProgramHead);

}
void LL1::Process2() {
	Push(Rep::ProgramName);
	Push(Rep::PROGRAM);
	TreeNode** t = Pop_tnp();
	TreeNode* p = CreateNode(TreeNode::TreeNodeType::PheadK);
	nowTreeNode = p;
	(*t) = p;

}
void LL1::Process3() {
	(*proTreeNode).child[0]->name.push_back(currentToken->Sem);
	int num = (*proTreeNode).child[0]->GetIdnum();
	(*proTreeNode).child[0]->SetIdnum(num + 1);
	
	
}
void LL1::Process4() {
	Push(Rep::FuncDec);
	Push(Rep::VarDec);
	Push(Rep::TypeDec);
	
}
void LL1::Process5() {
	//空函数
}
void LL1::Process6() {
	Push(Rep::TypeDeclaration);
}
void LL1::Process7() {
	Push(Rep::TypeDecList);
	Push(Rep::TYPE);
	TreeNode* p = CreateNode(TreeNode::TreeNodeType::TypeK);
	TreeNode** t = Pop_tnp();
	*t = p;
	nowTreeNode = p;
	Push(&p->sibling);
	Push(&p->child[0]);

}
void LL1::Process8() {
	Push(Rep::TypeDecMore);
	Push(Rep::分号);
	Push(Rep::TypeDef);
	Push(Rep::等于号);
	Push(Rep::TypeId);
	TreeNode* p = CreateNode(TreeNode::TreeNodeType::DecK,TreeNode::TreeNodeDeclareType::IdK_Dec);
	TreeNode** t = Pop_tnp();
	*t = p;
	nowTreeNode = p;
	Push(&nowTreeNode->sibling);
	
}
void LL1::Process9() {
	Pop_tnp();
}
void LL1::Process10() {
	Push(Rep::TypeDecMore);
}
void LL1::Process11() {
	Push(Rep::ID);
	nowTreeNode->name.push_back(currentToken->Sem);
	nowTreeNode->SetIdnum(nowTreeNode->GetIdnum() + 1);

}
void LL1::Process12() {
	Push(Rep::BaseType);
	temp->treeNodeKindTypeUnion = &nowTreeNode->kind;
}
void LL1::Process13() {
	Push(Rep::StructureType);
}
void LL1::Process14() {
	nowTreeNode->kind.dec = TreeNode::TreeNodeDeclareType::IdK_Dec;
	Push(Rep::ID);
	nowTreeNode->SetIdnum(nowTreeNode->GetIdnum() + 1);
}
void LL1::Process15() {
	Push(Rep::INTEGER);
	temp->treeNodeKindTypeUnion->dec = TreeNode::TreeNodeDeclareType::IntegerK;

}
void LL1::Process16() {
	Push(Rep::CHAR);
	temp->treeNodeKindTypeUnion->dec = TreeNode::TreeNodeDeclareType::CharK;
}
void LL1::Process17() {
	Push(Rep::ArrayType);
}
void LL1::Process18() {
	Push(Rep::RecType);
}
void LL1::Process19() {
	Push(Rep::BaseType);
	Push(Rep::OF);
	Push(Rep::右中括号);
	Push(Rep::Top);
	Push(Rep::点);
	Push(Rep::点);
	Push(Rep::Low);
	Push(Rep::左中括号);
	Push(Rep::ARRAY);
	nowTreeNode->kind.dec = TreeNode::TreeNodeDeclareType::ArrayK;
	temp->syntaxTreeNodeProperties = &nowTreeNode->syntaxTreeNodeProperties;
	
}
void LL1::Process20() {
	Push(Rep::INTC);
	temp->syntaxTreeNodeProperties->ArrayAttr.low = atoi(currentToken->Sem);

}
void LL1::Process21() {
	Push(Rep::INTC);
	temp->syntaxTreeNodeProperties->ArrayAttr.up = atoi(currentToken->Sem);

}
void LL1::Process22() {
	Push(Rep::END);
	Push(Rep::FieldDecList);
	Push(Rep::RECORD);
	nowTreeNode->kind.dec = TreeNode::TreeNodeDeclareType::RecordK;
	saveP = nowTreeNode;
	Push(&nowTreeNode->child[0]);
}
void LL1::Process23() {
	Push(Rep::FieldDecMore);
	Push(Rep::分号);
	Push(Rep::IdList);
	Push(Rep::BaseType);
	TreeNode* p = CreateNode(TreeNode::TreeNodeType::DecK);
	TreeNode** t = Pop_tnp();
	(*t) = p;
	nowTreeNode = p;
	temp->syntaxTreeNodeProperties = &nowTreeNode->syntaxTreeNodeProperties;
	Push(&p->sibling);
}
void LL1::Process24() {
	Push(Rep::FieldDecMore);
	Push(Rep::分号);
	Push(Rep::IdList);
	Push(Rep::ArrayType);
	TreeNode* p = CreateNode(TreeNode::TreeNodeType::DecK);
	TreeNode** t = Pop_tnp();
	(*t) = p;
	nowTreeNode = p;
	Push(&p->sibling);
}
void LL1::Process25() {
	Pop_tnp();
	nowTreeNode = saveP;
}
void LL1::Process26() {
	Push(Rep::FieldDecList);
}
void LL1::Process27() {
	Push(Rep::IdMore);
	Push(Rep::ID);
	nowTreeNode->name.push_back(currentToken->Sem);
	nowTreeNode->SetIdnum(nowTreeNode->GetIdnum() + 1);
}
void LL1::Process28() {
	//空函数
}
void LL1::Process29() {
	Push(Rep::IdList);
	Push(Rep::逗号);
}
void LL1::Process30() {
	//空函数
}
void LL1::Process31() {
	Push(Rep::VarDeclaration);
}
void LL1::Process32() {
	Push(Rep::VarDecList);
	Push(Rep::VAR);
	nowTreeNode = CreateNode(TreeNode::TreeNodeType::DecK, TreeNode::TreeNodeDeclareType::IdK_Dec);
	
	TreeNode **t = Pop_tnp();
	*t = nowTreeNode;
	Push(&nowTreeNode->sibling);
	Push(&nowTreeNode->child[0]);
}
void LL1::Process33() {
	Push(Rep::VarDecMore);
	Push(Rep::分号);
	Push(Rep::VarIdList);
	Push(Rep::TypeDef);
	nowTreeNode = CreateNode(TreeNode::TreeNodeType::DecK);
	TreeNode** t = Pop_tnp();
	*t = nowTreeNode;
	Push(&nowTreeNode->sibling);
}
void LL1::Process34() {
	Pop_tnp();
}
void LL1::Process35() {
	Push(Rep::VarDecList);
}
void LL1::Process36() {
	Push(Rep::VarIdMore);
	Push(Rep::ID);
	nowTreeNode->name.push_back(currentToken->Sem);
	nowTreeNode->SetIdnum(nowTreeNode->GetIdnum() + 1);

}
void LL1::Process37() {
	//空函数
}
void LL1::Process38() {
	Push(Rep::VarIdList);
	Push(Rep::逗号);
}
void LL1::Process39() {
	//空函数
}
void LL1::Process40() {
	Push(Rep::ProcDeclaration);
	
}
void LL1::Process41() {
	Push(Rep::ProcDecMore);
	Push(Rep::ProcBody);
	Push(Rep::ProcDecPart);
	Push(Rep::分号);
	Push(Rep::BaseType);
	Push(Rep::冒号);
	Push(Rep::右小括号);
	Push(Rep::ParamList);
	Push(Rep::左小括号);
	Push(Rep::ProcName);
	Push(Rep::PROCEDURE);
	nowTreeNode = CreateNode(TreeNode::TreeNodeType::ProcDecK);
	TreeNode** t = Pop_tnp();
	*t = nowTreeNode;
	Push(&nowTreeNode->sibling);
	for (int i = 2; i >= 0; i--)Push(&nowTreeNode->child[i]);
}
void LL1::Process42() {
	//空函数
}
void LL1::Process43() {
	Push(Rep::ProcDeclaration);
}
void LL1::Process44() {
	Push(Rep::ID);
	nowTreeNode->name.push_back(currentToken->Sem);
	nowTreeNode->SetIdnum(nowTreeNode->GetIdnum() + 1);
}
void LL1::Process45() {
	Pop_tnp();
}
void LL1::Process46() {
	Push(Rep::ParamDecList);
}
void LL1::Process47() {
	Push(Rep::ParamMore);
	Push(Rep::Param);
}
void LL1::Process48() {
	Pop_tnp();
	nowTreeNode = saveP;
	temp->treeNodeKindTypeUnion = &nowTreeNode->kind;
}
void LL1::Process49() {
	Push(Rep::ParamDecList);
	Push(Rep::分号);
}
void LL1::Process50() {
	Push(Rep::FormList);
	Push(Rep::TypeDef);
	nowTreeNode = CreateNode(TreeNode::TreeNodeType::DecK);
	nowTreeNode->syntaxTreeNodeProperties.procAttr.paramt = nowTreeNode->syntaxTreeNodeProperties.procAttr.valparamtype;
	TreeNode** t = Pop_tnp();
	*t = nowTreeNode;
	Push(&nowTreeNode->sibling);
}
void LL1::Process51() {
	Push(Rep::FormList);
	Push(Rep::TypeDef);
	Push(Rep::VAR);
	nowTreeNode = CreateNode(TreeNode::TreeNodeType::DecK);
	nowTreeNode->syntaxTreeNodeProperties.procAttr.paramt = nowTreeNode->syntaxTreeNodeProperties.procAttr.varparamtype;
	TreeNode** t = Pop_tnp();
	*t = nowTreeNode;
	Push(&nowTreeNode->sibling);
}
void LL1::Process52() {
	Push(Rep::FidMore);
	Push(Rep::ID);
	nowTreeNode->name.push_back(currentToken->Sem);
	nowTreeNode->SetIdnum(nowTreeNode->GetIdnum() + 1);

}
void LL1::Process53() {
	//空函数
}
void LL1::Process54() {
	Push(Rep::FormList);
	Push(Rep::逗号);
}
void LL1::Process55() {
	Push(Rep::DeclarePart);

}
void LL1::Process56() {
	Push(Rep::ProgramBody);
}
void LL1::Process57() {
	
	Push(Rep::END);
	Push(Rep::StmList);
	Push(Rep::BEGIN);

	Pop_tnp();

	nowTreeNode = CreateNode(TreeNode::TreeNodeType::StmLK);
	TreeNode** t = Pop_tnp();
	*t = nowTreeNode;
	Push(&nowTreeNode->child[0]);
}
void LL1::Process58() {
	Push(Rep::StmMore);
	Push(Rep::Stm);
}
void LL1::Process59() {
	Pop_tnp();
}
void LL1::Process60() {
	Push(Rep::StmList);
	Push(Rep::逗号);
}
void LL1::Process61() {
	Push(Rep::ConditionalStm);
	nowTreeNode = CreateNode(TreeNode::TreeNodeType::StmtK, TreeNode::TreeNodeStatementType::IfK);
	TreeNode** t = Pop_tnp();
	*t = nowTreeNode;
	Push(&nowTreeNode->sibling);
}
void LL1::Process62() {
	Push(Rep::LoopStm);
	nowTreeNode = CreateNode(TreeNode::TreeNodeType::StmtK,TreeNode::TreeNodeStatementType::WhileK);
	TreeNode** t = Pop_tnp();
	*t = nowTreeNode;
	Push(&nowTreeNode->sibling);
}
void LL1::Process63() {
	Push(Rep::InputStm);
	nowTreeNode = CreateNode(TreeNode::TreeNodeType::StmtK,TreeNode::TreeNodeStatementType::ReadK);
	TreeNode** t = Pop_tnp();
	*t = nowTreeNode;
	Push(&nowTreeNode->sibling);
}
void LL1::Process64() {
	Push(Rep::OutputStm);
	nowTreeNode = CreateNode(TreeNode::TreeNodeType::StmtK,TreeNode::TreeNodeStatementType::WriteK);
	TreeNode** t = Pop_tnp();
	*t = nowTreeNode;
	Push(&nowTreeNode->sibling);

}
void LL1::Process65() {
	Push(Rep::ReturnStm);
	nowTreeNode = CreateNode(TreeNode::TreeNodeType::StmtK,TreeNode::TreeNodeStatementType::ReturnK);
	TreeNode** t = Pop_tnp();
	*t = nowTreeNode;
	Push(&nowTreeNode->sibling);
}
void LL1::Process66() {
	Push(Rep::AssCall);
	Push(Rep::ID);
	nowTreeNode = CreateNode(TreeNode::TreeNodeType::StmtK);
	TreeNode* t = CreateNode(TreeNode::TreeNodeType::ExpK);
	nowTreeNode->child[0] = t;
	TreeNode** t1 = Pop_tnp();
	*t1 = nowTreeNode;
	Push(&nowTreeNode->sibling);
}
void LL1::Process67() {
	Push(Rep::AssignmentRest);
	nowTreeNode->kind.stmt = TreeNode::TreeNodeStatementType::AssignK;

}
void LL1::Process68() {
	Push(Rep::CallStmRest);
	nowTreeNode->kind.stmt = TreeNode::TreeNodeStatementType::CallK;
}
void LL1::Process69() {
	Push(Rep::Exp);
	Push(Rep::赋值号);
	Push(Rep::VariMore);

	Push(&nowTreeNode->child[1]);
	nowTreeNode = nowTreeNode->child[0];

	TreeNode* t = CreateNode(TreeNode::TreeNodeType::ExpK, TreeNode::TreeNodeExpressionType::OpK);
	t->syntaxTreeNodeProperties.ExpAttr.op = LexType::END1;
	operatorStack.push(t);
}
void LL1::Process70() {
	Push(Rep::FI);
	Push(Rep::StmList);
	Push(Rep::ELSE);
	Push(Rep::StmList);
	Push(Rep::THEN);
	Push(Rep::RelExp);
	Push(Rep::IF);

	Push(&nowTreeNode->child[2]);
	Push(&nowTreeNode->child[1]);
	Push(&nowTreeNode->child[0]);
}
void LL1::Process71(){
	Push(Rep::ENDWH);
	Push(Rep::StmList);
	Push(Rep::DO);
	Push(Rep::RelExp);
	Push(Rep::WHILE);

	Push(&nowTreeNode->child[1]);
	Push(&nowTreeNode->child[0]);
}
void LL1::Process72() {
	Push(Rep::右小括号);
	Push(Rep::InVar);
}
void LL1::Process73() {
	Push(Rep::ID);
	nowTreeNode->name.push_back(currentToken->Sem);
	nowTreeNode->SetIdnum(nowTreeNode->GetIdnum() + 1);
}
void LL1::Process74() {
	Push(Rep::右小括号);
	Push(Rep::Exp);
	Push(Rep::左小括号);
	Push(Rep::WRITE);
	Push(&nowTreeNode->child[0]);
	TreeNode* t = CreateNode(TreeNode::TreeNodeType::ExpK, TreeNode::TreeNodeExpressionType::OpK);
	t->syntaxTreeNodeProperties.ExpAttr.op = LexType::END1;
	operatorStack.push(t);
}
void LL1::Process75() {
	Push(Rep::RETURN);
}
void LL1::Process76() {
	Push(Rep::右小括号);
	Push(Rep::ActParamList);
	Push(Rep::左小括号);

	Push(&nowTreeNode->child[0]);
}
void LL1::Process77() {
	Pop_tnp();
}
void LL1::Process78() {
	Push(Rep::ActParamMore);
	Push(Rep::Exp);
	TreeNode* t = CreateNode(TreeNode::TreeNodeType::ExpK, TreeNode::TreeNodeExpressionType::OpK);
	t->syntaxTreeNodeProperties.ExpAttr.op = LexType::END1;
	operatorStack.push(t);
}
void LL1::Process79() {
	//空函数
}
void LL1::Process80() {
	Push(Rep::ActParamList);
	Push(Rep::逗号);
	Push(&nowTreeNode->sibling);
}
void LL1::Process81() {
	Push(Rep::OtherRelE);
	Push(Rep::Exp);
	TreeNode* t = CreateNode(TreeNode::TreeNodeType::ExpK, TreeNode::TreeNodeExpressionType::OpK);
	t->syntaxTreeNodeProperties.ExpAttr.op = LexType::END1;
	operatorStack.push(t);
	getExpResult = false;
}
void LL1::Process82() {
	Push(Rep::Exp);
	Push(Rep::CmpOp);
	nowTreeNode = CreateNode(TreeNode::TreeNodeType::ExpK, TreeNode::TreeNodeExpressionType::OpK);
	nowTreeNode->syntaxTreeNodeProperties.ExpAttr.op = currentToken->Lex;
	LexType sTop = operatorStack.top()->syntaxTreeNodeProperties.ExpAttr.op;
	while (Priosity(sTop) < Priosity(currentToken->Lex)) {
		TreeNode* t = Pop_op();
		TreeNode* rNum, *lNum;
		rNum = Pop_value();
		lNum = Pop_value();
		t->child[0] = lNum;
		t->child[1] = rNum;
		operandStack.push(t);
		sTop = operandStack.top()->syntaxTreeNodeProperties.ExpAttr.op;
	}
	operatorStack.push(nowTreeNode);
	getExpResult = true;
}
void LL1::Process83() {
	Push(Rep::OtherTerm);
	Push(Rep::Term);
}
void LL1::Process84() {
	if (currentToken->Lex == LexType::RPAREN && expFlag == 0) {
		LexType sTop = operatorStack.top()->syntaxTreeNodeProperties.ExpAttr.op;
		while (sTop != LexType::LPAREN) {
			TreeNode* t = Pop_op();
			TreeNode* rNum, * lNum;
			rNum = Pop_value();
			lNum = Pop_value();
			t->child[0] = lNum;
			t->child[1] = rNum;
			operandStack.push(t);
			sTop = operandStack.top()->syntaxTreeNodeProperties.ExpAttr.op;
		}
		Pop_op();
		expFlag--;
	}
	else {
		if (getExpResult || getExpResult2) {
			LexType sTop = operatorStack.top()->syntaxTreeNodeProperties.ExpAttr.op;
			while (sTop != LexType::END1) {
				TreeNode* t = Pop_op();
				TreeNode* rNum, * lNum;
				rNum = Pop_value();
				lNum = Pop_value();
				t->child[0] = lNum;
				t->child[1] = rNum;
				operandStack.push(t);
				sTop = operandStack.top()->syntaxTreeNodeProperties.ExpAttr.op;
			}
			Pop_op();
			nowTreeNode->syntaxTreeNodeProperties.ExpAttr.val = Result(operandStack.top());
			TreeNode** t = Pop_tnp();
			*t = nowTreeNode;
			getExpResult2 = false;

		}
		
	}
}
void LL1::Process85() {
	Push(Rep::Exp);
	Push(Rep::AddOp);
	nowTreeNode = CreateNode(TreeNode::TreeNodeType::ExpK, TreeNode::TreeNodeExpressionType::OpK);
	nowTreeNode->syntaxTreeNodeProperties.ExpAttr.op = currentToken->Lex;
	LexType sTop = operatorStack.top()->syntaxTreeNodeProperties.ExpAttr.op;
	while (Priosity(sTop) >= Priosity(nowTreeNode->syntaxTreeNodeProperties.ExpAttr.op)) {
		TreeNode* t = Pop_op();
		TreeNode* rNum, * lNum;
		rNum = Pop_value();
		lNum = Pop_value();
		t->child[0] = lNum;
		t->child[1] = rNum;
		operandStack.push(t);
		sTop = operatorStack.top()->syntaxTreeNodeProperties.ExpAttr.op;
	}
	operatorStack.push(nowTreeNode);
}
void LL1::Process86() {
	Push(Rep::OtherFactor);
	Push(Rep::Factor);
}
void LL1::Process87() {
	//空函数
}
void LL1::Process88() {
	Push(Rep::Term);
	Push(Rep::MultOp);
	nowTreeNode = CreateNode(TreeNode::TreeNodeType::ExpK, TreeNode::TreeNodeExpressionType::OpK);
	nowTreeNode->syntaxTreeNodeProperties.ExpAttr.op = currentToken->Lex;
	LexType sTop = operatorStack.top()->syntaxTreeNodeProperties.ExpAttr.op;
	while (Priosity(sTop) >= Priosity(nowTreeNode->syntaxTreeNodeProperties.ExpAttr.op)) {
		TreeNode* t = Pop_op();
		TreeNode* rNum, * lNum;
		rNum = Pop_value();
		lNum = Pop_value();
		t->child[0] = lNum;
		t->child[1] = rNum;
		operandStack.push(t);
		sTop = operatorStack.top()->syntaxTreeNodeProperties.ExpAttr.op;
		operandStack.push(nowTreeNode);
	}

}
void LL1::Process89() {
	Push(Rep::右小括号);
	Push(Rep::Exp);
	Push(Rep::左小括号);
	nowTreeNode = CreateNode(TreeNode::TreeNodeType::ExpK, TreeNode::TreeNodeExpressionType::OpK);
	nowTreeNode->syntaxTreeNodeProperties.ExpAttr.op = LexType::LPAREN;
	operatorStack.push(nowTreeNode);
	expFlag++;
}
void LL1::Process90() {
	Push(Rep::INTC);
	nowTreeNode = CreateNode(TreeNode::TreeNodeType::ExpK, TreeNode::TreeNodeExpressionType::ConstK);
	
	float f=(float)atof(currentToken->Sem);
	nowTreeNode->syntaxTreeNodeProperties.ExpAttr.val = f;

	operandStack.push(nowTreeNode);
}
void LL1::Process91() {
	Push(Rep::Variable);
}
void LL1::Process92() {
	Push(Rep::VariMore);
	Push(Rep::ID);
	nowTreeNode->name.push_back(currentToken->Sem);
	nowTreeNode->SetIdnum(nowTreeNode->GetIdnum() + 1);
	operandStack.push(nowTreeNode);
}
void LL1::Process93() {
	nowTreeNode->syntaxTreeNodeProperties.ExpAttr.varkind = TreeNode::varkindType::IdV;
}
void LL1::Process94() {
	Push(Rep::右中括号);
	Push(Rep::Exp);
	Push(Rep::左中括号);
	nowTreeNode->syntaxTreeNodeProperties.ExpAttr.varkind = TreeNode::varkindType::ArrayMembV;
	Push(&nowTreeNode->child[0]);
	nowTreeNode = CreateNode(TreeNode::TreeNodeType::ExpK, TreeNode::TreeNodeExpressionType::OpK);
	nowTreeNode->syntaxTreeNodeProperties.ExpAttr.op = LexType::END1;
	
}
void LL1::Process95() {
	Push(Rep::FieldVar);
	Push(Rep::点);
	nowTreeNode->syntaxTreeNodeProperties.ExpAttr.varkind = TreeNode::varkindType::FieldMembV;
	Push(&nowTreeNode->child[0]);
}
void LL1::Process96() {
	Push(Rep::FieldVarMore);
	Push(Rep::ID);
	TreeNode* t = CreateNode(TreeNode::TreeNodeType::ExpK, TreeNode::TreeNodeExpressionType::OpK);
	t->syntaxTreeNodeProperties.ExpAttr.varkind = TreeNode::varkindType::IdV;
	t->name.push_back(currentToken->Sem);

	TreeNode** t1 = Pop_tnp();
	*t1 = t;

}
void LL1::Process97() {
	nowTreeNode->syntaxTreeNodeProperties.ExpAttr.varkind = TreeNode::varkindType::IdV;
}
void LL1::Process98() {
	Process94();
}
void LL1::Process99() {
	Push(Rep::小于号);
}
void LL1::Process100() {
	Push(Rep::等于号);
}
void LL1::Process101() {
	Push(Rep::加号);
}
void LL1::Process102() {
	Push(Rep::减号);
}
void LL1::Process103() {
	Push(Rep::乘号);
}
void LL1::Process104() {
	Push(Rep::除号);
}