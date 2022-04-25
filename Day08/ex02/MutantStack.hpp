
#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <iostream>
# include <stack>
# include <deque>

template<class T,  class Container = std::deque<T> >
class MutantStack
{
private:
	std::stack<T, Container>	stack;

public:
	MutantStack(void) { }

	bool	empty(void) const
	{
		return (stack.empty());
	}
	typename std::stack<T>::size_type	size(void) const
	{
		return (stack.size());
	}
	typename std::stack<T>::value_type&	top(void)
	{
		return (stack.top());
	}
	typename std::stack<T>::value_type const &	top(void) const
	{
		return (stack.top());
	}
	void	push(typename std::stack<T>::value_type const & val)
	{
		stack.push(val);
	}
	void	pop(void)
	{
		stack.pop();
	}

};

#endif
