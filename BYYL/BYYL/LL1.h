#pragma once
#include "LiuPQ.h"
#include <stack>
using namespace std;
using namespace Liu;
namespace Liu {
	class LL1 {
	public:
		
		TreeNode* ParseLL();
		void CreateLL1Table();
		void CreateMatchTable();
		void Predict(int num);
		int Priosity(LexType op);
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
		TokenList* GetToken();
		
	private:
		TreeNode* proTreeNode;//根节点指针
		TreeNode* nowTreeNode;//当前节点指针
		TreeNode* saveP;
		TokenList* currentToken;//当前Token
		TokenList* TokenListHead;//Token序列头结点
		bool getExpResult;
		bool getExpResult2;
		int expFlag;
		float Result(TreeNode*);//计算语法树表达式的值
		union Temp {
			TreeNode::TreeNodeKindTypeUnion *treeNodeKindTypeUnion;
			TreeNode::SyntaxTreeNodeProperties *syntaxTreeNodeProperties;
		};
		Temp* temp;//记录标识符类型信息的部分地址
		

		bool IfNonTerminalSymbol(Rep cr);//判断输入的符号是否是非终极符

		void Push(Rep cr);
		void Push(TreeNode** t);
		

		Rep Pop_cr();//弹符号栈顶元素
		TreeNode** Pop_tnp();//弹语法树指针栈顶元素
		TreeNode* Pop_value();//弹操作数栈;
		TreeNode* Pop_op();//弹操作符栈

		TreeNode* CreateNode(TreeNode::TreeNodeType type);
		TreeNode* CreateNode(TreeNode::TreeNodeType type,TreeNode::TreeNodeDeclareType decType);
		TreeNode* CreateNode(TreeNode::TreeNodeType type, TreeNode::TreeNodeStatementType staType);
		TreeNode* CreateNode(TreeNode::TreeNodeType type, TreeNode::TreeNodeExpressionType expType);

		

		stack<Rep> symbolStack;//符号栈
		stack<TreeNode**> treeNodePointerStack;//语法树指针栈
		stack<TreeNode*> operandStack;//操作数栈
		stack<TreeNode*> operatorStack;//操作符栈

		bool symbolStackEmptyFlag;//符号栈为空标记
		unordered_map<Rep, unordered_map<LexType, int>> LL1Table;
		unordered_map<Rep,vector<LexType>> matchTable;
		bool Match();//判断终极符是否匹配
	};

}

