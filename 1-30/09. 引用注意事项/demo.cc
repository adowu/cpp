#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 1. 引用必须是合法的内存空间
// int &a = 10;

// 2. b不要返回局部变量的引用
int &doWork()
{
    int a = 10;
    return a;
}

void test01()
{
    int &b = doWork();
    // 理论上 局部变量在 方法结束后 就没了，这里是编译器做了优化
    cout << b << endl;
    // 多输出几次就出问题了
    cout << b << endl;
    cout << b << endl;
    cout << b << endl;
    cout << b << endl;
    cout << b << endl;
}

int &doWork2()
{
    // static 修饰了  就存储了a 的值
    static int a = 10;
    return a;
}
void test02()
{
    int &b = doWork2();

    cout << b << endl;
    // 如果函数返回的是引用，可以当做左值来使用

    doWork2() = 1000;
    cout << doWork2() << endl;

}
int main()
{
    test02();
    return 0;
}