/********************************
@Email :  wushaojun0107@gmail.com
@Time  :  01-19 2021
********************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Person {

public:
	Person(){
		// this = Person * cosnt this
		this->a = 0;
		this->b = 0;
	}
	int a;
	mutable int b;
	// 常函数，不允许修改指针变量；如果变量 被 mutble 修饰仍然是可以更改的
	void show() const
	{
		this->b = 10;
		cout << this->a << endl;
		cout << this->b << endl;
	}

	void show2(){}
};

void test01()
{
	Person p;
	p.show();
	
	// 常对象不允许修改
	const Person p2;
	cout << p2.a << endl;
	// 常对象不允许修改, 常对象只能调用 常函数，而不能调用普通的函数
	// p2.show2();
}

int main(int argc,const char* argv[])
{
	test01();
    return 0;
}