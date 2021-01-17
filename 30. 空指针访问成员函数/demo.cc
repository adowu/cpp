#include <iostream>
#include <string>
using namespace std;


class Person
{
public:
	void show()
	{
		cout << "Person Show" << endl;	
	}

	void showAge()
	{
		// './out/demo.o' terminated by signal SIGSEGV (Address boundary error)
		cout << age << endl;
	}

	int age;
};

void test01()
{
	Person *p = NULL;
	p->show();
}


void test02()
{
	Person *p = NULL;
	p -> show();
	// './out/demo.o' terminated by signal SIGSEGV (Address boundary error)
	p -> showAge();

}
int main()
{
	test02();
	return 0;
}
