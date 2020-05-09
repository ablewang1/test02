#include "ref.h"
#include <string>

using namespace std;

void ref_show() {
	int i = 3;
	double d = 4;

	int& r = i;
	double& s = d;

	i = 5;
	cout << "Value of i :" << i << endl;
	cout << "Value of r :" << r << endl;

	d = 11.7;
	cout << "Value of d :" << d << endl;
	cout << "Value of s :" << s << endl;
}