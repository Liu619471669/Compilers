#pragma once
#include "LiuPQ.h"
#include <iostream>
//token����
enum class LexType {
	/*���ǵ��ʷ���*/
	ENDFILE, ERROR,
	/*������*/
	PROGRAM, PROCEDURE, TYPE, VAR, IF,
	THEN, ELSE, FI, WHILE, DO,
	ENDWH, BEGIN1, END1, READ, WRITE,
	ARRAY, OF, RECORD, RETURN1,
	/*����*/
	INTEGER, CHAR1,
	/*���ַ����ʷ���*/
	ID, INTC, CHARC,
	/*�������*/
	ASSIGN, EQ, LT, PLUS, MINUS,
	TIMES, OVER, LPAREN, RPAREN, DOT,
	COLON, SEMI, COMMA, LIMIDPAREN, RMIDPAREN,
	UNDERANGE
};

typedef struct TokenList
{
	int Lineshow;//������Դ���������
	LexType Lex;//���ʴ˷���Ϣ����
	char* Sem;//����������Ϣ
	TokenList* next;//��һ������ָ��
}TokenList;
