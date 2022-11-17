#pragma once

template <typename T> class Array
{
private:
	unsigned _length;
	T* _data;
public:
	Array(unsigned length);
	~Array();
	Array(Array& a);
	size_t getLength();
	void setElement(T value, int index);
	T getElement(int index);
};
