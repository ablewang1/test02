
#include "point.h"

using namespace std;

void point_show() {
	int var = 20;
	int *ip;

	ip = &var;

	cout << "Value of var :" << endl;
	cout << var << &var << endl;

	cout << "Address of ip:" << endl;
	cout << ip << endl;

	cout << "Value of ip:" << endl;
	cout << *ip << endl;

}