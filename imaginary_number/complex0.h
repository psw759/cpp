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
		Complex operator*(const Complex & cp);//���Ҽ������� ��
		Complex operator*(double x);//�Ǽ����� ��
		friend Complex operator*(double x, const Complex & cp);//�Ǽ� �� �������Լ�
		Complex operator~();
		friend std::ostream & operator<<(std::ostream & os, Complex & cp);//��� ������ �����ε�
		friend std::istream & operator>>(std::istream & is, Complex & cp);//�Է� ������ �����ε�
	};
#endif