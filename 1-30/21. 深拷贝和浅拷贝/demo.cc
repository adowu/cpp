#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person()
	{
		
	}

	Person(char *name, int age)
	{
		// 这个是一个地址，会放到堆栈 0x7fe427c05930
		// error for object 0x7fe427c05930: pointer being freed was not allocated
		// Person person2(person1)
		// 当 person1 调用 析构函数的时候，释放了空间 0x7fe427c05930 
		// 当 person2 调用 析构函数的时候，再去释放这个空间 0x7fe427c05930 
		// 就会有如下的错误
		// error for object 0x7fe427c05930: pointer being freed was not allocated
		real_name = (char *) malloc(strlen(name)+1);
		strcpy(real_name, name);
		real_age = age;
	}
	// 深度构造拷贝
	Person(const Person &p)
	{
		cout << "deepcopy" << endl;
		real_name = (char *)malloc(strlen(p.real_name)+1);
		strcpy(real_name, p.real_name);
		real_age = p.real_age;
	}

	~Person()
	{
		cout << "析构函数" << endl;
		if (real_name != NULL)
		{
			free(real_name);
			real_name = NULL;
		}
	
	}

	char *real_name;
	int real_age;
};

void test01()
{
	Person person1("Edward", 18);
	// 调用拷贝构造
	Person person2(person1);

}


int main()
{
	test01();
	return 0;
}
