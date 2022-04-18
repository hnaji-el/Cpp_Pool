
#include "errorHandling.hpp"

bool    put_error(int errorNum)
{
    if (errorNum == 1)
        std::cerr << "The Number of argument should be four arguments" << std::endl;
    if (errorNum == 2)
        std::cerr << "Error: opening file fail" << std::endl;
    if (errorNum == 3)
        std::cerr << "Error: S1 and S2 should be NOT empty" << std::endl;
	if (errorNum == 4)
        std::cerr << "Error: Empty file" << std::endl;

    return (false);
}

bool    errorHandling(int argc, char **argv, std::ifstream& ifs, std::ofstream& ofs)
{
    std::string oldFilename;
    std::string newFilename;
    
    if (argc != 4)
        return (put_error(1));
    if (!(*argv[2]) || !(*argv[3]))
        return (put_error(3));

	oldFilename = argv[1];
    ifs.open(oldFilename);
    if (ifs.is_open() == false)
        return (put_error(2));
	if(ifs.peek() == EOF)
		return (put_error(4));

	newFilename = oldFilename + ".replace";
    ofs.open(newFilename);
    if (ifs.is_open() == false)
        return (put_error(2));

    return (true);
}

