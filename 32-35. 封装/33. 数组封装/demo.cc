/********************************
@Email :  wushaojun0107@gmail.com
@Time  :  01-19 2021
********************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "array.h"
using namespace std;

void test01()
{
    Array *array1 = new Array(10);
    
	Array *array = new Array(*array1);
	
	delete array1;

	for(int i = 0;i < 10; ++i)
	{
		array->push(i);
	}

	for(int i = 0;i < 10; ++i)
	{
		cout << array->get(i) << endl;
	}
	
	for(int i = 0; i < 10; ++i)
	{	
		array->set(i, 10-i);
	}
	for(int i = 0; i < 10; ++i)
	{
		cout << array->get(i) << endl;
	}
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
