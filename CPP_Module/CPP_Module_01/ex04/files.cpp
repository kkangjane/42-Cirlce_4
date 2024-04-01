#include "files.hpp"

int	open_files(std::ifstream &infile, std::ofstream &outfile, std::string filename)
{
	std::string	newfile;

	infile.open(filename);
	if (infile.is_open() == 0)
	{
		std::cerr << "Cannot open " << filename << std::endl;
		return 1;
	}
	
	newfile = filename + ".replace";
	outfile.open(newfile);
	if (outfile.is_open() == 0)
	{
		infile.close();
		std::cerr << "Cannot open " << newfile << std::endl;
		return 1;
	}
	return 0;
}