#include<iostream>
using namespace std;
#include<fstream>

class teacher {
public:
	teacher() {}
	teacher(char* name, int age) {
		this->name = name;
		this->age = age;
	}
	void print() {
		cout << name << " " << age << endl;
	}
public:
	char* name;
	int age;

};

int main_1() {

	char* filename = "d:/1.txt";
	ofstream out(filename, ios::app);
	out << "lizhi" << endl;
	out.close();
	ifstream in(filename);
	char ch;
	while (in.get(ch)) {
		cout << ch <<" ";
	}
	cout << endl;
	in.close();
	system("pause");
	return 0;
}

int main_fileIO() {

	teacher t1("lizhi", 30);
	char* filename = "d:/1.txt";
	ofstream out(filename);
	out.write((char*)&t1, sizeof(teacher));
	out.close();
	ifstream in(filename);
	teacher tmp;
	in.read((char*)&tmp, sizeof(teacher));
	tmp.print();
	system("pause");
	return 0;
}