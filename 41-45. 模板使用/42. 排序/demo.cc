/***************************************************
@Email: wushaojun0107@gmail.com 
@Time: 六  2/ 6 17:21:16 2021
***************************************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

template<class T>

void mySort(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			T temp = arr[max];
			arr[max] = arr[i];
			arr[i] = temp;
		}
	}
}

template<class T>
void printArr(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01()
{
	char charArr[] = "helloworld";
	int length = sizeof(charArr) / sizeof(char);
	mySort(charArr, length);
	printArr(charArr, length);

	int intArr[] = {1, 4, 100, 34, 55};
	length = sizeof(intArr) / sizeof(int);
	mySort(intArr, length);
	printArr(intArr, length);
}

int main(int argc,const char* argv[])
{
	test01();
    return 0;
}

