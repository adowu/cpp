#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
namespace Yunna 
{
    int sunwukongID = 10;
}

void test01()
{
    int sunwukongID = 20;
    cout << sunwukongID << endl;
}
void test02()
{
    int sunwukongID = 30;
    // 这行代码说明，sunwukongID 都是 Yunna下面的
    // using Yunna::sunwukongID;
    // 但是编译器是就近原则，会去找 上面一样的 值为30的sunwukongID
    // 避免二义性
    // target of using declaration conflicts with declaration already in scope
    cout << sunwukongID << endl;
}
// using 编译指令
void test03()
{
    int sunwukongID = 40;
    // 这里只是打开了这个命名空间，并不是直接用里面的 变量，还是就近的变量来输出还是 40
    // 如果上面的 局部没了，就会输出 Yunna 下的变量了
    using namespace Yunna;
    cout << sunwukongID << endl;
}



int main()
{
    test03();
    return 0;
}
