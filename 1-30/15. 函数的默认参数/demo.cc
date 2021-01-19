#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// c 语言是没有默认参数
void test(int a, int b = 20, int c = 30)
{
    int d = a + b + c;
    cout << d << endl;
}

// 函数占位, 调用的时候必须传值，也可以有默认值，但是用不到(没大用途)
void func(int a, int = 1)
{

}

// 如果函数声明有默认值参数，那么函数实现时候必须没有
void myFunc(int a = 10, int b = 10);
void myFunc(int a, int b){}
int main()
{
    test(10);
    test(12, 13);
    return 0;
}