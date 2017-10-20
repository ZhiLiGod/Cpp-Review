#include<iostream>
#include<string>
using namespace std;

enum programming {Java, CPlusPlus, C};

void update(int& val) {
	val += 2;
}

int feb(int val) {
	if (val == 0) return 1;
	if (val == 1) return 1;
	return feb(val - 1) + feb(val - 2);
}

int main3() {
	int x = 10;
	int* ptr;
	ptr = &x;
	*ptr = 90;
	string name = "Zhi Li";
	int len = name.length();
	cout << len << endl;
	cout << name.size() << endl;
	cout << name.substr(0,2) << endl;
	cout << name.find("i") << endl;
	programming p;
	p = Java;
	cout << *ptr << endl;
	cout << x << endl;
	update(x);
	cout << x << endl;
	cout << feb(5) << endl;
	system("PAUSE");
	return 0;
}