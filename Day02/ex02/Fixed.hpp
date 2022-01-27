 
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
	Fixed(Fixed const & src);
	~Fixed(void);
 
	float	toFloat(void) const;
	int		toInt(void) const;
 
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	static Fixed&	min(Fixed& val1, Fixed& val2);
	static Fixed const & min(Fixed const & val1, Fixed const & val2);
	static Fixed&	max(Fixed& val1, Fixed& val2);
	static Fixed const & max(Fixed const & val1, Fixed const & val2);
 
	Fixed&	operator=(Fixed const & rhs);

	Fixed	operator+(Fixed const & rhs) const;
	Fixed	operator-(Fixed const & rhs) const;
	Fixed	operator*(Fixed const & rhs) const;
	Fixed	operator/(Fixed const & rhs) const;

	Fixed&	operator++(void);
	Fixed	operator++(int);
	Fixed&	operator--(void);
	Fixed	operator--(int);

	bool	operator>(Fixed const & rhs) const;
	bool	operator>=(Fixed const & rhs) const;
	bool	operator<(Fixed const & rhs) const;
	bool	operator<=(Fixed const & rhs) const;
	bool	operator==(Fixed const & rhs) const;
	bool	operator!=(Fixed const & rhs) const;

};

std::ostream&	operator<<(std::ostream& o, Fixed const & rhs);

#endif

