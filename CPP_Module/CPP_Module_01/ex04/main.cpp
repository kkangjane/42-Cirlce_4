#include "main.hpp"

int		check_args(int argc, std::string &s1);
int		open_files(std::ifstream &infile, std::ofstream &outfile, std::string filename);
void	sed(std::string s1, std::string s2, std::ifstream &infile, std::ofstream &outfile);

int	main(int argc, char **argv)
{
	std::string		filename;
	std::string		s1;
	std::string		s2;
	std::ifstream	infile;
	std::ofstream	outfile;

	if (check_args(argc, s1))
		return 1;

	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	if (open_files(infile, outfile, filename))
		return 1;

	sed(s1, s2, infile, outfile);

	infile.close();
	outfile.close();

	return 0;
}

void	sed(std::string s1, std::string s2, std::ifstream &infile, std::ofstream &outfile)
{
	std::string	buf;
	size_t		cur;
	size_t		pos;
	size_t		s1_len = s1.length();
	size_t		s2_len = s2.length();

	while (std::getline(infile, buf))
	{
		cur = 0;
		while (true)
		{
			pos = buf.find(s1, cur);
			if (pos == std::string::npos)
				break ;
			buf = buf.erase(pos, s1_len);
			buf.insert(pos, s2);
			cur = pos + s2_len;
		}
		outfile << buf;
		if (infile.eof())
			break ;
		outfile << std::endl;
	}
}

int	check_args(int argc, std::string &s1)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./sed <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	if (!s1.empty())
	{
		std::cerr << "s1 is too short" << std::endl;
		return 1;
	}

	return 0;
}

int	open_files(std::ifstream &infile, std::ofstream &outfile, std::string filename)
{
	std::string	newfile;

	infile.open(filename);
	if (infile.is_open() == 0)
	{
		std::cerr << "Cannot open " << filename << std::endl;
		return 1;
	}
	
	newfile = filename;
	newfile.append(".replace");
	outfile.open(newfile);
	if (outfile.is_open() == 0)
	{
		infile.close();
		std::cerr << "Cannot open " << newfile << std::endl;
		return 1;
	}
	return 0;
}

