#include "scope.h"

using namespace std;

int a = 3;

int b;

int global() {
	return 5;
}

void scope_show() {
	cout << a << " " << b << endl;

	int c = 0;
	int a = 2;

	cout << c << " " << a << endl;

	cout << global() << ::a << endl;

	{
		int d = 5;
	}
	//cout << d << endl;�������޷��鿴������ж���ı���
	cout << *(::global) << endl;

}