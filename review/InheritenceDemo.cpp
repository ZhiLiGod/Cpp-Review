#include<iostream>
#include<string>
using namespace std;

class parent {
public:
	int a;
	int getB() {
		return this->b;
	}
	parent() {
		cout << "parent constructor" << endl;
	}
	parent(int a) {
		this->a = a;
		
	}
	//static key word
	static int c;
	virtual void test() {
		cout << "parent" << endl;
	}
private:
	int b;
};

int parent::c = 100;

class child : public parent {
public:
	child(int a):parent(a) {
		
	}
	child() {
		cout << "child constructor" << endl;
	}
	~child() {}
	void test() {
		cout << "child" << endl;
	}
};

//pure virtual function
class figer {//abstract class
public:
	virtual int getArea() = 0;
};

class square : public figer {
public:
	int getArea() {
		return l * l;
	}
	int getL() {
		return l;
	}
public:
	int l;
};


int main_() {
	parent p(1);
	child c1(20);
	c1.a = 10;
	c1.getB();
	cout << c1.c << endl;
	parent *pp = new child();
	pp->test();

	//³éÏóÀà
	square s;
	s.l = 10;
	cout <<"Area is: " << s.getArea() << endl;
	figer *f = new square();
	
	system("pause");
	return 0;
}