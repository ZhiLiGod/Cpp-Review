#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<deque>
#include<stack>
#include<queue>
#include<list>
#include<set>
#include<map>
#include<string>
using namespace std;

void vectorTest() {
	vector<int> vi;
	vi.push_back(-1);
	vi.push_back(1);
	vi.push_back(2);
	vi.push_back(5);

	for (vector<int>::iterator it = vi.begin(); it != vi.end(); it++) {
		cout << *it << endl;
	}

	int num = count(vi.begin(), vi.end(), 3);
	cout << num << endl;
}

class Teacher {
public:
	int age;
	char *name;
public:
	Teacher() {
		name = "lizhi";
	}
	void print() {
		cout << name << endl;
	}
};

void vectorTest1() {
	vector<Teacher> vi;
	Teacher t1, t2, t3;
	vi.push_back(t1);
	vi.push_back(t2);
	vi.push_back(t3);
	for (vector<Teacher>::iterator it = vi.begin(); it != vi.end(); it++) {
		it->print();
	}
}

void stringTest() {
	string a = "aaa";
	string b("bbbb");
	string c = a; //copy constructor
	string d(10, 'a');
	cout << d.length() << endl;
	
	for (string::iterator it = a.begin(); it != a.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	char ch = a.at(1);
	cout << ch << endl;

}

void stringTest1() {
	string s1 = "abc";
	s1.append("kjg");
	cout << s1 << endl;
	char ch[128] = {0};
	s1.copy(ch, s1.length(), 0);
	cout << ch << endl;

	cout << s1.find("c") << endl;
	s1.replace(0, 2, "123");
	cout << s1 << endl;
	
}

void stringTest2() {
	string s1 = "helloworld hello1 hello2";
	s1.erase(0, 2);
	cout << s1 << endl;
	s1.erase(s1.begin(), s1.end());
	cout << s1 << endl;

	s1.insert(0, "abc");
	cout << s1 << endl;
	s1.insert(s1.length(), "lij");
	cout << s1 << endl;
}

void stringTest3() {
	string s = "AAABBBbbb";
	transform(s.begin(), s.end(), s.begin(), toupper);//tolower
	cout << s << endl;

}

int main_string() {
	vectorTest();
	vectorTest1();
	stringTest();
	stringTest1();
	stringTest2();
	stringTest3();
	system("pause");
	return 0;
}

void vectorTest2() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(10);
	for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++) {
		cout << *it << endl;
	}
	while (v.size()>0) {
		cout << v.back() << endl;
		v.pop_back();
	}
	//v.front() = 11;
}

void vectorTest3() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(10);
	for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++) {
		cout << *it << endl;
	}
	
	v.erase(v.begin(), v.begin()+1);
	for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++) {
		cout << *it << endl;
	}
}

int main_vector() {
	vectorTest();
	vectorTest1();
	vectorTest2();
	vectorTest3();
	system("pause");
	return 0;
}

void dequeTest() {
	deque<int> d;
	d.push_back(1);
	d.push_back(2);
	d.push_back(5);
	d.push_front(-1);
	d.push_front(-2);

	for (deque<int>::iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << endl;
	}

	cout << d.front() << endl;
	cout << d.back() << endl;
	deque<int>::iterator it = find(d.begin(), d.end(), 1);
	if (it != d.end()) {
		cout << distance(d.begin(), it) << endl;
	}
}

int main_deque() {
	dequeTest();

	system("pause");
	return 0;
}

void stackTest() {

	stack<int> s;
	s.push(2);
	s.push(5);
	s.push(10);
	s.push(16);

	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}
	cout << s.size() << endl;

}


int main_stack() {

	stackTest();
	system("pause");
	return 0;
}

void queueTest() {
	queue<int> q;
	q.push(1);	
	q.push(2);
	q.push(5);
	q.push(100);
	cout << q.back() << endl;
	cout << q.front() << endl;
	while (!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}
}

