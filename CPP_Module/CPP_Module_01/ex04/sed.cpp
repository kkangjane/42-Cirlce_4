#include "sed.hpp"

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