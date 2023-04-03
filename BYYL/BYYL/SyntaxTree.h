#pragma once
#include "LiuPQ.h"

#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <set>
using namespace std;
namespace Liu {
	class TreeNode {

	public:
		
		
		enum class TreeNodeType {
			ProK,//根节点标志节点
			PheadK,//程序头标志节点
			TypeK,//类型声明标志节点
			VarK,//变量声明标志节点
			ProcDecK,//函数声明标志节点
			StmLK, //语句序列标志节点
			DecK,//声明节点
			StmtK,//语句节点
			ExpK,//表达式节点
		};
		//语法树节点声明类型
		enum class TreeNodeDeclareType {
			ArrayK, CharK, IntegerK, RecordK, IdK_Dec
		};
		//语法树节点语句类型
		enum class TreeNodeStatementType {
			IfK, WhileK, AssignK, ReadK, WriteK, CallK, ReturnK
		};
		//语法树节点表达类型
		enum class TreeNodeExpressionType {
			OpK, ConstK, IdK_Exp
		};
		//语法树节点类型共用体
		union TreeNodeKindTypeUnion
		{
			TreeNodeDeclareType dec;
			TreeNodeStatementType stmt;
			TreeNodeExpressionType exp;
		};
		enum class varkindType {//IdV表示标志符变量，ArrayMembV表示数组成员变量，FieldMembV表示域成员变量
			IdV, ArrayMembV, FieldMembV
		};
		enum class checkType {//为类型检查ExpType类型
			Void, Integer, Boolean
		};

		int GetLinemo();
		int GetIdnum();
		void SetLineno(int value);
		void SetIdnum(int value);

		/*
		成员变量
		*/

		TreeNode* child[3];//孩子节点
		TreeNode* sibling;//兄弟节点
		
		TreeNodeType nodekind;//语法树节点类型
		TreeNodeKindTypeUnion kind;//语法树节点的具体类型，nodekind为DecK存为声明类型dec，nodekind为StmtK存为语句类型stmt，nodekind为ExpK时存为表达类型exp
		

		vector<string> name;//节点中标志符的名字
		string typeName;//记录类型名，当节点为声明类型dec，且类型是由类型标志符表示时有效

		


	private:
		int idnum;//一个节点中的标志符的数量
		int linemo;//源程序行号
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
			LexType op;//单词类型
			float val;//记录语法树节点的数值，仅当语法树节点为“数字因子”对应的语法树时才有效
			varkindType varkind;//记录变量类别
			checkType type;//记录语法树节点的检查类型
		};

		

	public:
		//记录节点的其他属性
		struct SyntaxTreeNodeProperties
		{
			ArrayProperties ArrayAttr;
			ProcProperties procAttr;
			ExpressionProperties ExpAttr;
		};
		//成员变量
		SyntaxTreeNodeProperties syntaxTreeNodeProperties;//记录节点的其他属性

	};
}




