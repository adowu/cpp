#include <iostream>
#include <string>
using namespace std;

class Phone
{
public:
	Phone()
	{
		cout << "Phone Default" << endl;
	}

	Phone(string name)
	{
		name = name;
	}

	~Phone()
	{
		cout << "Phone ~" << endl;
	}

	string name;
};

class Game
{
public:
	Game()
	{
        cout << "Game Default" << endl;
	}
    Game(string name)
    {   
		name = name;  
    }   

    ~Game()
    {   
        cout << "Game ~" << endl;
    }

	string name;                                                                                                                                            
};

class Person
{
public:
	Person()
	{
		cout << "Person default" << endl;
	}

	Person(string name)
	{
		name = name;
	}

	~Person()
	{
		cout << "Person ~" << endl;
	}
	
	string name;
	Phone phone;
	Game game;
};

void test01()
{
	/*
		Phone Default
		Game Default
		Person default
		Person ~
		Game ~
		Phone ~
	*/
	Person person;
}

int main()
{
	test01();
	return 0;
}

