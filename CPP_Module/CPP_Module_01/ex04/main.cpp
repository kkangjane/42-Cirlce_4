#include "main.hpp"

int	main(int argc, char **argv)
{
	std::string		filename;
	std::string		s1;
	std::string		s2;
	std::ifstream	infile;
	std::ofstream	outfile;

	if (check_args(argc, argv, filename, s1, s2))
		return 1;
	if (open_files(infile, outfile, filename))
		return 1;
	
	sed(s1, s2, infile, outfile);

	return 0;
}

void	sed(std::string s1, std::string s2, std::ifstream &infile, std::ofstream &outfile)
{
	std::string	buf;
	int			cur;
	int			pos;
	int			buf_len;
	int			s1_len = s1.length();
	int			s2_len = s2.length();

	while (std::getline(infile, buf))
	{
		buf_len = buf.length();
		cur = 0;
		while (true)
		{
			pos = buf.find(s1, cur); // cur부터 s1을 찾아서 index를 pos에 넣는다.
			if (!(pos >= 0 && pos < buf_len))
				break ;
			buf = buf.erase(pos, s1_len); // s1을 지운다.
			buf.insert(pos, s2); // 그 자리에 s2를 넣는다.
			cur = pos + s2_len;
		}
		outfile.write(buf.c_str(), buf.length());
		if (infile.eof())
			break ;
		outfile << std::endl;
	}
	
	infile.close();
	outfile.close();
}

int	check_args(int argc, char **argv, std::string &filename, std::string &s1, std::string &s2)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./sed <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	
	filename = argv[1];
	
	s1 = argv[2];
	if (s1[0] == 0)
	{
		std::cerr << "s1 is too short" << std::endl;
		return 1;
	}
	s2 = argv[3];
	
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

