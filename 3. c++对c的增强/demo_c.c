#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 1. 全局变量增强
int a;
int a = 10;

// 2. 函数检测增强,参数检测增强
int getResult(w, h)
{
}
void test01()
{
    getResult(10, 20, 30);
}

// 3. 类型转换检测增强
void test02()
{
    char *p = malloc(sizeof(64));
}

// 4. struct 增强
struct Person
{
    int age;
    // C 语言不能加函数
};
void test04()
{
    // 必须加入 关键字 struct
    struct Person p;
}

// 5. bool类型增强 c 没有bool 类型
// bool flag;

// 6. 三目运算符增强
void test05()
{
    int a = 10;
    int b = 20;
    printf("%d", a > b ? a : b);
    // expression is not assignable
    // a > b ? a : b = 100;
}
int main()
{
    test05();
    return 0;
}