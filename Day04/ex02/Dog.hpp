 
#ifndef DOG_H
# define DOG_H

# include "AAnimal.hpp"
# include "Brain.hpp"
 
class Dog : public AAnimal
{
private:
	Brain*	_brain;

public:
	Dog(void);
	Dog(Dog const & src);
	Dog&	operator=(Dog const & rhs);
	virtual ~Dog(void);
 
	void	makeSound(void) const;

	Brain*	getBrain(void) const;
 
};
 
#endif

