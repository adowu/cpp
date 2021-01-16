#include <iostream>
using namespace std;

class Person
{

public:

	//Person(){}

	/*Person(int x, int y, int z)
	{	
		a = x;
		b = y;
		c = z;
	}*/

	Person(int x, int y, int z): a(x), b(y), c(z){}
	
	// 建议用有参数的形式构造
	Person(): a(10), b(11), c(12){}

	int a;
	int b;
	int c;
};

void test01()
{
	Person person(11, 12, 13);
	cout << person.a << ":" << person.b << ":" << person.c << endl;

	Person p;
	cout << p.a << ":" << p.b << ":" << p.c << endl;
}

int main()
{
	test01();
	return 0;
}
