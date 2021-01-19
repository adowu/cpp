/********************************
@Email :  wushaojun0107@gmail.com
@Time  :  01-19 2021
********************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
#include "String.h"
void test01()
{
    String str = "abc";
    // 不认识 自定义的 String 类型，需要在全局定义 << 运算符的重载
    cout << str << endl;
    cout << "输入新的 str 的 值" << endl;
    cin >> str;
    cout << str << endl;
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
