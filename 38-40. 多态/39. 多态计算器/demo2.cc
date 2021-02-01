/***************************************************
@Email: wushaojun0107@gmail.com 
@Time: 三  1/20 17:44:10 2021
***************************************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;


class BaseCalculator
{
public:
	virtual int getResult(){return 0;};
	// 纯虚函数 子类必须要实现 这个方法
	// virtual int getResult() = 0;
	// 如果父类中有纯虚函数，这个父类就无法实例化对象
	// 这个类有纯虚函数，那么这个类又称为  抽象类
	
	void setLeft(int value){this->left = value;};
	void setRight(int value){this->right = value;};

	int left;
	int right;
};

class PlusCalculator : public BaseCalculator
{
public:
	virtual int getResult()
	{
		return this->left + this->right;
	}
};

class SubCalculator : public BaseCalculator
{
public:
	virtual int getResult()
	{
		return this->left - this->right;
	}
};

void test01()
{
	BaseCalculator *cal;
	cal = new PlusCalculator;
	cal->setLeft(10);
	cal->setRight(20);
	cout << cal->getResult() << endl;

	delete cal;

	cal = new SubCalculator;
	cal->setLeft(25);
	cal->setRight(13);
	cout << cal->getResult() << endl;
}
int main(int argc,const char* argv[])
{
	test01();
    return 0;
}

