#include <iostream>
#include "string2.h"

int main(void) {
	using namespace std;
	String str;
	String str2("Hello world!");
	String str3(" a");
	cout << str2 << endl << str;
	cout << str2.stringup() << endl;
	cout << str2.stringlow() << endl;
	cout << str2.LetterApp('l') << endl;
	cin >> str;
	cout << str << endl;

	String str1 = "const int";
	cout << str1 << " " << str1.stringup() << endl;

	if (str > str2) {
		cout << "str1 > str2 true " << endl;
	}
	else {
		cout << "str1 < str2 false" << endl;
	}

	return 0;
}