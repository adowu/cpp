/***************************************************
@Email: wushaojun0107@gmail.com 
@Time: 一  2/ 1 16:12:59 2021
***************************************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	virtual void speak()
	{
		cout << "Speak Now" << endl;
	}
	// 普通析构，不会调用子类的析构，所以可能会导致释放不干净
	//virtual ~Animal()
	//{
	//	cout << "Animal 的析构函数" << endl;
	//}
	// 纯虚析构, 类内声明，类外实现
	virtual ~Animal() = 0;
};

Animal :: ~Animal()
{
	cout << "Aniaml 纯虚析构" << endl;
}

class Cat : public Animal
{
public:
	Cat(const char *name)
	{
		this->name = new char[strlen(name)+1];
		strcpy(this->name, name);
	}
	virtual void speak()
	{
		cout << "Cat Speak" << endl;
	}

	~Cat()
	{
		cout << "Cat 析构函数" << endl;
		if (this->name != NULL)
		{
			delete[] this->name;
			this->name = NULL;
		}
	}

	char *name;
};

void test01()
{
	Animal *animal = new Cat("Tom");
	animal->speak();
	delete animal;	
}

int main(int argc,const char* argv[])
{
	test01();
    return 0;
}
