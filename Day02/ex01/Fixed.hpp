 
#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>
 
class Fixed
{
private:
	int	_fixedPtVal;
	static int const _fracBits;
 
public:
	Fixed(void);
	Fixed(int const nbI);
	Fixed(float const nbF);
	~Fixed(void);
	Fixed(Fixed const & src);
 
	Fixed&	operator=(Fixed const & rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
 
	float	toFloat(void) const;
	int		toInt(void) const;
 
};

std::ostream&	operator<<(std::ostream& o, Fixed const & rhs);

#endif

