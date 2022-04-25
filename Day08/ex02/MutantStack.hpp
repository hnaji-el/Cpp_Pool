
#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <iostream>
# include <stack>
# include <deque>
# include <vector>
# include <list>

template<class T,  class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	MutantStack(void) : std::stack<T, Container>(Container())
	{
	}
	MutantStack(MutantStack const & src)
	{
		this->c = src.c;
	}
	MutantStack& operator=(MutantStack const & rhs)
	{
		this->c = rhs.c;
		return (*this);
	}
	~MutantStack(void)
	{
	}

	explicit MutantStack(Container const & cntr) : std::stack<T, Container>(cntr)
	{
	}

	typedef typename Container::iterator				iterator;
	typedef typename Container::const_iterator			const_iterator;
	typedef typename Container::reverse_iterator		reverse_iterator;
	typedef typename Container::const_reverse_iterator	const_reverse_iterator;

	iterator	begin(void)
	{
		return (this->c.begin());
	}
	const_iterator	begin(void) const
	{
		return (this->c.begin());
	}

	iterator	end(void)
	{
		return (this->c.end());
	}
	const_iterator	end(void) const
	{
		return (this->c.end());
	}

	reverse_iterator	rbegin(void)
	{
		return (this->c.rbegin());
	}
	const_reverse_iterator	rbegin(void) const
	{
		return (this->c.rbegin());
	}

	reverse_iterator	rend(void)
	{
		return (this->c.rend());
	}
	const_reverse_iterator	rend(void) const
	{
		return (this->c.rend());
	}

};

#endif

