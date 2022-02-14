 
#ifndef BRAIN_H
# define BRAIN_H
 
class Brain
{
private:
	std::string	ideas[100];
 
public:
	Brain(void);
	Brain(Brain const & src);
	Brain&	operator=(Brain const & rhs);
	~Brain(void);

	void	setIdeas(std::string const & ideas);
	std::string	getIdeas(void) const;
 
};
 
#endif

