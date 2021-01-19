#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 1. 取地址的时候会分配临时内存
// 2. extern 修饰的 const 也会分配内存
void test()
{
    const int a = 10;
    // 取地址的时候会分配临时内存
    int *p = (int *)&a;
}

// 3. 用普通变量初始化const
void test01()
{
    int a = 10;
    // 这时候也分配内存了
    const int b = a;

    int *p = (int *)&b;

    *p = 2000;
    cout << *p << endl;
    cout << b << endl;
}

// 4. 自定义数据类型 加 const 也会分配内存
struct Person
{
    string name;
    int age;
};

void test03()
{
    const Person person = {};
    Person *p = (Person *)&person;
    p->name = "Yunna";
    (*p).age = 18;
    cout << p->name << p->age << endl;
}
int main()
{
    test03();
    return 0;
}