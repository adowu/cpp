/***************************************************
@Email: wushaojun0107@gmail.com 
@Time: 二  2/ 9 16:22:01 2021
***************************************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

void test01()
{
	string str;

	string str2(str);
	string str3 = str;

	string str4 = "abcd";

	string str5(10, 'a');

	cout << str5 << endl;

	// 基本赋值
	str = "Hello";
	str3.assign("abcdef", 4);
	cout << str3 << endl;
}

int main(int argc,const char* argv[])
{
	test01();
    return 0;
}

