#pragma once
#ifndef _STRING2_H_
#define _STRING2_H_
#include <iostream>

class String {
private:
	char * str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;//cin �Է��Ѱ�
public:
	//�����ڿ� ��Ÿ �޼���
	String(const char * s);
	String();
	String(const String & st); // ���������
	~String();
	int length() const { return len;}
	String stringlow();
	String stringup();
	int LetterApp(char ch);
	//������ �����ε� �޼���
	String & operator=(const String & st);
	String & operator=(const char * s);
	char & operator[](int i);//���ҿ� ���� ����
	const char & operator[](int i) const;
	//�����ε� ������ �������Լ�
	friend bool operator<(const String & st1, const String & st2);
	friend bool operator>(const String & st1, const String & st2);
	friend String operator+(const String & st1, const String & st2);
	friend bool operator==(const String & st1, const String & st2);
	friend std::ostream & operator<<(std::ostream & os, const String & st);
	friend std::istream & operator>>(std::istream & is, String & st);
	//static �Լ�
	static int HowMany();
};
#endif