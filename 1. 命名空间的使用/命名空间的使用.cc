#include "head/game1.h"
#include "head/game2.h"

// 1. 可以放 函数 变量 结构体 类
// 2. 必须定义在全局
// 3. 可以嵌套（逐层调用）
// 4. 命名空间是开放的，可以随时往原先命名空间添加内容（不是覆盖）
// 5. 匿名 命名空间 （相当于定义了 static 的变量，只能在当前文件使用）
// 6. 可以起别名
namespace veryLongLongLongLongName
{
    int a = 0;
}

namespace shortName = veryLongLongLongLongName;

int main()
{
    KingGlory::goAttack();
    LOL::goAttack();
    cout << "别名：" << shortName::a << endl;
    return EXIT_SUCCESS;
}