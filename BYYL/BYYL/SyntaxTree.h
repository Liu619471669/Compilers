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
			ProK,//���ڵ��־�ڵ�
			PheadK,//����ͷ��־�ڵ�
			TypeK,//����������־�ڵ�
			VarK,//����������־�ڵ�
			ProcDecK,//����������־�ڵ�
			StmLK, //������б�־�ڵ�
			DecK,//�����ڵ�
			StmtK,//���ڵ�
			ExpK,//���ʽ�ڵ�
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
		enum class varkindType {//IdV��ʾ��־��������ArrayMembV��ʾ�����Ա������FieldMembV��ʾ���Ա����
			IdV, ArrayMembV, FieldMembV
		};
		enum class checkType {//Ϊ���ͼ��ExpType����
			Void, Integer, Boolean
		};

		int GetLinemo();
		int GetIdnum();
		void SetLineno(int value);
		void SetIdnum(int value);

		/*
		��Ա����
		*/

		TreeNode* child[3];//���ӽڵ�
		TreeNode* sibling;//�ֵܽڵ�
		
		TreeNodeType nodekind;//�﷨���ڵ�����
		TreeNodeKindTypeUnion kind;//�﷨���ڵ�ľ������ͣ�nodekindΪDecK��Ϊ��������dec��nodekindΪStmtK��Ϊ�������stmt��nodekindΪExpKʱ��Ϊ�������exp
		

		vector<string> name;//�ڵ��б�־��������
		string typeName;//��¼�����������ڵ�Ϊ��������dec���������������ͱ�־����ʾʱ��Ч

		


	private:
		int idnum;//һ���ڵ��еı�־��������
		int linemo;//Դ�����к�
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
			LexType op;//��������
			float val;//��¼�﷨���ڵ����ֵ�������﷨���ڵ�Ϊ���������ӡ���Ӧ���﷨��ʱ����Ч
			varkindType varkind;//��¼�������
			checkType type;//��¼�﷨���ڵ�ļ������
		};

		

	public:
		//��¼�ڵ����������
		struct SyntaxTreeNodeProperties
		{
			ArrayProperties ArrayAttr;
			ProcProperties procAttr;
			ExpressionProperties ExpAttr;
		};
		//��Ա����
		SyntaxTreeNodeProperties syntaxTreeNodeProperties;//��¼�ڵ����������

	};
}




