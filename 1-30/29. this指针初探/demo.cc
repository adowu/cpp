#include <iostream>
#include <string>
using namespace std;

// this 指针指向被调用的成员函数所属的对象
// 非静态成员才有 this 指针

class Person
{
public:
	Person(int age)
	{
		// 直接age = age无法区分
		this -> age = age;
	}

	void compare(Person &person)
	{
		if (this -> age == person.age)
		{
			cout << "equal" << endl;
		}
		else
		{
			cout << "not equal" << endl;
		}
	}
	// 函数返回 引用的时候 可以作为左值
	Person& add(Person *person)
	{
		this->age += person->age;
		// *this 指向对象本体
		return *this;
	}
	int age;
};

void test01()
{
	Person person(18);
	cout << person.age << endl;
	Person p2(18);
	person.compare(p2);

	Person p3(10);
	person.add(&p3).add(&p3).add(&p3);
	cout << person.age << endl;
}

int main()
{
	test01();
	return 0;
}
