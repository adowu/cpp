#define _CRI_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    int id;
public:
    void setName(string n)
    {
        name = n;
    }
    void setId(int i)
    {
        id = i;
    }
    void show()
    {
        cout << name << ":" << id << endl;
    }
};

void test01()
{
    Student student;
    student.setName("Yunna");
    student.setId(1);
    student.show();
}

int main()
{
    test01();
    return 0;
}