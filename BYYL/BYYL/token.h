#pragma once
#include "LiuPQ.h"
#include <iostream>
//token种类
enum class LexType {
	/*簿记单词符号*/
	ENDFILE, ERROR,
	/*保留字*/
	PROGRAM, PROCEDURE, TYPE, VAR, IF,
	THEN, ELSE, FI, WHILE, DO,
	ENDWH, BEGIN1, END1, READ, WRITE,
	ARRAY, OF, RECORD, RETURN1,
	/*类型*/
	INTEGER, CHAR1,
	/*多字符单词符号*/
	ID, INTC, CHARC,
	/*特殊符号*/
	ASSIGN, EQ, LT, PLUS, MINUS,
	TIMES, OVER, LPAREN, RPAREN, DOT,
	COLON, SEMI, COMMA, LIMIDPAREN, RMIDPAREN,
	UNDERANGE
};

typedef struct TokenList
{
	int Lineshow;//单词在源程序的行数
	LexType Lex;//单词此法信息类型
	char* Sem;//单词语义信息
	TokenList* next;//下一个链表指针
}TokenList;
