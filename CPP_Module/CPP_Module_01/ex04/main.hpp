#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <fstream>
# include <string>

int		check_args(int argc, char **argv, std::string &filename, std::string &s1, std::string &s2);
int		open_files(std::ifstream &infile, std::ofstream &outfile, std::string filename);
void	sed(std::string s1, std::string s2, std::ifstream &infile, std::ofstream &outfile);

#endif