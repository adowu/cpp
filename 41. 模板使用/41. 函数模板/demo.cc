/***************************************************
@Email: wushaojun0107@gmail.com 
@Time: 一  2/ 1 16:37:07 2021
***************************************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

// 泛型编程，类型参数化
// 告诉编译器，下面如果出现 T 不要报错
template<typename T>
// template<class T> 两种方式都可以
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;
	mySwap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	double c = 3.14;
	double d = 1.12;
	mySwap<double>(c, d);
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
}

int main(int argc,const char* argv[])
{
	test01();
    return 0;
}
