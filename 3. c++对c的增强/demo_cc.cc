#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 1. 全局变量检测增强
int a;
// redefinition
// int a = 10;

// 2. 函数检测增强,参数检测增强
int getResult(int w, int h)
{
    return 0;
}
void test01()
{
    // too many arguments in function call
    // getResult(10, 20, 30);
}
// 3. 类型转换检测增强
void test02()
{
    // cannot initialize a variable of type 'char *' with an rvalue of type 'void *'
    // char *p = malloc(sizeof(64));
    char *p = (char *)malloc(sizeof(64));
}
// 4. struct 增强
struct Person
{
    int age;
    // C++ 语言能加函数
    void plusAge(){age++;};
};
void test04()
{
    // 必须加入 可以 不加 关键字 struct
    Person p;
    p.age = 10;
    p.plusAge();
    cout << p.age << endl;
}

// 5. bool类型增强 c++ 有bool 类型
bool flag;
void test05()
{
    // 默认 0
    cout << flag << endl;
    // 1
    long size = sizeof(bool);
    cout << size << endl;
    flag = 100;
    // 非 0 值为 1
    cout << flag << endl;
}

// 6. 三目运算符增强
void test06()
{
    int a = 10;
    int b = 20;
    cout << (a > b ? a : b) << endl;
    // c++ 可以 这里 三目运算符 返回的是变量 而 c 返回的是值
    // (a < b ? a : b) = 100;
    // cout << a << endl;
    // cout << b << endl;
    (a > b ? a : b) = 100;
    cout << a << endl;
    cout << b << endl;
    // 如果左侧没括号
    // a > b ? a : b = 100;
    // 这里相当于 是给b赋值了，如果直接返回的 a 则还是 a 的值， 和我们本题要表达的不一致
}
int main()
{
    test06();
    return 0;
}