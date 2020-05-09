#include "inherit.h"
#include <string>

using namespace std;

class Animal {
protected:
	string m_sex;

public:
	Animal(string sex):m_sex(sex){}
	//virtual void say() = 0;
	virtual void say() {
		cout << "What is the sex of zhe Animal?" << endl;
	}
	//void say() {
	//	cout << "What is the sex of zhe Animal?" << endl;
	//}

};

class Cat :public Animal {
public:
	Cat(string sex):Animal(sex){}

	void say() {
		cout << "This cat's sex is " << this->m_sex << "." << endl;
	}
};

void inherit_show() {
	//Cat* mycat = new Cat("¹«");
	Animal* mycat = new Cat("Ä¸");
	mycat->say();
	delete mycat;
}