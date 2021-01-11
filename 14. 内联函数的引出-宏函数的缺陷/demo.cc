#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

#define MyAdd(x, y) (x + y)

void test01()
{
    // 410 = 10 + 20 * 20, 可以加括号 避免这个错误
    int ret = MyAdd(10, 20) * 20;
    cout << ret << endl;
}
#define MyCompare(a, b) a < b ? a : b

void test02()
{
    int a = 10;
    int b = 20;
    // 10
    int c = MyCompare(a, b);
    cout << c << endl;
    // 12
    // ++a < b ? ++a : b
    c = MyCompare(++a, b);
    cout << c << endl;
}

// 3. 宏定义没有作用域

// 宏函数的目的：特别短小的语句，写一个函数 有出栈入栈，不划算，就直接定义了宏函数直接替换

// 如何解决呢？
// 内联函数，避免宏的问题和缺陷
inline int compare(int a, int b)
{
    return a < b ? a : b;
}
// 注意事项
// 1. 内联函数声明
inline void func();
// 实现时候没加关键字 inline 也不算内联函数
void func(){};

// 2. 类内部的成员函数，默认会前面加 inline

// 3. 内联函数和编译器（不会对这些函数进行内联编译）
    //  3.1 出现了循环语句
    //  3.2 不能存在过多的条件判断语句
    //  3.3 函数体不能过于庞大
    //  3.4 不能对函数进行取址操作

// 4. 内联函数就是给编译器一个建议
int main()
{
    int a = 10;
    int b = 20;
    // 内联函数 空间换时间，普通函数有入栈出栈的开销
    int c = compare(++a, b);
    cout << c << endl;
    return 0;
}