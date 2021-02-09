/***************************************************
@Email: wushaojun0107@gmail.com 
@Time: 六  2/ 6 17:47:30 2021
***************************************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "MyArr.hpp"
using namespace std;
class Person{
public:
	Person(){};
	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

	string name;
	int age;
};

void test01()
{
	MyArray<int> array(10);
    for (int i = 0; i < 10; i++)
    {   
        array.push(i);
    }   
    for (int i = 0; i < 10; i++)
    {   
        cout << array[i] << " ";;
    }   
    cout << endl;
}


void test02()
{
	Person p1("A", 13);
	Person p2("B", 14);
	Person p3("C", 16);
	Person p4("D", 15);
	Person p5("E", 14);
	// 这里在声明 Person 类型的时候会调用 Person 的 默认无参构造
	MyArray<Person> array(5);

	array.push(p1);
	array.push(p2);
	array.push(p3);
	array.push(p4);
	array.push(p5);

	for(int i = 0; i < 5; ++i){
		cout << array[i].name << " ";
	}

	cout << endl;
}

int main(int argc,const char* argv[])
{
	test02();
    return 0;
}
