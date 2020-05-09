#include "interrupt.h"

using namespace std;

void interrupt_show() {
	int a[] = { 1,2,3,4,5,6,7,8 };
	for (int i = 0; i < 8; i++) {
		if (a[i] == 5)
			continue;
		cout << a[i] << endl;
	}
	cout << "-------------" << endl;

	for (int i = 0; i < 8; i++) {
	if (a[i] == 5)
		break;
	cout << a[i] << endl;
	}
}