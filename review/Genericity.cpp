#include<iostream>
#include<string>
using namespace std;

template <typename T>
void myswap(T &a, T &b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
void mySort(T *a, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (a[i] > a[j]) {
				int temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}


int main_genericity() {
	int a = 10;
	int b = 20;
	myswap<int>(a, b);
	string str1 = "zbc";
	string str2 = "ghj";
	int arr[] = {1,2,3,4,5,6,0};
	int size = sizeof(arr) / sizeof(*arr);
	mySort(arr, size);
	for (int i : arr) {
		cout << i << endl;
	}
	myswap<string>(str1,str2);
	cout << a << b << endl;
	cout << str1 << str2 << endl;
	system("pause");
	return 0;
}