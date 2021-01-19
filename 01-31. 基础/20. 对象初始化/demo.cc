#include <iostream>
#include <string>
using namespace std;

class Person
{

public:

	// 可以有参数，可以重载
	Person()
	{
		cout << "构造函数" << endl;
	}
	// 不能有参数，不能重载，注意前面的 ~ 符号
	~Person()
	{
		cout << "析构函数" << endl;
	}
};

void test01()
{
	Person person;
}

int main()
{
	test01();
	return 0;
}
