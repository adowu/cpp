#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Cube
{

private:

	int longth;
	int width;
	int hight;

public:

	void setLongth(int l)
	{
		longth = l;
	}
	
	int getLongth()
	{
		return longth;
	}
	
	void setWidth(int w)
    {   
        width = w;                                                                                                                                                 
    } 
	
	int getWidth()
    {
        return width;
    }
	
	void setHight(int h)
    {   
        hight = h;                                                                                                                                                 
    } 
	
	int getHight()
    {
        return hight;
    }

	int getArea()
	{
		return longth * width * hight;
	}
};


int main()
{
	Cube cube;
	cube.setLongth(10);
	cube.setWidth(11);
	cube.setHight(10);
	cout << "Area is : " << cube.getArea() << endl;

	return 0;
}
