#include <iostream>
#include <string>
using namespace std;

class Printer
{
private:
	Printer(){}
	Printer(const Printer &p){}

	static Printer* singlePrinter;
	int count = 0;
public:
	static Printer* getInstance()
	{
		return singlePrinter;		
	}

	void printText(string text)
	{
		cout << text << endl;
		count++;
		cout << "printer called " << count << " times." << endl;
	}
};

Printer* Printer::singlePrinter = new Printer;


void test01()
{
	Printer *printer = Printer::getInstance();
	printer->printText("Yunna i love you forever!!!");
	printer->printText("Adonis loves Yunna forever!!!");
}
int main()
{
	test01();
	return 0;
}
