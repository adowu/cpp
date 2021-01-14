#include <iostream>
using namespace std;
#include <string>

class Person
{

private:
	string name = "Edward";
	int age;

public:
	string getName()
	{
		return name;
	}

	void setAge(int a)
	{
		age = a;
	}

	int getAge()
	{
		return age;
	}
};


int main()
{
	Person p;
	cout << p.getName() << endl;
	p.setAge(18);
	cout << p.getAge() << endl;

	return 0;
}
