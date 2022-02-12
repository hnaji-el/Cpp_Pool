 
#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
 
class Dog : public Animal
{
public:
	Dog(void);
	Dog(Dog const & src);
	Dog&	operator=(Dog const & rhs);
	~Dog(void);
 
	void	makeSound(void) const;
 
};
 
#endif

