#include<iostream>
using namespace std;

int add(int a, int b) {
	cout << a + b << endl;
	return a + b;
}

int main_Funcpointer() {
	add(1,2);//call func directly
	//defince a func type
	{
		typedef int (MyFuncType)(int a, int b);
		MyFuncType *myFunc = NULL;
		myFunc = &add;
		myFunc(3,4);//call indirect
	}

	//define a func pointer type
	{
		typedef int(*MyPointerFuncType)(int a, int b);
		MyPointerFuncType myPointerFunc = NULL;
		myPointerFunc = &add;
		myPointerFunc(10, 20);
	}

	//defince func pointer directly
	{
		int(*MyPointerFunc)(int a, int b);
		MyPointerFunc = add;
		MyPointerFunc(90,100);
	}
	system("pause");
	return 0;
}