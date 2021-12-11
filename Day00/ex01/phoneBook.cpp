
#include "ClassPhonebook.hpp"

int	main(void)
{
	Contact		contact[8];
	PhoneBook	phBook(contact);
	std::string	str;

	while (1)
	{
		std::getline(std::cin, str);
		if (str.compare("ADD") == 0)
			phBook.addCmd();
		else if (str.compare("SEARCH") == 0)
			phBook.searchCmd();
		else if (str.compare("EXIT") == 0)
			break ;
	}
	return (0);
}
