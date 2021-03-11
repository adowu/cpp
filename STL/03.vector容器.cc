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

void test03()
{
	vector<int> v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	cout << v.capacity() << endl;
	cout << v.size() << endl;

	v.resize(3);
	cout << v.capacity() << endl;
	cout << v.size() << endl;
	// 巧用 swap
	vector<int>(v).swap(v);
	cout << v.capacity() << endl;
	cout << v.size() << endl;
}

void test04()
{
	vector<int> v;
	int *p = NULL;
	int num = 0;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			// 因为随着size变大，vector会改变自己在内存中的位置，首地址就会变
			p = &v[0];
			num++;
		}
	}
	cout << num << endl;
}
void test05()
{
	vector<int> v;
	v.reserve(100000);
	int *p = NULL;
	int num = 0;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			// 直接预留了 100000 个空间 就不会一直开闭新的空间
			p = &v[0];
			num++;
		}
	}
	cout << num << endl;
}

void test06()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(4);
	v.push_back(5);

	cout << v.front() << endl;
	cout << *v.begin() << endl;

	cout << v.back() << endl;
}

void test07()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(4);
	v.push_back(5);
	// 迭代器 N个数 具体插入的内容
	v.insert(v.begin(), 1, 2);
	printVector(v);

	v.pop_back();
	printVector(v);

	v.erase(v.begin());
	printVector(v);

	v.erase(v.begin(), v.end());
	printVector(v);

	v.clear();
	printVector(v);
}

void test08()
{
	// 逆序遍历
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	printVector(v);

	for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	// vector 迭代器是随机访问的，支持跳跃式访问
	vector<int>::iterator itBegin = v.begin();
	itBegin = itBegin + 3;
	cout << *itBegin << endl;

}
int main(int argc, const char *argv[])
{
	test08();
	return 0;
}
