#pragma once
#include <string>
using namespace std;
class �쳣 {
protected :
	string message;
public:
	virtual string what()const {
		return message;
	}
};
class ���������ʴ��쳣 : public �쳣{
public:
	���������ʴ��쳣(string str) {
		message = str;
	}
	virtual ~���������ʴ��쳣() = default;
	string what() const{
		return message;
	}
};
class �ļ���ǰ���������쳣:public �쳣 {
public:
	�ļ���ǰ���������쳣(string str) {
		message = str;
	}
	virtual ~�ļ���ǰ���������쳣() = default;
	string what() const {
		return message;
	}
};

