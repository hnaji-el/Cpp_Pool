
#include "Harl.hpp"

Harl::Harl(void)
{
    std::cout << "Default constructor called" << std::endl;
}

Harl::~Harl(void)
{
    std::cout << "Destructor called" << std::endl;
}

void    Harl::debug(void)
{
	std::cout <<
		"I love having extra bacon for my 7XL-double-cheese-"
		"triple-pickle-special-ketchup burger. I really do!"
		<< std::endl;
}

void    Harl::info(void)
{
    std::cout <<
		"I cannot believe adding extra bacon costs more money. "
		"You didn’t put enough bacon in my burger! If you did, "
		"I wouldn’t be asking for more!"
		<< std::endl;
}

void    Harl::warning(void) 
{
    std::cout <<
		"I think I deserve to have some extra bacon for free. "
    	"I’ve been coming here for years and you just started "
    	"working here last month."
		<< std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
	void	(Harl::*arrayOfMemberFunPtr[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string	arrayOfStringLevel[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

    for (size_t index = 0; index < 4; index++)
    {
        if (level == arrayOfStringLevel[index])
            return ((this->*arrayOfMemberFunPtr[index])());
    }
}

