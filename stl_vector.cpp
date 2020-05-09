#include "stl_vector.h"
#include<vector>
#include<string>

using namespace std;

void stl_vector_show() {
	vector<int> vec;
	int i;

	cout << "Vector size = " << vec.size() << endl;

	for (i = 0; i < 5; i++) {
		vec.push_back(i);
		cout << i << endl;
	}

	cout << "extended vector size = " << vec.size() << endl;

	vector<int>::iterator v = vec.begin();
	while (v != vec.end()) {
		cout << "value of v = " << *v << endl;
		v++;
	}
}