
#ifndef ITER_H
# define ITER_H

# include <cstddef>

template<typename T>
void	iter(T*	array, size_t length, void (*ptrToFunction)(T const &))
{
	for (size_t i = 0; i < length; i++)
	{
		ptrToFunction(array[i]);
	}
}

#endif
