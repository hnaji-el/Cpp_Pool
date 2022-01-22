
#include <iostream>

class Sample
{
private:
	int	_var;

public:
	Sample(void);
	Sample(int nb);
	~Sample(void);

	int		getVar(void) const;

	Sample&	operator=(Sample const & rhs);
	Sample	operator+(Sample const & rhs) const;

};

Sample::Sample(void) : _var(0)
{
	std::cout << "Constructor called" << std::endl;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
}

Sample::Sample(int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->_var = nb;
}

int		Sample::getVar(void) const
{
	return (this->_var);
}

Sample	Sample::operator+(Sample const & rhs) const
{
	std::cout << "Additional operator called" << std::endl;
	Sample	copy(this->_var + rhs.getVar());
	return (copy);
}

Sample&	Sample::operator=(Sample const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_var = rhs.getVar();
	return (*this);
}

int main(void)
{
	Sample	a;
	Sample	b(11);

	a = a + b;// a.operator+(b);
	std::cout << "a is : " << a.getVar() << std::endl;
	return (0);
}













