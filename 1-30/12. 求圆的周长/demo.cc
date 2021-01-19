#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
const double pi = 3.14;

class Circle
{
private:
    // 半径 
    int R;
public:
    // 求周长
    double getPerimeter()
    {
        return 2 * pi * R;
    }
    // 设置半径
    void setR(int r)
    {
        R = r;
    }
};

void test01()
{
    // 具体的对象
    Circle circle;
    circle.setR(10);
    double perimeter = circle.getPerimeter();
    cout << perimeter << endl;
}

int main()
{
    test01();
    return 0;
}