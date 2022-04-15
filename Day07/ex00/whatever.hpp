
#ifndef WHATEVER_H
# define WHATEVER_H

template<typename T>
void	swap(T& arg1, T& arg2)
{
	T	tempObj;

	tempObj = arg1;
	arg1 = arg2;
	arg2 = tempObj;
}

template<typename T>
T const &	min(T const & arg1, T const & arg2)
{
	return (arg1 < arg2 ? arg1 : arg2);
}

template<typename T>
T const &	max(T const & arg1, T const & arg2)
{
	return (arg1 > arg2 ? arg1 : arg2);
}

#endif
