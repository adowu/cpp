/***************************************************
@Email: wushaojun0107@gmail.com 
@Time: 三  1/20 16:45:45 2021
***************************************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	// 改为虚函数
	virtual void speak()
	{
		cout << "Animal Speak" << endl;
	}
	virtual void eat()
	{
		cout << "Animal Eat" << endl;
	}
};

class Cat : public Animal
{
public:
	void speak()
	{
		cout << "Cat Speak" << endl;
	}

	void eat()
	{
		cout << "Cat Eat" << endl;
	}
};

// speak 函数的地址早就绑定好了，就是animal 的speak方法；早绑定，
// 即使传入的是 Cat 也是 Animal 的 speak 执行
// 如果想 传入什么就什么执行，那就不能提前绑定地址，需要在运行时候确定函数地址
// 这也就是 晚绑定，动态联编， 要将 doSpeak 改为 虚函数,在父类上声明虚函数，发生了多态; 子类可不改为 虚函数
// 父类的引用或指针 指向子类对象
// x下面方法就是 父类的引用
// Animal *animal = new Cat; 这就是 父类的指针指向子类对象
void doSpeak(Animal &animal)
{
	animal.speak();
}

// 继承关系，编译期允许进行类型转换
void test()
{
	Cat cat;
	doSpeak(cat);
}

void test02()
{
	// 不加 virtual 就是 1
	// 加了 virtual 就是 4/8
	cout << sizeof(Animal) << endl;
}

void test03()
{
	Animal *animal = new Cat;
	// 调用 cat speak 方法
	((void(*)()) (*(int *)*(int *)animal))();

	// 调用 cat eat 方法；
	((void(*)()) (*((int *)*(int *)animal+1)))();
}

int main(int argc,const char* argv[])
{
	test03();
    return 0;
}

