/***************************************************
@Email: wushaojun0107@gmail.com 
@Time: 六  2/ 6 17:53:31 2021
***************************************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "Person.hpp"
using namespace std;

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
