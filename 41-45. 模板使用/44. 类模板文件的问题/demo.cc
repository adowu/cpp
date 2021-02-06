/***************************************************
@Email: wushaojun0107@gmail.com 
@Time: 六  2/ 6 17:57:40 2021
***************************************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
// 这里直接 include Person.h 是有问题，可以引入 Person.cc 来解决
// #include "Person.h"
//#include "Person.cc"
// 更常见的做法是将类模板文件的后缀名改为 .hpp, 并把实现和模板文件放在一起
#include "Person.hpp"
using namespace std;


int main(int argc,const char* argv[])
{
	Person<string, int> person("猪八戒", 120);
	person.show();
    return 0;
}

