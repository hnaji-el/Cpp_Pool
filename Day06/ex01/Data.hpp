 
#ifndef DATA_H
# define DATA_H

# include <iostream>
# include <string>
 
class Data
{
private:
	std::string	_schoolName;
	int			_numOfStudent;
	int			_yearsOfStudy;

public:
	Data(std::string schoolName, int numOfStudent, int yearsOfStudy);

	void	display(void) const;
 
};
 
#endif

