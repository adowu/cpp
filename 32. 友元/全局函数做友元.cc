/********************************
@Email :  wushaojun0107@gmail.com
@Time  :  01-19 2021
********************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Building
{
    // 全局函数写到 类声明中， 前面加关键字 friend
    friend void goodFriend(Building *building);
public:
    Building()
    {
        this->sittingRoom = "客厅";
        this->bedRoom = "卧室";
    }
    string sittingRoom;

private:
    string bedRoom;
};

void goodFriend(Building *building)
{
    cout << "friend accessing: " << building->sittingRoom << endl; 
    // 函数声明为 friend 之后 就可以访问 private 属性了
    cout << "friend accessing: " << building->bedRoom << endl;
}

void test01()
{
    Building *building = new Building;
    goodFriend(building);
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
