//
#include "exp.h"


using namespace std;

void arthmetic() {
	int a = 212;
	int b = 100;
	int c;

	c = a + b;
	cout << "line1_c的值是" << c << endl;
	c = a - b;
	cout << "line2_c的值是" << c << endl;
	c = a * b;
	cout << "line3_c的值是" << c << endl;
	c = a / b;
	cout << "line4_c的值是" << c << endl;
	c = a % b;
	cout << "line5_c的值是" << c << endl;

	int d = 10;
	c = d++;
	cout << "d++的值是 " << c << endl;
	c = ++d;
	cout << "++d的值是 " << c << endl;
	c = d--;
	cout << "d--的值是 " << c << endl;
	c = --d;
	cout << "--d的值是 " << c << endl;

}

void compare() {
	cout << (1 < 2) << endl;
	cout << (1 > 2) << endl;
	cout << (1 == 2) << endl;
	cout << (1 != 2) << endl;
	cout << (1 >= 1) << endl;
	cout << (1 <= 2) << endl;
}

void logic() {
	cout << (1 < 4 && 5 > 3) << endl;
	cout << (1 > 2 || 3 > 2) << endl;
	cout << !(1 < 2) << endl;
}

void assign() {
	int a = 21;
	int c;

	c = a;
	cout << "c=a :" << c << endl;

	c += a;
	cout << "c+=a :" << c << endl;

	c -= a;
	cout << "c-=a :" << c << endl;

	c *= a;
	cout << "c*=a :" << c << endl;

	c /= a;
	cout << "c/=a :" << c << endl;

	c = 100;
	c %= a;
	cout << "c%=a :" << c << endl;
}

void exp_show() {
	arthmetic();
	compare();
	logic();
	assign();
}