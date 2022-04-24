 
#ifndef SPAN_H
# define SPAN_H

# include <algorithm>
# include <vector>
# include <stdexcept>
 
class Span
{
private:
	std::vector<int>	_myvector;
	unsigned int		_size;
 
public:
	Span(void);
	Span(Span const & src);
	Span&	operator=(Span const & rhs);
	~Span(void);

	Span(unsigned int N);

	void	addNumber(int const nb);	/* Throw `std::out_of_range' */

	unsigned int	shortestSpan(void);	/* Throw `std::exception' */
	unsigned int	longestSpan(void);	/* Throw `std::exception' */
 
};
 
#endif

