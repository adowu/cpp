/********************************
@Email :  wushaojun0107@gmail.com
@Time  :  01-19 2021
********************************/

#define _CRI_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
#include "array.h"

Array::Array()
{
    this->capacity = 100;
    this->size = 0;
    this->address = new int[this->capacity];
}

Array::Array(int capacity)
{
    this->capacity = capacity;
    this->size = 0;
    this->address = new int[this->capacity];
}

Array::Array(const Array &array)
{
	cout << "Copy in ..." << endl;
    this->address = new int[array.capacity];
    this->size = array.size;
    this->capacity = array.capacity;
    for (int i = 0; i < array.size; i++)
    {
        this->address[i] = array.address[i];
    }
	cout << "Copy finishing ... " << endl;
}

Array::~Array()
{
    if (this->address != NULL)
    {
		cout << "~Array doing ..." << endl;
        delete[] this->address;
        this->address = NULL;
    }
}

void Array::push(int number)
{
    this->address[this->size] = number;
    this->size++;
}

int Array::get(int index)
{
    return this->address[index];
}

void Array::set(int index, int number)
{
    this->address[index] = number;
}
