#include <iostream>
// 命名空间
// using namespace std;
// 头文件，同样支持 .h 比如 math.h 在 cc 中 可以用 cmath
int main()
{
    // endl -> end line 换行，不同操作系统 换行不同，这里直接定义统一换行
    // << 追加运算符
    // cout << "hello world" << endl;
    std::cout << "Hello World!" << std::endl;

    return EXIT_SUCCESS;
}