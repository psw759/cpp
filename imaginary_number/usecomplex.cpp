#include <iostream>
#include "complex0.h"
#include "string"

int main(void) {
	using std::cout;
	using std::cin;
	using std::endl;

	Complex a(3.0, 4.0);
	Complex c;
	cout << "�ϳ��� ���Ҽ��� �Է��Ͻʽÿ� (�������� q) : \n";

	while (cin >> c) {
		cout << "c = " << c << endl;
		cout << "���׺��Ҽ� = " << ~c << endl;
		cout << "a = " << a << endl;
		cout << "a + c = " << a + c << endl;
		cout << "a - c = " << a - c << endl;
	} 
}