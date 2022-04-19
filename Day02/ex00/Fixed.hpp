 
#ifndef FIXED_H
# define FIXED_H

# include <iostream>
 
class Fixed
{
private:
	int	_fixedPtVal;
	static int const _fracBits;
 
public:
	Fixed(void);
	Fixed(Fixed const & src);
	Fixed&	operator=(Fixed const & rhs);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
 
};
 
#endif

