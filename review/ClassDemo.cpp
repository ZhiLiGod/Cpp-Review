#include<iostream>
#include<string>
#include "MyTeacher.h"
using namespace std;

class mycircle {
private :
	double r;
	double s;
public :
	double getR() {
		return this->r;
	}

	void setR(double r) {
		this->r = r;
	}

	double getArea() {
		return 3.14 * r * r;
	}
};

int MyTeacher::num = 10;

class complex {
public:
	int a;
	int b;
	complex(int a = 0, int b = 0) {
		this->a = a;
		this->b = b;
	}
	void print() {
		cout << this->a << "+" << this->b << "i" << endl;
	}

	//void operator=(complex& c1) {

	//}
};
//ÖØÔØ¼ÓºÅ
complex operator+(complex& c1, complex& c2) {
	complex temp(c1.a+c2.a, c2.b+c1.b);
	return temp;
}


int main_classdemo() {
	mycircle* c1 = new mycircle();
	c1->setR(10);
	cout << c1->getArea() << endl;
	MyTeacher t1;
	MyTeacher *t2 = new MyTeacher();
	cout << t1.getName() << endl;
	t1.~MyTeacher();
	//string name = t2->getName;
	int *a = new int; 
	int *b = new int(30);
	int *c = new int[10];
	delete [] c;
	MyTeacher::getNum();

	//operator overloding
	complex c10(1, 2);
	complex c20(6, 8);
	complex c3;
	c3 = c10 + c20;
	c3.print();
	c10 = c20;
	c10.print();
	system("pause");
	return 0;
}