#include <iostream>
#include <string>
using namespace std;

class Game
{
public:
	int age = 20;
	// malloc 要知道 长度
	// 要强转
	// 要free
	// 不会调用构造
	char *name = (char *) malloc(strlen("name"));
};

class Person
{
public:
	Person()
	{
		cout << "Person default" << endl;
	}

	~Person()
	{
		cout << "Person ~" << endl;
	}

};


void test01()
{
	// 这个是在栈区开辟
	/*
		Person default
		Person ~
	*/
	Person person;
}

void test02()
{
	// Person default
	// 这个就没有调用 Person ~
	// 这个放在堆区
	// 都会返回对象的指针 不需要强转
	// new 是运算符， malloc 是 函数
	Person *person = new Person;
	// 加了delete 释放才会调用 Person ~， delete 也是运算符 不是函数
	delete person;
}


void test03()
{
	// 用 void * 去 接受，delete 会有问题，不能这样写
	// 这时候不会调用 Person ~
	void *p = new Person;
	delete p;
}

void test04()
{
	// 在堆上开辟空间 一定会调用默认构造，所以一定要有默认构造
	Person *person = new Person[10];
	// 在栈上开辟的可以指定构造，有参或者无参都可以
	//Person p[2] = {Person(), Person()};
	// 这样子就会调用十次，Person default 和 Person ~
	delete []person;
}
int main()
{
	test04();
	return 0;
}
