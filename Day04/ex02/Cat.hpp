 
#ifndef CAT_H
# define CAT_H

# include "AAnimal.hpp"
# include "Brain.hpp"
 
class Cat : public AAnimal
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

