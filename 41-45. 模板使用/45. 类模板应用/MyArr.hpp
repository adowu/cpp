#pragma once
#include <iostream>
using namespace std;

template <class T>
class MyArray
{
public:
	// explicit 防止隐式类型转换 MyArray  arr = 10;
	explicit MyArray(int capacity)
	{
		this->capacity = capacity;
		this->size = 0;
		this->address = new T[this->capacity];
	}

	MyArray(const MyArray &array)
	{
		this->capacity = array.capacity;
		this->size = array.size;
		this->address = new T[this->capacity];
		for (int i = 0; i < this->size; i++)
		{
			this->address[i] = array[i];
		}
	}

	~MyArray()
	{
		if (this->address != NULL)
		{
			delete[] this->address;
			this->address = NULL;
		}
	}

	MyArray& operator=(MyArray & array)
	{
		if (this->address != NULL)
		{
			delete[] this->address;
			this->address = NULL;
		}
		this->capacity = array.capacity;
		this->size = array.size;
		this->address = new T[this->capacity];
		for (int i = 0; i < this->size; i++)
		{
			this->address[i] = array[i];
		}
	}

	T & operator[](int index)
	{
		return this->address[index];
	}

	void push(T value)
	{
		this->address[this->size] = value;
		this->size++;
	}

	int getSize()
	{
		return this->size;
	}
private:
	T *address;
	int capacity;
	int size;
};
