#include <iostream>

struct A
{
	int data[2];

	A(int x, int y) : data{ x, y } {}
	virtual void f() {}
};

class Aaa {
public:
	static void func();
	void fun() {}
};
class Bbb : public Aaa {

};
void Aaa::func() {
	std::cout << "ÄãºÃ";
}
int main_friend(int argc, char **argv)
{
	A a(22, 33);
	Aaa aaa;
	aaa.func();
	Aaa *aaaa = new Bbb();
	aaaa->func();
	Aaa::func();
	//Aaa::fun();
	int aa[2] = {1,2};
	std::cout << aa[2] << std::endl;
	std::cout << aa[1] << std::endl;
	std::cout << aa[0] << std::endl;
	int *arr = (int *)&a;
	std::cout << arr[2] << std::endl;
	std::cout << arr[1] << std::endl;
	std::cout << arr[0] << std::endl;
	system("pause");
	return 0;
}