/***************************************************
> Email: wushaojun0107@gmail.com 
> Time: 二  1/19 15:25:58 2021
***************************************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    Person(){}
    Person(int a, int b):a(a), b(b){}
    int a;
    int b;

    Person operator+ (Person &p)
    {
        Person temp;
        temp.a = this->a + p.a;
        temp.b = this->b + p.b;
        return temp;
    }
};

Person operator-(Person &p1, Person &p2)
{
    Person temp;
    temp.a = p1.a - p2.a;
    temp.b = p1.b - p2.b;
    return temp;
}

void test01()
{
    Person p1(10, 20);
    Person p2(20,30);
    Person p3 = p1 + p2; 
    cout << p3.a << "-" << p3.b << endl;
    Person p4 = p1 - p2;
    cout << p4.a << "-" << p4.b << endl;
}

int main(int argc,const char* argv[])
{
    test01();
    return 0;
}