int main_queue() {
	queueTest();
	system("pause");
	return 0;
}

void listTest() {
	list<int> l;
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	l.insert(l.begin(), 1000);
	l.remove(30);
	list<int>::iterator it = l.begin();
	while (it != l.end()) {
		cout << *it << " ";
		it++;
	}
	cout << endl;   
	

}

int main_list() {
	listTest();

	system("pause");
	return 0;
}

void priorityQueueTest() {

	priority_queue<int> p; //default: desc
	//priority_queue<int, vector<int>, less<int>> p
	//priority_queue<int, vector<int>, greater<int>> p1;
	p.push(33);
	p.push(11);
	p.push(22);
	while (!p.empty()) {
		cout << p.top() << " ";
		p.pop();
	}
	cout << endl;
}

int main_priority_queue() {
	priorityQueueTest();
	system("pause");
	return 0;
}

void setTest() {

	set<int> s;
	s.insert(10);
	s.insert(1);
	s.insert(50);
	s.insert(1);

	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << endl;
	}
	set<int>::iterator it1 = s.find(1);
	cout<< "hah" << distance(s.begin(), it1) << endl;

	//set<int, g<int>> s2;

}

class student {
public:
	student(char *name, int age) {
		this->name = name;
		this->age = age;
	}
	void printS() {
		cout << name << age << endl;
	}
public:
	char *name;
	int age;
};
struct FuncStudent {
	bool operator()(const student &left, const student &right) {
		if (left.age < right.age) return true;//asc sort
		else return false;
	}
};
void setTest1() {
	set<student, FuncStudent> s;
	student s1("tom", 20);
	student s2("Json", 30);
	student s3("Kevin", 3);
	s.insert(s1);
	s.insert(s2);
	s.insert(s3);
	for (set<student, FuncStudent>::iterator it = s.begin(); it != s.end(); it++) {
		cout << it->age << endl;
	}
}


void multiSetTest() {

	multiset<int> s;
	s.insert(30);
	s.insert(10);
	s.insert(40);
	s.insert(10);

	for (multiset<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << endl;
	}
}

int main_set() {
	setTest();
	setTest1();
	multiSetTest();
	system("pause");
	return 0;
}

void mapTest() {
	map<int, string> m;
	m.insert(pair<int, string>(10, "lizhi"));
	m.insert(make_pair(30, "Top"));
	m.insert(map<int, string>::value_type(5, "kevin"));
	m[4] = "Josn";

	for (map<int, string>::iterator it = m.begin(); it != m.end(); it++) {
		cout << it->first << it->second << endl;
	}

	map<int, string>::iterator it = m.find(5);
	if (it == m.end()) cout << "not exist" << endl;
	else cout << "exist:" << it->first << " " << it->second << endl;

	while (!m.empty()) {
		map<int, string>::iterator it = m.begin();
		cout << it->first << it->second << endl;
		m.erase(it);
	}

}

class Person {
public:
	string name;
	int age;
public:
	Person() {
		name = "lizhi";
		age = 20;
	}
};

void multimapTest() {
	multimap<string, Person> m;
	Person p1, p2, p3, p4, p5;
	m.insert(make_pair("Sale", p1));
	m.insert(make_pair("Sale", p2));
	m.insert(make_pair("Development", p3));
	m.insert(make_pair("Development", p4));
	m.insert(make_pair("Market", p5));

	for (multimap<string, Person>::iterator it = m.begin(); it != m.end(); it++) {
		cout << it->first << " " << it->second.name << endl;
	}
	int num = m.count("Development");
	cout << "Development: " << m.count("Development") << endl;
	multimap<string, Person>::iterator it = m.find("Development");
	int tag = 0;
	while (it != m.end()&&tag<num) {
		cout << it->second.name << endl;
		tag++;
	}
}

int main() {
	mapTest();
	multimapTest();
	system("pause");
	return 0;
}