 
#ifndef AANIMAL_H
# define AANIMAL_H

# include <iostream>
# include <string>
 
class AAnimal
{
protected:
	std::string	type;
 
public:
	AAnimal(void);
	AAnimal(AAnimal const & src);
	AAnimal&	operator=(AAnimal const & rhs);
	virtual ~AAnimal(void);

	AAnimal(std::string const & type);
 
	virtual	void	makeSound(void) const = 0;

	std::string	getType(void) const;
 
};
 
#endif

