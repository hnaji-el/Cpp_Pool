
#include "Span.hpp"

Span::Span(void) : _size(0)
{
}

Span::Span(unsigned int N) : _size(0)
{
	this->_myvector.reserve(N);
}

Span::Span(Span const & src) : _myvector(src._myvector)
{
}

Span&	Span::operator=(Span const & rhs)
{
	this->_myvector = rhs._myvector;
	return (*this);
}

Span::~Span(void)
{
}

void	Span::addNumber(int const nb)
{
	if (this->_size >= this->_myvector.capacity())
	{
		throw std::out_of_range("Out of Range error");
	}
	this->_myvector[this->_size] = nb;
	this->_size++;
}

unsigned int	Span::shortestSpan(void)
{
	unsigned int	shortestS;

	if (this->_size <= 1)
	{
		throw std::exception();
	}
	std::vector<int>	copy = this->_myvector;
	std::sort(copy.begin(), last.end());
	for (shortestS = 0; 
}

unsigned int	Span::longestSpan(void);
{
	unsigned int				longestS;
	std::vector<int>::iterator	first = this->_myvector.begin();
	std::vector<int>::iterator	last = this->_myvector.end();

	if (this->_size <= 1)
	{
		throw std::exception();
	}
	longestS = *std::max_element(first, last) - *std::min_element(first, last);
	return (longestS);
}



























