/***************************************************
@Email: wushaojun0107@gmail.com 
@Time: 六  2/ 6 17:41:28 2021
***************************************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

template <class NameType, class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		this->name = name;
		this->age = age;
	}

	void show()
	{
		cout << this->name << " " << this->age << endl;
	}

	NameType name;
	AgeType age;
};

void test01()
{
	// 自动类型推导，类模板不支持
	Person<string, int> person("孙悟空", 100);
	person.show();
}


int main(int argc,const char* argv[])
{
	test01();
    return 0;
}

