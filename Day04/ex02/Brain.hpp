 
#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>
# include <string>
 
class Brain
{
private:
	std::string	ideas[100];
 
public:
	Brain(void);
	Brain(Brain const & src);
	Brain&	operator=(Brain const & rhs);
	~Brain(void);

};
 
#endif

