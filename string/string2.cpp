#include <iostream>
#include <cstring>
#include "string2.h"

int String::num_strings = 0;

// 생성자 구현
String::String() {
	str = new char[1];
	str[0] = '\0';
	len = 0;
	num_strings++;
}

String::String(const char * s) {
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	num_strings++;
}

String::String(const String & st) {//복사생성자
	len = st.len;
	str = new char[st.len + 1];
	std::strcpy(str, st.str);
	num_strings++;
}

String::~String() {
	num_strings--;
	delete[] str;
}

//기타 메서드
String String::stringlow() {
	int i = 0;
	while (str[i] != '\0') {
		if ((str[i] > 'A') && (str[i] < 'z')) {
			str[i] += 32;
		}
		i++;
	}
	return *this;
}

String String::stringup() {
	int i = 0;
	while (str[i] != '\0') {
		if ((str[i] > 'a') && (str[i] < 'z')) {
			str[i] -= 32;
		}
		i++;
	}
	return *this;
}

int String::LetterApp(char ch) {
	int i = 0, count = 0;
	while (str[i] != '\0') {
		if (str[i] == ch) {
			count++;
		}
		i++;
	}
	return count;
}
//연산자 오버로딩
String & String::operator=(const String & st) {//대입연산자
	if (*this == st) {//자기자신 대입 x
		return *this;
	}
	len = st.len;
	str = new char[st.len + 1];
	std::strcpy(str, st.str);
	return *this;
}
String & String::operator=(const char * ch) {
	delete[] str;//대입 될 포인터에 할당된 메모리 삭제
	len = std::strlen(ch);
	str = new char[len + 1];
	std::strcpy(str, ch);

	return *this;
}

char & String::operator[](int i) {
	return str[i];
}

const char & String::operator[](int i) const {
	return str[i];
}

//프렌드함수 연산자 오버로딩
bool operator<(const String & st1, const String & st2) {
	return (std::strcmp(st1.str, st2.str) < 0);
}
bool operator>(const String & st1, const String & st2) {
	return(std::strcmp(st1.str, st2.str) > 0);
}

bool operator==(const String & st1, const String & st2) {
	return (std::strcmp(st1.str, st2.str) == 0);
}

String operator+(const String & st1, const String & st2) {//미해결
	String temp;
	temp.len = std::strlen(st1.str) + std::strlen(st2.str);
	temp.str = new char[temp.len + 1];
	std::strcpy(temp.str, st1.str);
	std::strcat(temp.str, st2.str);
	
	return temp;
}

std::ostream & operator<<(std::ostream & os, const String & st) {
	os << st.str;
	return os;
}
std::istream & operator>>(std::istream & is, String & st) {
	delete[] st.str;//
	char * temp = new char[String::CINLIM];
	is.getline(temp, String::CINLIM);
	st.len = std::strlen(temp);
	st.str = new char[st.len + 1];
	std::strcpy(st.str, temp);

	return is;
}

int String::HowMany() {
	return String::num_strings;
}