#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 1. 全局变量增强
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

// 7. const 增强
// 全局的受到保护不可以修改
const int const_a = 10;
void test06()
{
    // 伪常量
    const int const_b = 20;
    // const_b = 30;
    int *p = &const_b;
    *p = 30;
    printf("*p= %d",  *p);
    // int arr[const_b]; 不可以初始化数组的，因为是伪常量
}

int main()
{
    test06();
    return 0;
}