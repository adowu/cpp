#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	// 静态成员变量，会共享数据
	// 在类内声明，类外进行初始化；通常不在类内做
	static int number;
	// 静态函数中，不能调用非静态的成员变量；因为 func 是共享的，而非静态的参数却不是共享的。不同对象的不能区分开；
	static void func()
	{
		cout << "static function" << endl;
	}
//静态成员变量也有权限
private:
	static int other;

	static void func2()
	{
		cout << "静态 func 也有权限" << endl;
	}

};

// 类外初始化的实现
int Person::number = 18;
// 这个还算是类内初始化
int Person::other = 19;
void test01()
{
	
	cout << "Person name:" << Person::number << endl;	
	// 通过对象访问属性
	Person p1;
	p1.number = 19;
	Person p2;
	p2.number = 20;
	cout << "p1 name:" << p1.number << endl;

	cout << "p2 name:" << p2.number << endl;

	// 两个输出是一样的

	// 通过类名访问,如果在 构造中初始化，那么通过 类名访问就不走构造了；
	cout << "Person name:" << Person::number << endl;	
	// demo.cc:40:31: error: 'other' is a private member of 'Person'
	// cout << "Other: " << Person::other << endl;
	p1.func();
	p2.func();
	Person::func();
}
int main()
{
	test01();
	return 0;
}
