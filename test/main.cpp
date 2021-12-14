
#include <iostream>

class Sample
{
private:
	int		_var;

public:
	int		var;

	Sample(void) : var(1337), _var(77)
	{
		std::cout << "Constructor called" << std::endl;
		return ;
	}

	~Sample(void)
	{
		std::cout << "Destructor called" << std::endl;
		return ;
	}

	void	Bar(void) const
	{
		std::cout << "Bar function called" << std::endl;
		return ;
	}
};

int	main(void)
{
	Sample	inst;
	Sample	*instp = &inst;
	void	(Sample::*fptr)(void) const;

	fptr = &Sample::Bar;
	(inst.*fptr)();
	return (0);
}
