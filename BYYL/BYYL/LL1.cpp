#include "LL1.h";
#include "SyntaxTree.h"
#include "Grammatical.h"
#include "token.h"
#include <iostream>

using namespace std;
void LL1::CreateLL1Table() {
	
	LL1Table[Rep::Program][Rep::PROGRAM] = 1;
	LL1Table[Rep::ProgramHead][Rep::PROGRAM] = 2;
	LL1Table[Rep::ProgramName][Rep::ID] = 3;
	LL1Table[Rep::DeclarePart][Rep::TYPE] = 4;
	LL1Table[Rep::DeclarePart][Rep::VAR] = 4;
	LL1Table[Rep::DeclarePart][Rep::PROCEDURE] = 4;
	LL1Table[Rep::DeclarePart][Rep::BEGIN] = 4;
	LL1Table[Rep::TypeDecpart][Rep::VAR] = 5;
	LL1Table[Rep::TypeDecpart][Rep::PROCEDURE] = 5;
	LL1Table[Rep::TypeDecpart][Rep::BEGIN] = 5;
	LL1Table[Rep::TypeDecpart][Rep::TYPE] = 6;
	LL1Table[Rep::TypeDec][Rep::TYPE] = 7;
	LL1Table[Rep::TypeDecList][Rep::ID] = 8;
	LL1Table[Rep::TypeDecMore][Rep::VAR] = 9;
	LL1Table[Rep::TypeDecMore][Rep::PROCEDURE] = 9;
	LL1Table[Rep::TypeDecMore][Rep::BEGIN] = 9;
	LL1Table[Rep::TypeDecMore][Rep::ID] = 10;
	LL1Table[Rep::TypeId][Rep::ID] = 11;
	LL1Table[Rep::TypeDef][Rep::INTEGER] = 12;
	LL1Table[Rep::TypeDef][Rep::CHAR] = 12;
	LL1Table[Rep::TypeDef][Rep::ARRAY] = 13;
	LL1Table[Rep::TypeDef][Rep::RECORD] = 13;
	LL1Table[Rep::TypeDef][Rep::ID] = 12;
	LL1Table[Rep::BaseType][Rep::INTEGER] = 15;
	LL1Table[Rep::BaseType][Rep::CHAR] = 16;
	LL1Table[Rep::StructureType][Rep::ARRAY] = 17;
	LL1Table[Rep::StructureType][Rep::RECORD] = 18;
	LL1Table[Rep::ArrayType][Rep::ARRAY] = 19;
	LL1Table[Rep::Low][Rep::INTC] = 20;
	LL1Table[Rep::Top][Rep::INTC] = 21;
	LL1Table[Rep::RecType][Rep::RECORD] = 22;
	LL1Table[Rep::FieldDecList][Rep::INTEGER] = 23;
	LL1Table[Rep::FieldDecList][Rep::CHAR] = 23;
	LL1Table[Rep::FieldDecList][Rep::ARRAY] = 24;
	LL1Table[Rep::FieldDecMore][Rep::END] = 25;
	LL1Table[Rep::FieldDecMore][Rep::CHAR] = 26;
	LL1Table[Rep::FieldDecMore][Rep::INTEGER] = 26;
	LL1Table[Rep::FieldDecMore][Rep::ARRAY] = 26;
	LL1Table[Rep::IdList][Rep::ID] = 27;
	LL1Table[Rep::IdMore][Rep::�ֺ�] = 28;
	LL1Table[Rep::IdMore][Rep::COMMA] = 29;
	LL1Table[Rep::VarDecpart][Rep::PROCEDURE] = 30;
	LL1Table[Rep::VarDecpart][Rep::BEGIN] = 30;
	LL1Table[Rep::VarDecpart][Rep::VAR] = 31;
	LL1Table[Rep::VarDec][Rep::VAR] = 32;
	LL1Table[Rep::VarDecList][Rep::INTEGER] = 33;
	LL1Table[Rep::VarDecList][Rep::CHAR] = 33;
	LL1Table[Rep::VarDecList][Rep::ARRAY] = 33;
	LL1Table[Rep::VarDecList][Rep::RECORD] = 33;
	LL1Table[Rep::VarDecList][Rep::ID] = 33;
	LL1Table[Rep::VarDecMore][Rep::PROCEDURE] = 34;
	LL1Table[Rep::VarDecMore][Rep::BEGIN] = 34;
	LL1Table[Rep::VarDecMore][Rep::INTEGER] = 35;
	LL1Table[Rep::VarDecMore][Rep::CHAR] = 35;
	LL1Table[Rep::VarDecMore][Rep::ARRAY] = 35;
	LL1Table[Rep::VarDecMore][Rep::RECORD] = 35;
	LL1Table[Rep::VarDecMore][Rep::ID] = 35;
	LL1Table[Rep::VarIdList][Rep::ID] = 36;
	LL1Table[Rep::VarIdMore][Rep::�ֺ�] = 37;
	LL1Table[Rep::VarIdMore][Rep::COMMA] = 38;
	LL1Table[Rep::ProcDecPart][Rep::BEGIN] = 39;
	LL1Table[Rep::ProcDecPart][Rep::PROCEDURE] = 40;
	LL1Table[Rep::ProcDec][Rep::PROCEDURE] = 41;
	LL1Table[Rep::ProcDecMore][Rep::BEGIN] = 42;
	LL1Table[Rep::ProcDecMore][Rep::PROCEDURE] = 43;
	LL1Table[Rep::ProcName][Rep::ID] = 44;
	LL1Table[Rep::ParamList][Rep::��С����] = 45;
	LL1Table[Rep::ParamList][Rep::INTEGER] = 46;
	LL1Table[Rep::ParamList][Rep::CHAR] = 46;
	LL1Table[Rep::ParamList][Rep::ARRAY] = 46;
	LL1Table[Rep::ParamList][Rep::RECORD] = 46;
	LL1Table[Rep::ParamList][Rep::ID] = 46;
	LL1Table[Rep::ParamList][Rep::VAR] = 46;
	LL1Table[Rep::ParamDecList][Rep::INTEGER] = 47;
	LL1Table[Rep::ParamDecList][Rep::CHAR] = 47;
	LL1Table[Rep::ParamDecList][Rep::ARRAY] = 47;
	LL1Table[Rep::ParamDecList][Rep::RECORD] = 47;
	LL1Table[Rep::ParamDecList][Rep::ID] = 47;
	LL1Table[Rep::ParamDecList][Rep::VAR] = 47;
	LL1Table[Rep::ParamMore][Rep::��С����] = 48;
	LL1Table[Rep::ParamMore][Rep::�ֺ�] = 49;
	LL1Table[Rep::Param][Rep::INTEGER] = 50;
	LL1Table[Rep::Param][Rep::CHAR] = 50;
	LL1Table[Rep::Param][Rep::ARRAY] = 50;
	LL1Table[Rep::Param][Rep::RECORD] = 50;
	LL1Table[Rep::Param][Rep::ID] = 50;
	LL1Table[Rep::Param][Rep::VAR] = 51;
	LL1Table[Rep::FormList][Rep::ID] = 52;
	LL1Table[Rep::FidMore][Rep::�ֺ�] = 53;
	LL1Table[Rep::FidMore][Rep::��С����] = 53;
	LL1Table[Rep::FidMore][Rep::COMMA] = 54;
	LL1Table[Rep::ProcDecPart][Rep::TYPE] = 55;
	LL1Table[Rep::ProcDecPart][Rep::VAR] = 55;
	LL1Table[Rep::ProcDecPart][Rep::PROCEDURE] = 55;
	LL1Table[Rep::ProcDecPart][Rep::BEGIN] = 55;
	LL1Table[Rep::ProcBody][Rep::BEGIN] = 56;
	LL1Table[Rep::ProgramBody][Rep::BEGIN] = 57;
	LL1Table[Rep::StmList][Rep::ID] = 58;
	LL1Table[Rep::StmList][Rep::IF] = 58;
	LL1Table[Rep::StmList][Rep::WHILE] = 58;
	LL1Table[Rep::StmList][Rep::RETURN] = 58;
	LL1Table[Rep::StmList][Rep::READ] = 58;
	LL1Table[Rep::StmList][Rep::WRITE] = 58;
	LL1Table[Rep::StmMore][Rep::ELSE] = 59;
	LL1Table[Rep::StmMore][Rep::FI] = 59;
	LL1Table[Rep::StmMore][Rep::END] = 59;
	LL1Table[Rep::StmMore][Rep::ENDWH] = 59;
	LL1Table[Rep::StmMore][Rep::�ֺ�] = 60;
	LL1Table[Rep::Stm][Rep::IF] = 61;
	LL1Table[Rep::Stm][Rep::WHILE] = 62;
	LL1Table[Rep::Stm][Rep::READ] = 63;
	LL1Table[Rep::Stm][Rep::WRITE] = 64;
	LL1Table[Rep::Stm][Rep::RETURN] = 65;
	LL1Table[Rep::Stm][Rep::ID] = 66;
	LL1Table[Rep::AssCall][Rep::��ֵ��] = 67;
	LL1Table[Rep::AssCall][Rep::��С����] = 68;
	LL1Table[Rep::AssignmentRest][Rep::��������] = 69;
	LL1Table[Rep::AssignmentRest][Rep::DOT] = 69;
	LL1Table[Rep::AssignmentRest][Rep::��ֵ��] = 69;
	LL1Table[Rep::ConditionalStm][Rep::IF] = 70;
	LL1Table[Rep::LoopStm][Rep::WHILE] = 71;
	LL1Table[Rep::InputStm][Rep::READ] = 72;
	LL1Table[Rep::Invar][Rep::ID] = 73;
	LL1Table[Rep::OutputStm][Rep::WRITE] = 74;
	LL1Table[Rep::ReturnStm][Rep::RETURN] = 75;
	LL1Table[Rep::CallStmRest][Rep::��С����] = 76;
	LL1Table[Rep::ActParamList][Rep::��С����] = 77;
	LL1Table[Rep::ActParamList][Rep::��С����] = 78;
	LL1Table[Rep::ActParamList][Rep::INTC] = 78;
	LL1Table[Rep::ActParamList][Rep::ID] = 78;
	LL1Table[Rep::ActParamMore][Rep::��С����] = 79;
	LL1Table[Rep::ActParamMore][Rep::COMMA] = 80;
	LL1Table[Rep::RelExp][Rep::��С����] = 81;
	LL1Table[Rep::RelExp][Rep::INTC] = 81;
	LL1Table[Rep::RelExp][Rep::ID] = 81;
	LL1Table[Rep::OtherRelE][Rep::С�ں�] = 82;
	LL1Table[Rep::OtherRelE][Rep::���ں�] = 82;
	LL1Table[Rep::Exp][Rep::��С����] = 83;
	LL1Table[Rep::Exp][Rep::INTC] = 83;
	LL1Table[Rep::Exp][Rep::ID] = 83;
	LL1Table[Rep::OtherTerm][Rep::С�ں�] = 84;
	LL1Table[Rep::OtherTerm][Rep::���ں�] = 84;
	LL1Table[Rep::OtherTerm][Rep::��������] = 84;
	LL1Table[Rep::OtherTerm][Rep::THEN] = 84;
	LL1Table[Rep::OtherTerm][Rep::ELSE] = 84;
	LL1Table[Rep::OtherTerm][Rep::FI] = 84;
	LL1Table[Rep::OtherTerm][Rep::DO] = 84;
	LL1Table[Rep::OtherTerm][Rep::ENDWH] = 84;
	LL1Table[Rep::OtherTerm][Rep::��С����] = 84;
	LL1Table[Rep::OtherTerm][Rep::END] = 84;
	LL1Table[Rep::OtherTerm][Rep::�ֺ�] = 84;
	LL1Table[Rep::OtherTerm][Rep::COMMA] = 84;
	LL1Table[Rep::OtherTerm][Rep::�Ӻ�] = 85;
	LL1Table[Rep::OtherTerm][Rep::����] = 85;
	LL1Table[Rep::Term][Rep::��С����] = 86;
	LL1Table[Rep::Term][Rep::INTC] = 86;
	LL1Table[Rep::Term][Rep::ID] = 86;
	LL1Table[Rep::OtherFactor][Rep::�Ӻ�] = 87;
	LL1Table[Rep::OtherFactor][Rep::����] = 87;
	LL1Table[Rep::OtherFactor][Rep::С�ں�] = 87;
	LL1Table[Rep::OtherFactor][Rep::���ں�] = 87;
	LL1Table[Rep::OtherFactor][Rep::��������] = 87;
	LL1Table[Rep::OtherFactor][Rep::THEN] = 87;
	LL1Table[Rep::OtherFactor][Rep::ELSE] = 87;
	LL1Table[Rep::OtherFactor][Rep::FI] = 87;
	LL1Table[Rep::OtherFactor][Rep::DO] = 87;
	LL1Table[Rep::OtherFactor][Rep::ENDWH] = 87;
	LL1Table[Rep::OtherFactor][Rep::��С����] = 87;
	LL1Table[Rep::OtherFactor][Rep::END] = 87;
	LL1Table[Rep::OtherFactor][Rep::�ֺ�] = 87;
	LL1Table[Rep::OtherFactor][Rep::COMMA] = 87;
	LL1Table[Rep::OtherFactor][Rep::�˺�] = 88;
	LL1Table[Rep::OtherFactor][Rep::����] = 88;
	LL1Table[Rep::Factor][Rep::��С����] = 89;
	LL1Table[Rep::Factor][Rep::INTC] = 90;
	LL1Table[Rep::Factor][Rep::ID] = 91;
	LL1Table[Rep::Variable][Rep::ID] = 92;
	LL1Table[Rep::VarIdMore][Rep::��ֵ��] = 93;
	LL1Table[Rep::VarIdMore][Rep::�˺�] = 93;
	LL1Table[Rep::VarIdMore][Rep::����] = 93;
	LL1Table[Rep::VarIdMore][Rep::�Ӻ�] = 93;
	LL1Table[Rep::VarIdMore][Rep::����] = 93;
	LL1Table[Rep::VarIdMore][Rep::С�ں�] = 93;
	LL1Table[Rep::VarIdMore][Rep::���ں�] = 93;
	LL1Table[Rep::VarIdMore][Rep::THEN] = 93;
	LL1Table[Rep::VarIdMore][Rep::ELSE] = 93;
	LL1Table[Rep::VarIdMore][Rep::FI] = 93;
	LL1Table[Rep::VarIdMore][Rep::DO] = 93;
	LL1Table[Rep::VarIdMore][Rep::ENDWH] = 93;
	LL1Table[Rep::VarIdMore][Rep::��С����] = 93;
	LL1Table[Rep::VarIdMore][Rep::END] = 93;
	LL1Table[Rep::VarIdMore][Rep::�ֺ�] = 93;
	LL1Table[Rep::VarIdMore][Rep::COMMA] = 93;
	LL1Table[Rep::VarIdMore][Rep::��С����] = 94;
	LL1Table[Rep::VarIdMore][Rep::DOT] = 95;
	LL1Table[Rep::FieldVar][Rep::ID] = 96;
	LL1Table[Rep::FieldVarMore][Rep::��ֵ��] = 97;
	LL1Table[Rep::FieldVarMore][Rep::�˺�] = 97;
	LL1Table[Rep::FieldVarMore][Rep::����] = 97;
	LL1Table[Rep::FieldVarMore][Rep::�Ӻ�] = 97;
	LL1Table[Rep::FieldVarMore][Rep::����] = 97;
	LL1Table[Rep::FieldVarMore][Rep::С�ں�] = 97;
	LL1Table[Rep::FieldVarMore][Rep::���ں�] = 97;
	LL1Table[Rep::FieldVarMore][Rep::THEN] = 97;
	LL1Table[Rep::FieldVarMore][Rep::ELSE] = 97;
	LL1Table[Rep::FieldVarMore][Rep::FI] = 97;
	LL1Table[Rep::FieldVarMore][Rep::DO] = 97;
	LL1Table[Rep::FieldVarMore][Rep::ENDWH] = 97;
	LL1Table[Rep::FieldVarMore][Rep::��С����] = 97;
	LL1Table[Rep::FieldVarMore][Rep::END] = 97;
	LL1Table[Rep::FieldVarMore][Rep::�ֺ�] = 97;
	LL1Table[Rep::FieldVarMore][Rep::COMMA] = 97;
	LL1Table[Rep::FieldVarMore][Rep::��������] = 98;
	LL1Table[Rep::CmpOp][Rep::С�ں�] = 99;
	LL1Table[Rep::CmpOp][Rep::���ں�] = 100;
	LL1Table[Rep::AddOp][Rep::�Ӻ�] = 101;
	LL1Table[Rep::AddOp][Rep::����] = 102;
	LL1Table[Rep::MultOp][Rep::�˺�] = 103;
	LL1Table[Rep::MultOp][Rep::����] = 104;
	L
}

