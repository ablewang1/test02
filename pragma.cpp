#include "pragma.h"

using namespace std;

//值传递
void swap_value(int x, int y) {
	int z = x;
	x = y;
	y = z;
}

//指针传递
void swap_point(int* x, int* y) {
	int z = *x;
	*x = *y;
	*y = z;
}

//引用传递
void swap_ref(int& x, int& y) {
	int z = x;
	x = y;
	y = z;
}

void pragma_show() {
	int a = 3, b = 4;
	swap_value(a, b);
	cout << a << " and " << b << endl;

	int c = 3, d = 4;
	swap_point(&c, &d);
	cout << c << " and " << d << endl;

	int e = 3, f = 4;
	swap_ref(e, f);
	cout << e << " and " << f << endl;
}