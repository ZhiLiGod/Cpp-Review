#include<string>
using namespace std;
#pragma once//ֻ����һ��

class MyTeacher
{
public:
	static int num;
private:
	int age;
	string name;

public:
	MyTeacher();
	~MyTeacher();
	int getAge();
	void setAge(int age);
	string getName();
	static void getNum();
};

