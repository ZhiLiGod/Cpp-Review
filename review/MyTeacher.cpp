#include<iostream>
#include<string>
#include "MyTeacher.h"
using namespace std;

MyTeacher::MyTeacher()
{
	this->name = "Kevin";
}


MyTeacher::~MyTeacher()
{
	cout << "Destructor" << endl;
}

void MyTeacher::setAge(int age) {
	this->age = age;
}

int MyTeacher::getAge(){
	return this->age;
}

string MyTeacher::getName() {
	return this->name;
}

void MyTeacher::getNum() {
	//age = 10;
	cout << num << endl;
}