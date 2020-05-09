#include "clazz.h"
#include<iostream>

using namespace std;

struct Person
{
	string name;
	int age;
	Person() {
		this->name = "wangwu";
		this->age = 29;

	}
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}

	void say() {
		cout << "my name is  " << this -> name << ",my age is  " << this->age << endl;
	}
	~Person() {
		cout << "person 已经被释放" << endl;
	}
};

void clazz_show() {
	{
		Person wangwu;
		wangwu.age = 25;
		wangwu.say();
	}
	cout << "------------" << endl;
	{
		Person* lili = new Person("lili", 24);
		lili->say();
		(*lili).say();
	}
	cout << "************" << endl;

}
