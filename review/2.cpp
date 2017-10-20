#include<iostream>
#include<string>
using namespace std;

int main2() {
	int i = 1;
	switch (i)
	{
	case 1:
		cout << "Monday" << endl;
		break;
	case 2:
		cout << "Tuesday" << endl;
		break;
	default:
		cout << "No match" << endl;
		break;
	}

	cout << 1 << endl;
	goto a;
	cout << 2 << endl;
	cout << 3 << endl;
	a:
	cout << 4 << endl;
	int a = 10, b = 20, c = 30;
	b = a = c;
	cout << b << endl;
	string str1 = "abc";
	string str2 = "qabc";
	cout << str1.compare(str2) << endl;
	int v = 5;
	cout << (v << 1) << endl;
	cout << v << endl;
	system("PAUSE");
	return 0;
}