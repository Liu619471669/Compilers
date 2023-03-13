#ifndef LL1_H
#define LL1_H
#include "Grammatical.h"
#include <stack>
using namespace std;
using namespace Liu;
namespace Liu {
	class LL1 {
	public:
		TreeNode tree;
		TreeNode* ParseLL();
		void CreateLL1Table();
		void Predict(int num);
		int Priosity(TreeNode::wordType op);
		void Process1();
		void Process2();
		void Process3();
		void Process4();
		void Process5();
		void Process6();
		void Process7();
		void Process8();
		void Process9();
		void Process10();
		void Process11();
		void Process12();
		void Process13();
		void Process14();
		void Process15();
		void Process16();
		void Process17();
		void Process18();
		void Process19();
		void Process20();
		void Process21();
		void Process22();
		void Process23();
		void Process24();
		void Process25();
		void Process26();
		void Process27();
		void Process28();
		void Process29();
		void Process30();
		void Process31();
		void Process32();
		void Process33();
		void Process34();
		void Process35();
		void Process36();
		void Process37();
		void Process38();
		void Process39();
		void Process40();
		void Process41();
		void Process42();
		void Process43();
		void Process44();
		void Process45();
		void Process46();
		void Process47();
		void Process48();
		void Process49();
		void Process50();
		void Process51();
		void Process52();
		void Process53();
		void Process54();
		void Process55();
		void Process56();
		void Process57();
		void Process58();
		void Process59();
		void Process60();
		void Process61();
		void Process62();
		void Process63();
		void Process64();
		void Process65();
		void Process66();
		void Process67();
		void Process68();
		void Process69();
		void Process70();
		void Process71();
		void Process72();
		void Process73();
		void Process74();
		void Process75();
		void Process76();
		void Process77();
		void Process78();
		void Process79();
		void Process80();
		void Process81();
		void Process82();
		void Process83();
		void Process84();
		void Process85();
		void Process86();
		void Process87();
		void Process88();
		void Process89();
		void Process90();
		void Process91();
		void Process92();
		void Process93();
		void Process94();
		void Process95();
		void Process96();
		void Process97();
		void Process98();
		void Process99();
		void Process100();
		void Process101();
		void Process102();
		void Process103();
		void Process104();
		//TokenList* getToken();
		
	private:
		TreeNode* procTreeNode;

		bool ifNonTerminalSymbol(characterRepertoire cr);//判断输入的符号是否是非终极符
		void push(characterRepertoire cr);
		void push(TreeNode** t);
		characterRepertoire pop_cr();
		TreeNode** pop_tn();
		TreeNode* createProgramHeadNode();
		stack<characterRepertoire> symbolStack;
		stack<TreeNode**> treeNodePointerStack;
		bool symbolStackEmptyFlag;
		map<characterRepertoire, map<characterRepertoire,int>> LL1Table;
	};
	void LL1::CreateLL1Table() {
		LL1Table[ParamDecList][DeclarePart] = 5;
		cout << LL1Table[ParamDecList][DeclarePart];
	}
	bool LL1::ifNonTerminalSymbol(characterRepertoire cr) {
		if ((int)cr >= 65)return true;
		return false;
	}
	TreeNode* LL1::createProgramHeadNode() {
		TreeNode* t = new TreeNode();
		t->nodekind = TreeNode::TreeNodeType::PheadK;
		return t;
	}
	void LL1::push(characterRepertoire cr) {
		symbolStack.push(cr);
	}
	void LL1::push(TreeNode** t) {
		treeNodePointerStack.push(t);
	}
	characterRepertoire LL1::pop_cr() {
		characterRepertoire cr = symbolStack.top();
		symbolStack.pop();
		return cr;
	}
	TreeNode** LL1::pop_tn() {
		TreeNode** t = treeNodePointerStack.top();
		treeNodePointerStack.pop();
		return t;
	}
	TreeNode* LL1::ParseLL() {
		CreateLL1Table();

		symbolStackEmptyFlag = true;
		push(Program);

		procTreeNode = new TreeNode();
		procTreeNode->nodekind = TreeNode::TreeNodeType::ProK;
		for (int i = 2; i >= 0; i--)push(&procTreeNode->child[i]);

		//getToken();

		while (!symbolStack.empty()) {
			if (!ifNonTerminalSymbol(symbolStack.top())) {
				//是终极符
				
			}
			else {
				//是非终极符

			}
		}

	}
	
	void LL1::Process1() {
		pop_cr();
		push(ProgramBody);
		push(DeclarePart);
		push(ProgramHead);

	}
	void LL1::Process2() {
		push(ProgramName);
		push(PROGRAM);
		TreeNode** pt = pop_tn();
		TreeNode* t=createProgramHeadNode();
		(*pt) = t;
		
	}
	void LL1::Process3() {
		//(*procTreeNode).child[0]->name.push_back()
	}
	

}

#endif 