
#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void    Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout <<
		"I love having extra bacon for my 7XL-double-cheese-"
		"triple-pickle-special-ketchup burger. I really do!"
		<< std::endl;
}

void    Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
    std::cout <<
		"I cannot believe adding extra bacon costs more money. "
		"You didn’t put enough bacon in my burger! If you did, "
		"I wouldn’t be asking for more!"
		<< std::endl;
}

void    Harl::warning(void) 
{
	std::cout << "[ WARNING ]" << std::endl;
    std::cout <<
		"I think I deserve to have some extra bacon for free. "
    	"I’ve been coming here for years and you just started "
    	"working here last month."
		<< std::endl;
}

void    Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

int		Harl::hashStringLevel(std::string level)
{
	std::string	arrayOfStringLevel[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

    for (int index = 0; index < 4; index++)
    {
        if (level == arrayOfStringLevel[index])
			return (index);
    }
	return (-1);
}

void    Harl::complain(std::string level)
{
    switch (hashStringLevel(level))
    {
        case 0:
            this->debug();
        case 1:
            this->info();
        case 2:
            this->warning();
        case 3:
            this->error();
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

