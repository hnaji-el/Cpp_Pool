 
#ifndef SPAN_H
# define SPAN_H

# include <vector>
 
class Span
{
private:
	std::vector<int>	myvector;
 
public:
	Span(void);
	Span(Span const & src);
	Span&	operator=(Span const & rhs);
	~Span(void);

	Span(unsigned int N);

	void	addNumber(int const nb);// Throw Exception
 
};
 
#endif

