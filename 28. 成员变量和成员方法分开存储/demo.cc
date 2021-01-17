#include <iostream>
#include <string>
using namespace std;


class Person
{
public:
	int a;

	void func(){}

	static int b;

	static void func2(){}

	double c;
};

void test01()
{
	cout << "size of Person " << sizeof(Person) << endl;
	// 空类的大小为 1 ； 每个实例的对象都有独一无二的地址， char维护这个地址
	// 有一个 int a 之后 大小变为 4；
	// 加了一个 void func() 之后，还是 4 ，不属于对象身上；
	// 加了一个 static int b 之后 大小还是 4， 静态成员变量也不属于对象
	// 加了一个 static void func2() 之后 大小还是4，

	// 结论：
		// 非静态成员变量，才属于对象
	// 加了一个 double 之后 本来应该是 4 + 8 =12 ；可实际上是 8 + 8 = 16； 给int补了4 个
		// 在文件头部加 #pragma pack(1) 就等于 12 了
}


int main()
{
	test01();
	return 0;
}
