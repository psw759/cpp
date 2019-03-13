#include <iostream>
#include "complex0.h"

Complex Complex::operator+(const Complex & cp) {
	Complex temp;
	temp.real = real + cp.real;
	temp.iman = iman + cp.iman;

	return temp;
}

Complex Complex::operator-(const Complex & cp) {
	Complex temp;
	temp.real = real - cp.real;
	temp.iman = iman - cp.iman;

	return temp;
}

Complex Complex::operator*(const Complex & cp) {
	Complex temp;
	temp.real = (real * cp.real) - (iman * cp.iman);
	temp.iman = (real * cp.real) + (iman * cp.iman);

	return temp;
}

Complex Complex::operator*(double x) {
	Complex temp;
	temp.real = x * real;
	temp.iman = x * iman;

	return temp;
}

Complex operator*(double x, const Complex & cp) {
	Complex temp;
	temp.real = x * cp.real;
	temp.iman = x * cp.iman;

	return temp;
}

Complex Complex::operator~() {
	Complex temp;
	temp.real = real;
	temp.iman = (-1)*iman;
	return temp;
}

std::ostream & operator<<(std::ostream & os, Complex & cp) {
	os << "[" << cp.real << "," << cp.iman << "]\n";
	return os;
}

std::istream & operator>>(std::istream & is, Complex & cp) {
	is >> cp.real >> cp.iman;
	return is;
}