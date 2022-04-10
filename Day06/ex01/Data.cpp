 
#include "Data.hpp"
 
Data::Data(std::string schoolName, int numOfStudent, int yearsOfStudy)
	: _schoolName(schoolName), _numOfStudent(numOfStudent), _yearsOfStudy(yearsOfStudy)
{
}

void	Data::display(void) const
{
	std::cout << "The name of the school : " << this->_schoolName << std::endl;
	std::cout << "The number of students : " << this->_numOfStudent << std::endl;
	std::cout << "The years of study     : " << this->_yearsOfStudy << std::endl;
}
