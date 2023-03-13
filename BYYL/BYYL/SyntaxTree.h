#pragma once
#include "Grammatical.h"
#include "LL1.h"
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

		/*
		��Ա������������
		*/

		enum class TreeNodeType {
			ProK, PheadK, TypeK, VarK, ProcDecK, StmLK, DecK, StmtK, ExpK
		};
		//�﷨���ڵ���������
		enum class TreeNodeDeclareType {
			ArrayK, CharK, IntegerK, RecordK, IdK_Dec
		};
		//�﷨���ڵ��������
		enum class TreeNodeStatementType {
			IfK, WhileK, AssignK, ReadK, WriteK, CallK, ReturnK
		};
		//�﷨���ڵ�������
		enum class TreeNodeExpressionType {
			OpK, ConstK, IdK_Exp
		};
		//�﷨���ڵ����͹�����
		union TreeNodeKindTypeUnion
		{
			TreeNodeDeclareType dec;
			TreeNodeStatementType stmt;
			TreeNodeExpressionType exp;
		};
		enum class wordType {//���﷨���ڵ�Ϊ����ϵ��������ʽ��ʱ��ȡLT��EQ�����﷨���ڵ�Ϊ���ӷ�����򵥱��ʽ��ʱ��ȡPLUS��MINUS�����﷨���ڵ�Ϊ���˷������ʱ��ȡTIMES��OVER;���������Ч
			LT, EQ, PLUS, MINUS, TIMES, OVER
		};
		enum class varkindType {//IdV��ʾ��־��������ArrayMembV��ʾ�����Ա������FieldMembV��ʾ���Ա����
			IdV, ArrayMembV, FieldMembV
		};
		enum class checkType {//Ϊ���ͼ��ExpType����
			Void, Integer, Boolean
		};

		/*
		��Ա����
		*/

		TreeNode* child[3];//���ӽڵ�
		TreeNode* sibling;//�ֵܽڵ�
		int linemo;//Դ�����к�
		TreeNodeType nodekind;//�﷨���ڵ�����
		TreeNodeKindTypeUnion kind;//�﷨���ڵ�ľ������ͣ�nodekindΪDecK��Ϊ��������dec��nodekindΪStmtK��Ϊ�������stmt��nodekindΪExpKʱ��Ϊ�������exp
		int idnum;//һ���ڵ��еı�־��������
		vector<string> name;//�ڵ��б�־��������
		//std::vector<>
		string typeName;//��¼�����������ڵ�Ϊ��������dec���������������ͱ�־����ʾʱ��Ч

	private:

		struct ArrayProperties {
			int low;//�����½�
			int up;//�����Ͻ�
			string childType;//�����Ա����
		};
		struct ProcProperties {
			enum ParamType {
				valparamtype, varparamtype
			};
			ParamType paramt;//��¼���̵Ĳ������ͣ�valparamtypeΪֵ�Σ�varparamtypeΪ���
		};
		struct ExpressionProperties {
			wordType op;//��������
			int val;//��¼�﷨���ڵ����ֵ�������﷨���ڵ�Ϊ���������ӡ���Ӧ���﷨��ʱ����Ч
			varkindType varkind;//��¼�������
			checkType type;//��¼�﷨���ڵ�ļ������
		};

		//��¼�ڵ����������
		struct SyntaxTreeNodeProperties
		{
			ArrayProperties ArrayAttr;
			ProcProperties procAttr;
			ExpressionProperties ExpAttr;
		};


	};
}
using namespace std;
//�﷨���ڵ�����



