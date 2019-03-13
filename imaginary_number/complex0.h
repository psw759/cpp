#pragma once
#include <iostream>
#ifndef _COMPLEX0_H_
#define _COMPLEX0_H_

class Complex {
	private:
		double real;
		double iman;
	public:
		Complex() { real = 0, iman = 0; }
		Complex(double n1, double n2) { real = n1, iman = n2; }
		Complex operator+(const Complex & cp);
		Complex operator-(const Complex & cp);
		Complex operator*(const Complex & cp);//복소수끼리의 곱
		Complex operator*(double x);//실수와의 곱
		friend Complex operator*(double x, const Complex & cp);//실수 곱 프랜드함수
		Complex operator~();
		friend std::ostream & operator<<(std::ostream & os, Complex & cp);//출력 프랜드 오버로딩
		friend std::istream & operator>>(std::istream & is, Complex & cp);//입력 프랜드 오버로딩
	};
#endif