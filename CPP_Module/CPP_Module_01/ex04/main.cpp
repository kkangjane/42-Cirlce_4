#include "main.hpp"

int	main(int argc, char **argv)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		buf;
	std::string		s1;
	std::string		s2;

	int				cur;
	int				pos;
	int				buf_len;

	if (check_args(argc, argv, s1, s2))
		return (1);
	if (open_infile(argv[1], infile))
		return (1);
	if (open_outfile(argv[1], outfile))
	{
		infile.close();
		return (1);
	}

	while (std::getline(infile, buf))
	{
		buf_len = buf.length();
		cur = 0;
		while (1)
		{
			pos = buf.find(s1, cur);
			if (pos >= buf_len || pos < 0) // 이제 buf에 s1 없음
				break ;
			buf = buf.erase(pos, s1.length());
			buf.insert(pos, s2);
			cur = pos + s2.length();
		}
		outfile.write(buf.c_str(), buf.length());
		if (infile.eof())
			break ;
		outfile << std::endl;
	}
	infile.close();
	outfile.close();
	return (0);
}

int	err_msg(const std::string msg)
{
	std::cout << msg << std::endl;
	return (1);
}

int	open_infile(char *av, std::ifstream &infile)
{
	std::string	filename;

	filename = av;
	infile.open(filename);
	if (infile.is_open() == 0)
		return (err_msg("cannot open original file"));
	return (0);
}

int	open_outfile(char *av, std::ofstream &outfile)
{
	std::string	filename;

	filename = av;
	filename.append(".replace");
	outfile.open(filename);
	if (outfile.is_open() == 0)
		return (err_msg("cannot open new file"));
	return (0);
}

int	check_args(int argc, char **argv, std::string &s1, std::string &s2)
{
	if (argc != 4)
		return (err_msg("the number of arguments is wrong"));
	
	s1 = argv[2];
	s2 = argv[3];
	
	if (s1.length() == 0)
		return (err_msg("s1 is too short"));
	return (0);
}
