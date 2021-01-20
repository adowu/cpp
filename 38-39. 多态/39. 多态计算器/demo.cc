/***************************************************
@Email: wushaojun0107@gmail.com 
@Time: 三  1/20 17:34:12 2021
***************************************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Calculator
{
public:
	void setVal1(int val)
	{
		this->val1 = val;
	}

	void setVal2(int val)
	{
		this->val2 = val;
	}

	int getResult(string oper)
	{
		if (oper == "+")
		{
			return this->val1 + this->val2;
		}
		else if (oper == "-")
		{
			return this->val1 - this->val2;
		}
	}

private:
	int val1;
	int val2;
};

void test01()
{
	Calculator cal;
	cal.setVal1(10);
	cal.setVal2(20);
	cout << cal.getResult("+") << endl;
}

int main(int argc,const char* argv[])
{
	test01();
    return 0;
}

