/********************************
@Email :  wushaojun0107@gmail.com
@Time  :  01-19 2021
********************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
using namespace std;
#include "String.h"

ostream& operator<< (ostream&cout, String &str)
{
    // 由于pointer 是private 的 需要把这个函数设置为友元
    cout << str.pointer;
    return cout;
}
istream& operator>> (istream&cin, String &str)
{
    if (str.pointer != NULL)
    {
        delete[] str.pointer;
        str.pointer = NULL;
    }

    // 用户输入的内容
    char buffer[1024];
    cin >> buffer;
    
    str.size = strlen(buffer);
    str.pointer = new char[str.size + 1];
    strcpy(str.pointer, buffer);
    
    return cin;
}
String::String(const char *s)
{
    cout << "Default" << endl;
    this->size = strlen(s);
    this->pointer = new char[this->size + 1];
    strcpy(this->pointer, s);
}

String::String(const String &s)
{
    cout << "Copy" << endl;
    this->size = s.size;
    this->pointer = new char[this->size + 1];
    strcpy(this->pointer, s.pointer);
}

String::~String()
{
    if (this->pointer != NULL)
    {
        cout << "~String" << endl;
        delete[] this->pointer;
        this->pointer = NULL;
    }
}