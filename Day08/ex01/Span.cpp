
#include "Span.hpp"

Span::Span(void) : _N(0)
{
}

Span::Span(unsigned int N) : _N(N)
{
	this->_myvector.reserve(N);
}

Span::Span(Span const & src) : _myvector(src._myvector), _N(src._N)
{
}

Span&	Span::operator=(Span const & rhs)
{
	this->_myvector = rhs._myvector;
	this->_N = rhs._N;
	return (*this);
}

Span::~Span(void)
{
}

void	Span::addNumber(int const nb)
{
	if (this->_myvector.size() >= this->_N)
		throw std::out_of_range("Out of Range error");
	this->_myvector.insert(this->_myvector.end(), nb);
}

void	Span::addNumbers(Iterator first, Iterator last)
{
	size_t	freePos;
	size_t	range;

	freePos = this->_N - this->_myvector.size();
	range = std::distance(first, last);
	if (freePos < range)
		throw std::out_of_range("Out of Range error");
	this->_myvector.insert(this->_myvector.end(), first, last);
}

unsigned int	Span::shortestSpan(void)
{
	unsigned int		shortestS;
	unsigned int		result;
	std::vector<int>	copy = this->_myvector;

	if (this->_myvector.size() <= 1)
		throw std::exception();

	std::sort(copy.begin(), copy.end());
	shortestS = copy[1] - copy[0];
	for (unsigned int i = 2; i < this->_myvector.size(); i++)
	{
		result = copy[i] - copy[i - 1];
		if (result < shortestS)
			shortestS = result;
	}
	return (shortestS);
}

unsigned int	Span::longestSpan(void)
{
	unsigned int	longestS;
	Iterator		first = this->_myvector.begin();
	Iterator		last = this->_myvector.end();

	if (this->_myvector.size() <= 1)
		throw std::exception();

	longestS = *std::max_element(first, last) - *std::min_element(first, last);
	return (longestS);
}

