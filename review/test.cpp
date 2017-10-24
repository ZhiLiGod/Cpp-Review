#include <iostream>
using namespace std;
class A {
public:
	A() {}
	~A() {
		throw 42;
	}
};

int main_throw(int argc, const char * argv[]) {
	try {
		A a;
		throw 32;
	}
	catch (int a) {
		std::cout << a;
	}
}

class Something {
public:
	Something() {
		topSecretValue = 42;
	}
	bool somePublicBool;
	int somePublicInt;
	std::string somePublicString;
private:
	int topSecretValue;
};

void F(int *a, int size, int *b) {
	int k = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) continue;
			b[k] *= a[j];
		}
		k++;
	}
	for (int i = 0; i < size; i++) {
		cout << b[i] << endl;
	}
}

int main_arr() {
	int a[4] = {2,1,5,9};
	int b[4] = {1,1,1,1};
	F(a, 4, b);
	system("pause");
	return 0;
}

class AA {
public:
	AA() {}
	virtual ~AA() {}
};
class B : public AA {
public:
	B(){}
	~B() {}
};

int main_AA() {
	AA *a = new B();
	delete a;
	system("pause");
	return 0;
}