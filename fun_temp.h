#include<iostream>

using namespace std;

template<typename T>
T add(T&a, T&b) {
	return a + b;
}

void fun_temp_show() {
	double x = 3.1, y = 4.33;
	cout << add(x, y) << endl;
}