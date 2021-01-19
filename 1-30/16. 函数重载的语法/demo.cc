#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 同作用域下，函数名相同，参数个数不同，或者类型，顺序不同，（返回值不可以作为条件）
void func()
{
    cout << "No" << endl;
}
void func(int a)
{
    cout << "Yes: " << a << endl;
}
void test01()
{
    func();
    func(1);
}
// 当函数重载遇到默认参数的时候，要注意避免二义性问题
void func2(int a, int b = 10)
{

}
void func2(int a)
{

}
void test02()
{
    // 有多个 重载函数 "func2" 实例与参数列表匹配
    // func2(10);
}

// 引用重载
void func3(int &a)
{
}
void func3(const int &a)
{
}
void test03()
{
    func3(10);
    // 如果没有 第二个 func3 ， 则不能直接传 10 ， 是不合法的地址，加const 就开辟了零时的地址

}
int main()
{
    test01();
    return 0;
}