 
#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>
# include <string>
 
class WrongAnimal
{
protected:
	std::string	type;
 
public:
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const & src);
	WrongAnimal&	operator=(WrongAnimal const & rhs);
	~WrongAnimal(void);

	WrongAnimal(std::string const & type);
 
	void	makeSound(void) const;

	std::string	getType(void) const;
 
};
 
#endif

