/***************************************************
@Email: wushaojun0107@gmail.com 
@Time: 二  2/ 9 15:09:54 2021
***************************************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

void test01()
{
	char a = 'c';
	// 这样是不可以的
	// double d = dynamic_cast<double>(a);
}

class Base{};
class Child:public Base{};
void test02()
{
	Base *base = NULL;
	Child *child = NULL;

	Base *b = dynamic_cast<Base *>(child);

	// 向下转的时候要有多态才可以
	Base *b1 = new Child;
	Child *c = dynamic_cast<Child *>(b1);
}

int main(int argc,const char* argv[])
{

    return 0;
}

