#include <iostream>
#include "port.h"

int main(void) {
	using std::cout;
	using std::cin;

	VintagePort vp1;
	cout << vp1;

	Port p("Gallo", "tawny", 20);
	VintagePort vp2(p, "goodwine", 19);
	vp2.show();

	VintagePort vp3(vp2);
	vp3.show();
	return 0;
}