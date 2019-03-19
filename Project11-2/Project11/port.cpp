#include <iostream>
#include <cstring>
#include "port.h"

using std::strlen;
using std::strcpy;

Port::Port(const char * br, const char * st, int b) {
	brand = new char[strlen(br) + 1];
	strcpy(brand, br);
	style = new char[strlen(st) + 1];
	strcpy(style, st);
	bottles = b;
}

Port::Port(const Port & p) {
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	style = new char[strlen(p.style) + 1];
	strcpy(style, p.style);
	bottles = p.bottles;
}

Port & Port::operator=(const Port & p) {
	if (this != &p) {//자기자신을 대입할 수 없다.
		delete[] brand;
		delete[] style;
		brand = new char[strlen(p.brand) + 1];
		strcpy(brand, p.brand);
		style = new char[strlen(p.style) + 1];
		strcpy(style, p.style);
		bottles = p.bottles;
	}
	return *this;
}

Port & Port::operator+=(int b) {
	bottles += b;
	return *this;
}

Port & Port::operator-=(int b) {
	if (b > bottles) {
		return *this;
	}
	else {
		bottles -= b;
		return *this;
	}
}

void Port::show() const {
	std::cout << "브랜드: " << this -> brand << std::endl;
	std::cout << "스타일: " << this->style << std::endl;
	std::cout << "수량: " << this->bottles << std::endl;
}

std::ostream & operator<<(std::ostream & os, const Port & p) {
	os << p.brand << ", " << p.style << ", " << p.bottles;
	return os;
}

//VintagePort 클래스

VintagePort::VintagePort(const char * nn, int ye) : Port() {
	nickname = new char[strlen(nn) + 1];
	strcpy(nickname, nn);
	year = ye;
}

VintagePort::VintagePort(const char * br, const char * st, int b, 
	const char * nn, int ye): Port(br,st,b) {
	nickname = new char[strlen(nn) + 1];
	strcpy(nickname, nn);
	year = ye;
}

VintagePort::VintagePort(const VintagePort & vp) {
	Port::operator=(vp);
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
}

VintagePort::VintagePort(const Port & p, const char * nn, int ye) {
	Port::operator=(p);
	nickname = new char[strlen(nn) + 1];
	strcpy(nickname, nn);
	year = ye;
}

VintagePort & VintagePort::operator=(const VintagePort & vp) {
	if (this != &vp) {
		Port::operator=(vp);
		delete[] nickname;
		nickname = new char[strlen(vp.nickname) + 1];
		strcpy(nickname, vp.nickname);
		year = vp.year;
	}
	return *this;
}

void VintagePort::show() const {
	Port::show();
	std::cout << "별명: " << this->nickname << std::endl;
	std::cout << "년도: " << this->year << std::endl;
}

std::ostream & operator<<(std::ostream & os, const VintagePort & vp) {
	os << (const Port &)vp;
	os << ", " <<vp.nickname << ", " << vp.year << std::endl;
	return os;
}