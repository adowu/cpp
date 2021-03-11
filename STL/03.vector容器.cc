/***************************************************
@Email: wushaojun0107@gmail.com 
@Time: 四  3/11 10:11:08 2021
***************************************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
		cout << v[i] << endl;
		cout << v.capacity() << endl;
	}
}


void printVector(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
// api
void test02()
{
	vector<int> v;
	int arr[] = {2, 3, 4, 1, 9};
	vector<int> v1(arr, arr + sizeof(arr) / sizeof(int));
	printVector(v1);
	vector<int> v2(v1.begin(), v1.end());
	printVector(v2);

	vector<int> v3(10, 21);
	printVector(v3);

	vector<int> v4;
	v4.assign(v3.begin(), v3.end());
	printVector(v4);

	v4.swap(v2);
	printVector(v4);
	printVector(v2);

	cout << v4.size() << endl;

	if (v4.empty())
	{
		cout << "NULL" << endl;
	}
	else
	{
		cout << "NOT" << endl;
	}
	
	v4.resize(10);
	printVector(v4);

	v1.resize(10, -1);
	printVector(v1);

	v1.resize(5);
	printVector(v1);
}

int main(int argc, const char *argv[])
{
	test02();
	return 0;
}
