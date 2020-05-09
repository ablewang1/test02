
//#include "clazz_temp.h"
#include<iostream>
using namespace std;

template<class T>
struct Pair {
	T m_first;
	T m_second;

	Pair(T first, T second): m_first(first),m_second(second){}

	T sum() {
		return m_first + m_second;
	}
};

void clazz_temp_show() {
	double x = 3.2, y = 4.6;
	Pair<double> p(x, y);
	cout << p.sum() << endl;
}