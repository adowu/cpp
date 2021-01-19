#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int atk = 200;
void test()
{
    int atk = 100;
    cout << "局部变量" << atk << endl;
    cout << "全局变量" << ::atk << endl;
}
int main()
{
    test();
    return EXIT_SUCCESS;
}