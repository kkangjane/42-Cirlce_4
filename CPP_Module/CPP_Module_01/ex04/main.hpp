#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <fstream>
# include <string>

int	err_msg(const std::string msg);
int	open_infile(char *av, std::ifstream &infile);
int	open_outfile(char *av, std::ofstream &outfile);
int	check_args(int argc, char **argv, std::string &s1, std::string &s2);

#endif