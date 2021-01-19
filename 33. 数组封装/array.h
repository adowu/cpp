/********************************
@Email :  wushaojun0107@gmail.com
@Time  :  01-19 2021
********************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream> 
#include <string>
using namespace std;


class Array
{
public:
    Array();
    Array(int capacity);
    Array(const Array &array);
    ~Array();

    void push(int number);
    int get(int index);
    void set(int index, int number);
    
private:
    int *address;
    int size;
    int capacity;
};
