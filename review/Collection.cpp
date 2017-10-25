#include<iostream>
using namespace std;
#include<vector>
#include<list>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#include<set>

void vectortest() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(10);
	vector<int>::iterator it;
	it = find(v.begin(), v.end(), 10);
	int result = distance(v.begin(), it);
	cout << result << endl;
	cout << v.front() << endl;
	cout << v.back() << endl;
	v.insert(v.begin() + 2, 200);
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it ;
	}
	cout << endl;
	//v.insert(v.begin()+2, 200);
	v.erase(v.begin()+3);
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it ;
	}
	cout << endl;
}

void listtest() {
	list<int> l;
	l.push_back(20);
	l.push_front(2);
	l.push_back(30);
	l.push_back(100);
	
	for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	l.insert(l.begin(), 10000);
	for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	l.erase(l.begin());
	for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void dequeuetest() {
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(30);
	deque<int>::iterator it;

	it = find(d.begin(), d.end(), 20);
	int result = distance(d.begin(), it);
	cout << result << endl;
	d.insert(d.begin()+2, 100000);
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void stacktest() {
	stack<int> s;
	s.push(10);
	s.push(12);
	s.push(50);
	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
	
}

void queuetest() {
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
}

void settest() {
	set<int> s;
	s.insert(123);
	s.insert(456);
	s.insert(789);
	
	set<int>::iterator it;
	it = s.find(456);
	int dis = distance(s.begin(), it);
	cout << dis << endl;
}


int main_collection() {
	//vectortest();
	//listtest();
	//dequeuetest();
	//stacktest();
	//queuetest();
	settest();
	system("pause");
	return 0;
}