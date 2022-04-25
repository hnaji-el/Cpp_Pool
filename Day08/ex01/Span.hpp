 
#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <algorithm>
# include <stdexcept>
# include <vector>
 
class Span
{
private:
	std::vector<int>	_myvector;
	unsigned int		_N;
	/* Typedef's */
	typedef std::vector<int>::iterator	Iterator;
 
public:
	Span(void);
	Span(Span const & src);
	Span&	operator=(Span const & rhs);
	~Span(void);

	Span(unsigned int N);

	void	addNumber(int const nb);	/* Throw `std::out_of_range' */
	void	addNumbers(Iterator first, Iterator last);

	unsigned int	shortestSpan(void);	/* Throw `std::exception' */
	unsigned int	longestSpan(void);	/* Throw `std::exception' */
 
};
 
#endif

