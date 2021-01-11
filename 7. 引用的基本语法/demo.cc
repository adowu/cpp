#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 引用的实质就是起别名，本质就是指针常量
void test01()
{
    int a = 10;
    // & 写到左侧叫引用，在右侧表示取地址
    int &b = a;
    b = 20;
    cout << a << endl;
    cout << b << endl;
}

// 2. 引用必须初始化
void test02()
{
    int a = 10;
    // 引用必须初始化； 引用 变量 "b" 需要初始值设定项
    int &b = a;
    // 引用的别名不能修改
    int c = 20;
    // note: previous definition is here
    // int &b = c;
    cout << a << endl;
    cout << b << endl;
}

// 3. 对数组建立引用
void test03()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
    }
    // 给数组起别名
    int(&pArr)[10] = arr;
    for (int i = 0; i < 10; i++)
    {
        cout << pArr[i] << endl;
    }
    // 4. 第二种方式起别名
    // 一个具有10个元素的int类型数组
    typedef int ArrType[10];
    ArrType &pArr2 = arr;
    for (int i = 0; i < 10; i++)
    {
        cout << pArr2[i] << endl;
    }
}

int main()
{
    test03();
    return 0;
}