#include <iostream>
#include <string>
using namespace std;


class MyString
{
public:
	MyString(const char *str)
	{
		
	}

	explicit MyString(int size)
	{

	}
	char *mStr;

};

void test01()
{
	// 隐式类型转换 MyString str1 = MyString("a");
	MyString str1 = "a";
	// 如果没有 explicit 关键字， MyString str2 = 10, 就是可以调用的，只是会给人不好的体验。明明是string 咋还有 int
	// MyString str2 = 10;
	// explicit 就是防止 隐式类型转行；
	MyString str3(10);
}

int main()
{
	test01();
	return 0;
}
