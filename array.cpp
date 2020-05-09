
#include "array.h"

using namespace std;

void array_show() {
	int a[10];
	cout << sizeof(a) << endl;

	double b[5] = { 100.4, 23.5, 35.8, 2.1, 9.8 };
	cout << b[3] << endl;
	//cout << b[7] << endl;
	cout << "--------------------------" << endl;

	cout << b << endl;
	cout << *b << endl;
	cout << *(b + 1) << endl;
	//cout << *(b + 7) << endl;

	int c[3][3] = {
		{0,1,2},
		{3,4,5},
		{6,7,8}
	};
	cout << c[1][2] << endl;
	cout << c[1] << endl;
}
