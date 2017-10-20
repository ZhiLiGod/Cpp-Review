#include<iostream>
#include<string>
using namespace std;

typedef float myFloat;
template<class Type>
void function(Type& v1, Type v2) {
	cout << v1 + v2 << endl;
}
int main6() {
	int* ptr = NULL;
	const int a1 = 10;
	ptr = (int*)&a1;
	*ptr = 20;
	cout << a1 << endl;


	try {
		throw 0;
	}
	catch (int) {
		cout << "Cannot run" << endl;
	}
	myFloat var = 6.3;
	cout << var << endl;
	int a = 1;
	int b = 2;

	//function(a, b);
	system("PAUSE");
	return 0;
}