#pragma once
#include <string>
using namespace std;
class 异常 {
protected :
	string message;
public:
	virtual string what()const {
		return message;
	}
};
class 非期望单词错异常 : public 异常{
public:
	非期望单词错异常(string str) {
		message = str;
	}
	virtual ~非期望单词错异常() = default;
	string what() const{
		return message;
	}
};
class 文件提前结束错误异常:public 异常 {
public:
	文件提前结束错误异常(string str) {
		message = str;
	}
	virtual ~文件提前结束错误异常() = default;
	string what() const {
		return message;
	}
};