bool LL1::ifNonTerminalSymbol(Rep cr) {
	if (cr >= Rep::PROGRAM)return true;
	return false;
}

TreeNode* LL1::createNode(TreeNode::TreeNodeType type) {
	TreeNode* t = new TreeNode();
	t->nodekind = type;
	return t;
}
TreeNode* LL1::createNode(TreeNode::TreeNodeType type, TreeNode::TreeNodeDeclareType decType) {
	TreeNode* t = createNode(type);
	t->kind.dec = decType;
}
TreeNode** LL1::pop_tn() {
	TreeNode** t = treeNodePointerStack.top();
	treeNodePointerStack.pop();
	return t;
}
TreeNode* LL1::ParseLL() {
	CreateLL1Table();

	symbolStackEmptyFlag = true;
	push(Rep::Program);

	proTreeNode = createNode(TreeNode::TreeNodeType::ProK);

	for (int i = 2; i >= 0; i--)push(&proTreeNode->child[i]);

	TokenList* t = getToken();

	while (!symbolStack.empty()) {
		if (!ifNonTerminalSymbol(symbolStack.top())) {
			//���ռ���

		}
		else {
			//�Ƿ��ռ���

		}
	}
	return nullptr;
}

void LL1::push(Rep cr) {
	symbolStack.push(cr);
}
void LL1::push(TreeNode** t) {
	treeNodePointerStack.push(t);
}

