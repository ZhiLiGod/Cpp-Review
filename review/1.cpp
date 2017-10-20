#include<iostream>
#include<string>
using namespace std;

void func() {
	cout << "haha" << endl;
}

class Base {
public:
	Base() {
		func();
	}
	static int demo;
};

//Base b;


int main1() {
	string str = "Hello";
	getline(cin, str);
	int i;
	//cin >> str;
	cout << "main" << " " << str << endl;
	cout << "Hello \n world " << endl;

	int* arr = new int[5];
	int arr1[5] = {};
	for (int i : arr1) {
		cout << i << endl;
	}
	//int arr2[];
	int Matrix1[2][3];
	int Matrix[][3] = { { 1, 2, 3 },
						{ 4, 5, 6 },
						{1, 2, 3} 
						};
	//int* Matrix1 = new int[1][3];

	char c = 'A';
	bool b = true;//1 false == 0
	int x = 10;
	float f = 100.0;
	double d = 1000.0;
	cout << d << endl;
	cout << !b << endl;


	system("PAUSE");
	return 0;
}