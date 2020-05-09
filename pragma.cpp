#include "pragma.h"

using namespace std;

//ֵ����
void swap_value(int x, int y) {
	int z = x;
	x = y;
	y = z;
}

//ָ�봫��
void swap_point(int* x, int* y) {
	int z = *x;
	*x = *y;
	*y = z;
}

//���ô���
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