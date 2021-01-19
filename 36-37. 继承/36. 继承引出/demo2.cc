/********************************
@Email :  wushaojun0107@gmail.com
@Time  :  01-19 2021
********************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Parent
{
public:
    void head()
    {
        cout << "Parent Head" << endl;
    }
    void footer()
    {
        cout << "Parent Footer" << endl;
    }
    void left()
    {
        cout << "Parent Left" << endl;
    }
};

class Son : public Parent
{
public:
    void content()
    {
        cout << "Son Content" << endl;
    }
};
class Daughter : public Parent
{
public:
    void content()
    {
        cout << "Daughter Content" << endl;
    }
};
void test01()
{
    Son son;
    son.head();
    son.footer();
    son.left();
    son.content();
    Daughter daughter;
    daughter.head();
    daughter.footer();
    daughter.left();
    daughter.content();
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
