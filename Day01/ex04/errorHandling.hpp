
#ifndef ERRORHANDLING_H
# define ERRORHANDLING_H

# include <iostream>
# include <fstream>
# include <string>

bool    errorHandling(int argc, char **argv, std::ifstream& ifs, std::ofstream& ofs);
std::string getNewFilename(std::string oldFilename);
bool    put_error(int errorNum);

#endif
