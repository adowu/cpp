/***************************************************
@Email: wushaojun0107@gmail.com 
@Time: 二  2/ 9 15:36:40 2021
***************************************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;



// 迭代器
void test01()
{
	int array[5] = {1,2,3,4,5};
	int *p = array;
	for(int i = 0; i < 5; ++i)
	{
		cout << *(p++) << endl;
	}
	
}

// 容器 vector
void test02()
{
	vector<int> v;
	v.push_back(15);
	v.push_back(12);
	v.push_back(11);
	v.push_back(20);

	vector<int>::iterator begin = v.begin();
	// 容器最后一个位置的下一个位置
	vector<int>::iterator end = v.end(); 
	
	while (begin != end){
		cout << *begin << endl;
		begin++;
	}
}

void test03()
{
	vector<int> v;
    v.push_back(12);
    v.push_back(14);
    v.push_back(12);
    v.push_back(22);

	for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		// *it 表示的就是 vector<int> 这个尖括号里面的内容
		cout << *it << endl;
	}	
}

void myPrint(int v)
{
	cout << v << endl;
}

void test04()
{
	vector<int> v;
	v.push_back(11);
	v.push_back(11);
	v.push_back(11);
	v.push_back(11);
	v.push_back(11);
	// algorithm 中的方法
	for_each(v.begin(), v.end(), myPrint);
}


int main(int argc,const char* argv[])
{
	test04();
    return 0;
}

