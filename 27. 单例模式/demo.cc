#include <iostream>
#include <string>
using namespace std;

//一个类中，只能实例一个对象，单例模式
// 单例模式案例
class Person
{
private:
	// 1. 默认构造私有化
	Person()
	{
		cout << "Create Person Default" << endl;
	}
	// 2. 拷贝函数私有化, 不让通过 拷贝构造 创建新的对象
	Person(const Person &p){}

	// 3. 私有化的目的是，不让外部直接删除操作对象
	static Person *singlePerson;
// 提供外部访问方法
public:
	
	// 4. 提供外部访问方法
	static Person* getInstance()
	{
		return singlePerson;
	}
};
// 5. 外部初始化（不能在方法内初始化）
Person *Person::singlePerson = new Person;

void test01()
{
	//	Create Person Default
	//	Main use ...
	// Person 先与 Main 调用	
	// 这两个 都是同一个对象
	//Person *p1 = Person::singlePerson;
	Person *p1 = Person::getInstance();
	Person *p2 = Person::getInstance();

	if (p1 == p2)
	{
		cout << "single" << endl;
	}
	else
	{
		cout << "no single" << endl;
	}
	// 这两个是不同的，调用了拷贝构造，私有化之后，就不能这样初始化了；
	Person *p3 = new Person(*p2);
	if (p3 == p2)
	{
		cout << "Two Single" << endl;
	}
	else
	{
		cout << "Two no single" << endl;
	}
}

int main()
{

	cout << "Main use ..." << endl;
	test01();
	return 0;
}
