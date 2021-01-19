/********************************
@Email :  wushaojun0107@gmail.com
@Time  :  01-19 2021
********************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class News
{
public:
    void head()
    {
        cout << "Head" << endl;
    }
    void footer()
    {
        cout << "Footer" << endl;
    }
    void left()
    {
        cout << "Left" << endl;
    }
    void content()
    {
        cout << "Content" << endl;
    }
};
class Entertainment
{
public:
    void head()
    {
        cout << "Head" << endl;
    }
    void footer()
    {
        cout << "Footer" << endl;
    }
    void left()
    {
        cout << "Left" << endl;
    }
    void content()
    {
        cout << "Entertainment Content" << endl;
    }
};

void test01()
{
    News news;
    news.head();
    news.footer();
    news.left();
    news.content();
    Entertainment entertainment;
    entertainment.head();
    entertainment.footer();
    entertainment.left();
    entertainment.content(); 
}

int main(int argc, char const *argv[])
{
    test01();
    return 0;
}
