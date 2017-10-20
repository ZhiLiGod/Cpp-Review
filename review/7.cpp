#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

int main7() {
	vector<string> names;
	names.push_back("abc");
	names.push_back("dfg");
	for (int i = 0; i < 2; i++) {
		cout << names[i] << endl;
	}

	vector<string> names1;
	names1.push_back("abc1");
	names1.push_back("dfg1");
	names.swap(names1);
	cout << "swap " << names.size() << endl;
	for (string s : names) {
		cout << s << endl;
	}

	queue<int> myQ;
	myQ.push(10);
	myQ.push(20);
	myQ.push(30);
	for (int i = 0; i < 3; i++) {
		cout << myQ.front() << " " << myQ.size() << endl;
		myQ.pop();
	}

	stack<int> myS;
	myS.push(10);
	myS.push(20);
	myS.push(30);
	for (int i = 0; i < 3 ; i++) {
		cout << myS.top() << endl;
		myS.pop();
	}
	system("PAUSE");
	return 0;
}