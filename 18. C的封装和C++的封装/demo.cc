#include <iostream>
using namespace std;
#include <string>

struct Person
{
	string name;
	int age;

	void eat()
	{
		cout << name << ": eating now ..." << endl;
	}

};

struct Dog
{
	string name;
	int age;

	void eat()
	{
		cout << name << ": eating food now ... ... " << endl;
	}
};

// struct 和 class 是一样的，唯一的不同是 默认权限
// struct 默认权限是 public
// class 默认权限是 private

void test01()
{
	Person p;
	p.name = "Edward";
	p.eat();
}

class Animal
{
	// 这样的在外部就无法调用
    void eat();
};

int main()
{
	test01();
	return 0;
}


