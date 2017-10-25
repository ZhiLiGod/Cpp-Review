#include<iostream>
using namespace std;

class complex {
public:
	int a;
	int b;
public:
	complex(int a, int b) {
		this->a = a;
		this->b = b;
	}
	complex() {}
	void operator+(complex &c) {
		this->a += c.a;
		this->b += c.b;
	}
	void print() {
		cout << a << "+" << b << "i" << endl;
	}
};

int main_rewriteoperator() {

	complex c1(1, 3), c2(10, 20);
	complex result;
	c1 + c2;
	c1.print();


	system("pause");
	return 0;
}



