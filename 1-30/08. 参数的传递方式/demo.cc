#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 要么传值 要么传地址
void swapValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "swap a:" << a << endl;
    cout << "swap b:" << b << endl;
}
void test01()
{
    int a = 10;
    int b = 20;
    swapValue(a, b);
    cout << "test a:" << a << endl;
    cout << "test b:" << b << endl;
}
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "swap a:" << *a << endl;
    cout << "swap b:" << *b << endl;
}
void test02()
{
    int a = 10;
    int b = 20;
    swapPointer(&a, &b);
    cout << "test a:" << a << endl;
    cout << "test b:" << b << endl;
}
// 引用传递
void swapRef(int &a, int &b)
{
    // &a = a
    // &b = b
    int temp = a;
    a = b;
    b = temp;
    cout << "swap a:" << a << endl;
    cout << "swap b:" << b << endl;
}
void test03()
{
    int a = 10;
    int b = 20;
    swapRef(a, b);
    cout << "test a:" << a << endl;
    cout << "test b:" << b << endl;
}

int main()
{
    test03();
    return 0;
}