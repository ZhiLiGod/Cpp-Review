#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;

template <typename T>
class A {
public:
	A() {}
	A(T a) {
		this->a = a;
	}

	void printA() {
		cout << this->a << endl;
	}

private:
	T a;
};

class B : public A<int> {
public:
	B() {}
};

template <typename T>
class C : public A<T> {
public:
	C() {}
};

template <typename T>
class AA {
public:
	static T m_a;
};
template <typename T>
T AA<T>::m_a = 0;

int main_classtemplate() {
	A<int> a(10);
	a.printA();
	A<char> b('c');
	b.printA();
	A<string> c("asd");
	c.printA();

	B classB;
	C<int> classC;

	AA<int> a1, a2, a3;
	a1.m_a = 10;
	a2.m_a = 20;
	a3.m_a = 30;
	cout << AA<int>::m_a << endl;
	system("pause");
	return 0;
}

class Animal {
public:
	virtual void cry() = 0;
};

class Dog : public Animal {
public:
	Dog() {}
	virtual void cry() {
		cout << "Dog crying" << endl;
	}
};

class Cat : public Animal {
	Cat() {}
	virtual void cry() {
		cout << "Cat crying" << endl;
	}
};


int main_cast() {

	double PI = 3.1415926;
	int num = PI;//invisible
	cout << num << endl;
	cout << PI << endl;
	int num2 = static_cast<int>(PI);//visible
	char *p1 = "Helloworld";
	int *p2 = NULL;
	p2 = reinterpret_cast<int*>(p1);//cast to address
	cout << num2 << endl;
	cout << p2 << endl;

	Animal *ani = new Dog();
	ani->cry();

	system("pause");
	return 0;
}

void divide(int x, int y) {
	if (y == 0) {
		throw y;
	}
	cout << x/y << endl;
}

int main_Exception() {

	try {
		divide(100, 0);
	}
	catch (int) {
		cout << "y less or equals 0" << endl;
	}
	catch (...) {
		cout << "Unknown Exception" << endl;
	}

	system("pause");
	return 0;
}


int main_inout() {
	int myInt;
	long myLong;
	char mybuf[1024]; 
	string str;
	cin >> myInt;
	cin >> myLong;
	getline(cin, str);//cannot accept space
	cin.getline(mybuf, 256);
	cout << mybuf << endl;
	char *ch = "asd";
	//cout.width(20);
	cout.write(ch, strlen(ch)) << endl;
	//cout <<"<strat>" << setw(20) << setfill("*") << hex << 123 << endl;
	system("pause");
	return 0;

}

class Tea {
public:
	Tea() {
		age = 10;
		name = "li zhi";
	}
	Tea(int age, char* name) {
		this->age = age;
		this->name = name;
	}
	void print() {
		cout << age << endl;
		cout << name << endl;
	}
private:
	int age;
	char* name;
};

int main_file() {
	char *fname = "d:/1.txt";
	ofstream fout(fname);//output stream
	fout << "hello..." << endl;
	fout.close();

	//read;
	ifstream fin(fname);//input stream
	char ch;
	while (fin.get(ch)) {
		cout << ch;
	}
	fin.close();

	char *fn = "D:/123.dat";
	ofstream fo(fn);
	Tea t1(10,"li");
	Tea t2(20, "zhi");
	fo.write((char*)&t1, sizeof(Tea));
	fo.write((char*)&t2, sizeof(Tea));
	fo.close();

	ifstream fi(fn);
	Tea tmp;
	fi.read((char*)&tmp, sizeof(Tea));
	tmp.print();
	fi.read((char*)&tmp, sizeof(Tea));
	tmp.print();
	fi.close();
	system("pause");
	return 0;
}

int main_binaryfile() {
	char *fn = "D:/123.dat";
	ofstream fo(fn);
	Tea t1(10, "li");
	Tea t2(20, "zhi");
	fo.write((char*)&t1, sizeof(Tea));
	fo.write((char*)&t2, sizeof(Tea));
	fo.close();

	ifstream fi(fn);
	Tea tmp;
	fi.read((char*)&tmp, sizeof(Tea));
	tmp.print();
	fi.read((char*)&tmp, sizeof(Tea));
	tmp.print();
	fi.close();
	system("pause");
	return 0;
}