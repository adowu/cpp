#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void test01()
{

    // int &ref =10; 这是不合法的
    // int temp =10; const int &ref = temp;
    const int &ref = 10;
    int *p = (int *)&ref;
    *p = 100;
    cout << ref << endl;
}

// 常量引用 修饰形式参数
void show(const int &value)
{
    // 这里只是展示，而不修改，则用const 修饰, 当然还是可以取地址修改
    cout << value << endl;
}

void test02()
{
    int a = 10;
    show(a);
}
int main()
{
    test02();
    return 0;
}