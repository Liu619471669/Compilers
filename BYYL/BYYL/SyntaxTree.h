
#ifndef SYNTAXTREE_H
#define SYNTAXTREE_H

#include <vector>
#include <map>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <set>
using namespace std;
//语法树节点类型

class TreeNode {

public:

	/*
	成员变量类型声明
	*/

	enum TreeNodeType {
		ProK, PheadK, TypeK, VarK, ProcDecK, StmLK, DecK, StmtK, ExpK
	};
	//语法树节点声明类型
	enum TreeNodeDeclareType {
		ArrayK, CharK, IntegerK, RecordK, IdK_Dec
	};
	//语法树节点语句类型
	enum TreeNodeStatementType {
		IfK, WhileK, AssignK, ReadK, WriteK, CallK, ReturnK
	};
	//语法树节点表达类型
	enum TreeNodeExpressionType {
		OpK, ConstK, IdK_Exp
	};
	//语法树节点类型共用体
	union TreeNodeKindTypeUnion
	{
		TreeNodeDeclareType dec;
		TreeNodeStatementType stmt;
		TreeNodeExpressionType exp;
	};
	enum wordType {//当语法树节点为“关系运算符表达式”时，取LT，EQ；当语法树节点为“加法运算简单表达式”时，取PLUS，MINUS；当语法树节点为“乘法运算项”时，取TIMES，OVER;其他情况无效
		LT, EQ, PLUS, MINUS, TIMES, OVER
	};
	enum varkindType {//IdV表示标志符变量，ArrayMembV表示数组成员变量，FieldMembV表示域成员变量
		IdV, ArrayMembV, FieldMembV
	};
	enum checkType {//为类型检查ExpType类型
		Void, Integer, Boolean
	};

	/*
	成员变量
	*/

	TreeNode* child[3];//孩子节点
	TreeNode* sibling;//兄弟节点
	int linemo;//源程序行号
	TreeNodeType nodekind;//语法树节点类型
	TreeNodeKindTypeUnion kind;//语法树节点的具体类型，nodekind为DecK存为声明类型dec，nodekind为StmtK存为语句类型stmt，nodekind为ExpK时存为表达类型exp
	int idnum;//一个节点中的标志符的数量
	vector<string> name;//节点中标志符的名字
	//std::vector<>
	string typeName;//记录类型名，当节点为声明类型dec，且类型是由类型标志符表示时有效

private:

	struct ArrayProperties {
		int low;//数组下界
		int up;//数组上界
		string childType;//数组成员类型
	};
	struct ProcProperties {
		enum ParamType {
			valparamtype, varparamtype
		};
		ParamType paramt;//记录过程的参数类型，valparamtype为值参，varparamtype为变参
	};
	struct ExpressionProperties {
		wordType op;//单词类型
		int val;//记录语法树节点的数值，仅当语法树节点为“数字因子”对应的语法树时才有效
		varkindType varkind;//记录变量类别
		checkType type;//记录语法树节点的检查类型
	};

	//记录节点的其他属性
	struct SyntaxTreeNodeProperties
	{
		ArrayProperties ArrayAttr;
		ProcProperties procAttr;
		ExpressionProperties ExpAttr;
	};


};


#endif 