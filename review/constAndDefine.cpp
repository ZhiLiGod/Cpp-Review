#include<iostream>
using namespace std;
#define size 10

//�����󷵻�ֵ
int& getA() {
	int a;
	a = 10;
	return a;
}

int* getAA() {
	int a;
	a = 10;
	return &a;
}

int mainn() {
	int arr[size] = {};
	//cout <<  << endl;
	int a = getA();
	cout << a << endl;
	system("pause");
	return 0;
}

struct teacher {
	int age;
};

int getTeacher(teacher * &t) {
	//�����ڴ� �൱�ڸ�pt����
	t = (teacher*)malloc(sizeof(teacher));
	if (t == NULL) return -1;
	t->age = 36;
	return t->age;
}

inline void printA() {
	int a = 10;
	cout << a << endl;
}

int main_��������() {
	teacher *pt = NULL;
	getTeacher(pt);
	cout << pt->age << endl;
	free(pt);

	//��������
	int x = 20;
	const int& y = x;
	const int& z = 300;

	//��������
	printA();
	system("pause");
	return 0;
}

void fun(int a) {
	cout << a << endl;
}
void fun(int a, int b) {
	cout << a << b << endl;
}

//����type
typedef void (myf)(int a, int b);

//����ָ��type
typedef void(*mypf)(int a, int b);

//typedef float myflo;
int main_����ָ��() {
	myf *myFun = NULL;
	mypf myPFun = NULL;
	myPFun = fun;
	myPFun(1, 2);
	system("pause");
	return 0;
}