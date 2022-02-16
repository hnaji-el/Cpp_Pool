 
#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"
 
class Cat : public Animal
{
private:
	Brain*	_brain;

public:
	Cat(void);
	Cat(Cat const & src);
	Cat&	operator=(Cat const & rhs);
	virtual ~Cat(void);
 
	void	makeSound(void) const;

	Brain*	getBrain(void) const;
 
};
 
#endif

