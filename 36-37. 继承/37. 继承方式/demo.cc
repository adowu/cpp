/********************************
@Email :  wushaojun0107@gmail.com
@Time  :  01-19 2021
********************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class ParentBase
{
public:
    int a;
protected:
    int b;
private:
    int c;
};

class SonPublic : public ParentBase
{
public:
    void func()
    {
        cout << a << endl;
        cout << b << endl;
    }
};

void test01()
{
    SonPublic sp;
    cout << sp.a << endl;
    // 无法访问 b 在 Parent 中是 protected
    sp.func();
}
//-------------------------- protected ---------------------------
class SonProtect : protected ParentBase
{
public:
    void func()
    {
        cout << a << endl;
        cout << b << endl;
    }
};
void test02()
{
    SonProtect sp;
    // 这里 a 级别成为了 protected
    // cout << sp.a << endl;
}
class SonPrivate : private ParentBase
{
public:
    void func()
    {
        cout << a << endl;
        cout << b << endl;
    }
}; 

void test03()
{
    SonPrivate sp;
    // a 是 private 的 不可访问
    // sp.a;    
}

