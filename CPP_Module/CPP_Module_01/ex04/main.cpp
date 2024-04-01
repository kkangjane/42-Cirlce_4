#include "main.hpp"

int	main(int argc, char **argv)
{
	std::string		filename;
	std::string		s1;
	std::string		s2;
	std::ifstream	infile;
	std::ofstream	outfile;

	if (argc != 4)
	{
		std::cerr << "Usage: ./sed <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	if (s1.empty())
	{
		std::cerr << "s1 is too short" << std::endl;
		return 1;
	}

	if (open_files(infile, outfile, filename))
		return 1;

	sed(s1, s2, infile, outfile);

	infile.close();
	outfile.close();

	return 0;
}
