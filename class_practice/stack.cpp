#include "stack.h"

Stack::Stack() {
	top = 0;
	tot_payment = 0;
}

bool Stack::isempty() {
	if (top == 0) {
		return true;
	}
	else {
		return false;
	}
}

bool Stack::isfull() {
	if (top == 29) {
		return true;
	}
	else {
		return false;
	}
}

bool Stack::push(const Item & itms) {
	if (this->isfull()) {
		return false;
	}
	else {
		items[top] = itms;
		tot_payment += itms.payment;
		top++;
		return true;
	}
}

bool Stack::pop() {
	if (this->isempty()) {
		return false;
	}
	else {
		std::cout << top << "��° ���� ����\n";
		top--;
		tot_payment -= items[top].payment;
		return true;
	}
}

void Stack::print() {
	int i;
	for (i = 0; i < top; i++) {
		std::cout << i + 1 << ". �̸� : " << items[i].fullname
			<< "  ���ұݾ� : " << items[i].payment << std::endl;
	}
	std::cout << "�Ѿ� : " << tot_payment << std::endl;
}

/*******************************************************************************************/

Item make_item() {
	using std::cout;
	using std::cin;

	Item temp;
	cout << "�̸� : ";
	cin.getline(temp.fullname, 35);
	cout << "���ұݾ� : ";
	(cin >> temp.payment).get();

	return temp;
}