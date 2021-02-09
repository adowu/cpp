/***************************************************
@Email: wushaojun0107@gmail.com 
@Time: 二  2/ 9 14:49:28 2021
***************************************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

// 基础类型
void test01()
{
	char a = 'a';
	double d = static_cast<double>(a);
	cout << d << endl;
}

// 父子之间转换
class Base{};
class Child : public Base{};
class Other{};

void test02()
{
	Base *base = NULL;
	Child *child = NULL;

	Child *child1 = static_cast<Child *>(base);

	Base *base1 = static_cast<Base *>(child);

	cout << "Finished" << endl;
}
int main(int argc,const char* argv[])
{
	test02();
    return 0;
}

