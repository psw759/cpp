#include <iostream>
#include "cd.h"

using namespace std;

void Bravo(const Cd & disk);

int main(void) {
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classic c2 = ("Piano Sonata in B flat, Fantasia",
		"Alfred Brendel", "Phillips", 2, 57.17);
	Cd * pcd = &c1;
	cout << "��ü�� ���� ����Ѵ�:\n";
	c1.Report();
	c2.Report();

	cout << "��ü�� �����ϴ� Cd * �����͸� ����Ѵ�:\n";
	pcd->Report();
	pcd = &c2;
	pcd->Report();

	cout << "Cd ���� �Ű������� ����Ͽ� �Լ��� ȣ���Ѵ�:\n";
	Bravo(c1);
	Bravo(c2);

	cout << "������ �׽�Ʈ�Ѵ�:\n";
	Classic copy;
	copy = c2;
	copy.Report();

	return 0;
}

void Bravo(const Cd & disk) {
	disk.Report();
}