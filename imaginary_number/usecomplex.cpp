#include <iostream>
#include "complex0.h"
#include "string"

int main(void) {
	using std::cout;
	using std::cin;
	using std::endl;

	Complex a(3.0, 4.0);
	Complex c;
	cout << "하나의 복소수를 입력하십시오 (끝내려면 q) : \n";

	while (cin >> c) {
		cout << "c = " << c << endl;
		cout << "공액복소수 = " << ~c << endl;
		cout << "a = " << a << endl;
		cout << "a + c = " << a + c << endl;
		cout << "a - c = " << a - c << endl;
	} 
}