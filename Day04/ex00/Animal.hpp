 
#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>
 
class Animal
{
protected:
	std::string	type;
 
public:
	Animal(void);
	Animal(Animal const & src);
	Animal&	operator=(Animal const & rhs);
	virtual ~Animal(void);

	Animal(std::string const & type);
 
	virtual	void	makeSound(void) const;

	std::string	getType(void) const;
 
};
 
#endif

