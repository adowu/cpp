#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
    // 默认内部链接， 除非在 外部文件中，声明 extern 
    extern const int a;
    cout << a << endl;
    return 0;
}