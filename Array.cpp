#include <iostream>
#include "Array.h"

template <typename T> Array<T>::Array(unsigned length)
{
	_length = length;
	_data = new T [_length];
}
template <typename T> Array<T>::~Array()
{
	delete [] _data;
}
template <typename T> Array<T>::Array(Array& other)
{
	_length = other._length;
	_data = T[_length];
	for (auto i = 0; i < _length; i++)
	{
		_data[i] = other._data[i];
	}
}
template <typename T> size_t Array<T>::getLength()
{
	return _length;
}
template <typename T> void Array<T>::setElement(T value, int index)
{
	if (index >= 0 && index < _length)
	{
		_data[index] = value;
	}
}
template <typename T> T Array<T>::getElement(int index)
{
	if (index >= 0 && index < _length)
	{
		return _data[index];
	}
}
