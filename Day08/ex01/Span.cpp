 
#include "Span.hpp"
 
Span::Span(void)
{
}
 
Span::Span(unsigned int N) 
{
	this->myvector.reserve(N);
}

Span::Span(Span const & src) : myvector(src.myvector)
{
}
 
Span&	Span::operator=(Span const & rhs)
{
	this->myvector = rhs.myvector;
	return (*this);
}

Span::~Span(void)
{
}

void	Span::addNumber(int const nb)
{
	static size_t	index;

	if (:
	this->myvector[index] = nb;
	index++;
}
 
