#include "stack.h"

Item make_item();

int main(void) {
	using std::cout;
	using std::cin;

	Stack stack;

	int sel;
	while (1) {
		cout << "1.pop 2.push 3.print 4.exit\n)";
		(cin >> sel).get();

		if (sel == 1) {
			bool b = stack.pop();
			if (b == false) {
				cout << "empty\n";
			}
			else {
				cout << "삭제 완료\n";
			}
		}

		else if (sel == 2) {
			bool b = stack.push(make_item());
			if (b == false) {
				cout << "full\n";
			}
			else {
				cout << "입력 완료 \n";
			}
		}

		else if (sel == 3) {
			stack.print();
		}
		
		else if (sel == 4) {
			break;
		}
		else continue;
		
	}
	cout << "github modification test\n"

	return 0;
}