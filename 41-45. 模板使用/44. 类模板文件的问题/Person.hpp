/***************************************************
@Email: wushaojun0107@gmail.com 
@Time: 六  2/ 6 17:50:44 2021
***************************************************/
#pragma once
#include <iostream>
#include <string>
using namespace std;

template <class T1, class T2>
class Person
{
public:
	// 类模板的成员函数，不会在编译的时候生成，所以在demo.cc中直接引入 Person.h 就看不到下面
	// 两个函数的方法，所以直接在demo.cc 中就会在执行的时候报调用错了
	// 更常见的解决办法是 将 类模板的文件后缀名改为 .hpp
	Person(T1, T2);
	void show();

	T1 name;
	T2 age;
};

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->name = name;
	this->age = age;
};

template <class T1, class T2>
void Person<T1, T2>::show()
{
	cout << this->name << " " << this->age << endl;
}

