
#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>

template<typename T>
class Array
{
private:
	T*		_array;
	size_t	_length;

public:
	Array(void) : _array(NULL), _length(0)
	{
	}

	Array(unsigned int n) : _array(new T[n]), _length(n)
	{
	}

	Array(Array const & src) : _array(NULL), _length(src.size())
	{ 
		if (this->_length != 0)
			this->_array = new T[this->_length];
		for (size_t i = 0; i < this->_length; i++) {
			this->_array[i] = src[i];
		}
	}

	Array&	operator=(Array const & rhs)
	{
		delete [] _array;
		this->_array = NULL;
		this->_length = rhs.size();
		if (this->_length != 0)
			this->_array = new T[this->_length];
		for (size_t i = 0; i < this->_length; i++)
		{
			this->_array[i] = rhs[i];
		}
		return (*this);
	}

	~Array(void)
	{
		delete [] _array;
	}

	size_t	size(void) const
	{
		return (this->_length);
	}

	T&	operator[](size_t index)
	{
		if (index >= this->_length)
		{
			throw std::exception();
		}
		return (this->_array[index]);
	}

	T const & operator[](size_t index) const
	{
		if (index >= this->_length)
		{
			throw std::exception();
		}
		return (this->_array[index]);
	}

};

#endif

