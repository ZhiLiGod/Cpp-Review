#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct person {
	string name;
	char gender;
	int age;
}p;

int main5() {

	person myInfo;
	p.name = "ll";
	cout << p.name << endl;
	myInfo.name = "Zhi Li";
	myInfo.gender = 'M';
	myInfo.age = 25;
	cout << "MyInfo: " << myInfo.name << " " << myInfo.gender << endl;
	cout << "-------------------------------------------" << endl;
	string name;
	ifstream readName;
	ofstream printName;
	readName.open("new.txt");
	printName.open("print.txt");
	for (int i = 0; i < 3; i++) {
		readName >> name;
		printName << name <<"\t Hello" << endl;
		
	}
	int arr[] = {1,2,3};
	//arr.size();
	readName.close();
	printName.close();
	system("PAUSE");
	return 0;
}