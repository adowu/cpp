/********************************
@Email :  wushaojun0107@gmail.com
@Time  :  01-19 2021
********************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Building;
class GoodFriend
{
public:
    GoodFriend();
    void visit();
    void friendVisit();

    string sittingRoom;

private:
    Building *building;
};

class Building
{
    friend void GoodFriend::friendVisit();

public:
    Building()
    {
        this->bedRoom = "卧室";
        this->sittingRoom = "客厅";
    }
    string sittingRoom;

private:
    string bedRoom;
};

GoodFriend::GoodFriend()
{
    building = new Building;
}

void GoodFriend::visit()
{
    cout << "friend accessing: " << this->building->sittingRoom << endl;
    // error: 'bedRoom' is a private member of 'Building
    // cout << "friend accessing: " << this->building->bedRoom << endl;
}
void GoodFriend::friendVisit()
{
    cout << "friend accessing: " << this->building->sittingRoom << endl;
    cout << "friend accessing: " << this->building->bedRoom << endl;
}

void test01()
{
    GoodFriend goodFriend;
    goodFriend.friendVisit();
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