Rep LL1::pop_cr() {
	Rep cr = symbolStack.top();
	symbolStack.pop();
	return cr;
}

TokenList* LL1::getToken() {
	TokenList* pToken = TokenListHead;
	TokenListHead = TokenListHead->next;
	return pToken;
}

void LL1::Process1() {
	pop_cr();
	push(Rep::ProgramBody);
	push(Rep::DeclarePart);
	push(Rep::ProgramHead);

}
void LL1::Process2() {
	push(Rep::ProgramName);
	push(Rep::PROGRAM);
	TreeNode** pt = pop_tn();
	TreeNode* t = createNode(TreeNode::TreeNodeType::PheadK);
	(*pt) = t;

}
void LL1::Process3() {
	TokenList* pToken = getToken();
	push(Rep::ID);
	string name = pToken->Sem;
	(*proTreeNode).child[0]->name.push_back(name);
	int num = (*proTreeNode).child[0]->getIdnum();
	(*proTreeNode).child[0]->setIdnum(num + 1);
	
	
}
void LL1::Process4() {
	push(Rep::FuncDec);
	push(Rep::VarDec);
	push(Rep::TypeDec);
	
}
void LL1::Process5() {
	//�պ���
}
void LL1::Process6() {
	push(Rep::TypeDeclaration);
}
void LL1::Process7() {
	push(Rep::TypeDecList);
	push(Rep::TYPE);
	TreeNode* t = createNode(TreeNode::TreeNodeType::TypeK);
	TreeNode** pt = pop_tn();
	*pt = t;
	push(&t->sibling);
	push(&t->child[0]);

}
void LL1::Process8() {
	push(Rep::TypeDecMore);
	push(Rep::�ֺ�);
	push(Rep::TypeDef);
	push(Rep::��ֵ��);
	push(Rep::TypeId);
	TreeNode* t = createNode(TreeNode::TreeNodeType::DecK,TreeNode::TreeNodeDeclareType::IdK_Dec);
	TreeNode** pt = pop_tn();
	*pt = t;
	
}

