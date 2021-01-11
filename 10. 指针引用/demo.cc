#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


struct Person
{
    int age;
};
void alloc(Person ** p)
{
    //  **p 就是具体的 Person 对象
    //  *p 对象的指针
    //  p 指针的指针
    *p = (Person *)malloc(sizeof(Person));
    (*p)->age = 100;
}
void test01()
{
    Person *person = NULL;
    alloc(&person);
    cout << person->age << endl;
}

void allocRef(Person* &p)
{
    p = (Person *)malloc(sizeof(Person));
    p->age = 200;
}
void test02()
{
    Person *person = NULL;
    allocRef(person);
    cout << person->age << endl;
}

int main()
{
    test02();
    return 0;
}