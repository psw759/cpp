#pragma once
#ifndef _STRING2_H_
#define _STRING2_H_
#include <iostream>

class String {
private:
	char * str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;//cin 입력한계
public:
	//생성자와 기타 메서드
	String(const char * s);
	String();
	String(const String & st); // 복사생성자
	~String();
	int length() const { return len;}
	String stringlow();
	String stringup();
	int LetterApp(char ch);
	//연산자 오버로딩 메서드
	String & operator=(const String & st);
	String & operator=(const char * s);
	char & operator[](int i);//원소에 직접 접근
	const char & operator[](int i) const;
	//오버로딩 연산자 프렌드함수
	friend bool operator<(const String & st1, const String & st2);
	friend bool operator>(const String & st1, const String & st2);
	friend String operator+(const String & st1, const String & st2);
	friend bool operator==(const String & st1, const String & st2);
	friend std::ostream & operator<<(std::ostream & os, const String & st);
	friend std::istream & operator>>(std::istream & is, String & st);
	//static 함수
	static int HowMany();
};
#endif