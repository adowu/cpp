/***************************************************
@Email: wushaojun0107@gmail.com 
@Time: 六  2/ 6 17:47:30 2021
***************************************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "MyArr.hpp"
using namespace std;




int main(int argc,const char* argv[])
{
	MyArray<int> array(10);
	for (int i = 0; i < 10; i++)
	{
		array.push(i);
	}
	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
    return 0;
}

