 
#include "ShrubberyCreationForm.hpp"
 
ShrubberyCreationForm::ShrubberyCreationForm(void)
	: AForm("shrubberyCreation", 145, 137)
{
	std::cout << "Default constructor called <ShrubberyCreationForm>" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target)
	: AForm("shrubberyCreation", 145, 137), _target(target)
{
	std::cout << "Parameterized constructor called <ShrubberyCreationForm>" << std::endl;
}
 
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
	: AForm(src), _target(src.getTarget())
{
	std::cout << "Copy constructor called <ShrubberyCreationForm>" << std::endl;
}
 
ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	std::cout << "Copy assignment operator called <ShrubberyCreationForm>" << std::endl;
	AForm::operator=(rhs);
	return (*this);
}
 
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Destructor called <ShrubberyCreationForm>" << std::endl;
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void    ShrubberyCreationForm::formAction(void) const
{
	std::ofstream	streamObj;

	streamObj.exceptions(streamObj.badbit | streamObj.failbit);
	streamObj.open(this->_target + "_shrubbery");
	streamObj <<
		"                ,@@@@@@@,                   \n"
		"        ,,,.   ,@@@@@@/@@,  .oo8888o.       \n"
		"     ,&/%&%&&%,@@@@@/@@@@@@,8888/88/8o      \n"
		"    ,%&/%&&%&&%,@@@/@@@/@@@88/88888/88'     \n"
		"    %&&%&%&/%&&%@@/@@/ /@@@88888/88888'     \n"
		"    %&&%/ %&/%&&@@/ V /@@' `88/8 `/88'      \n"
		"    `&%/ ` /%&'    |.|        / '|8'        \n"
		"        |o|        | |         | |          \n"
		"        |.|        | |         | |          \n"
		" jgs /// ._///_/__/  ,/_//__///.  /_//__/_  \n";
	streamObj.close();
}

