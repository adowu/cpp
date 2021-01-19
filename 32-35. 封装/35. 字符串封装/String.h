/********************************
@Email :  wushaojun0107@gmail.com
@Time  :  01-19 2021
********************************/
#pragma once
#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class String
{
    friend ostream &operator<<(ostream &cout, String &str);
    friend istream &operator>>(istream &cin, String &str);

public:
    String(const char *);
    String(const String &str);
    ~String();

private:
    char *pointer;
    int size;
};