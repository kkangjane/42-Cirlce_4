#include <iostream>

void	transform(char *str);

int	main(int argc, char **argv)
{
	int	i;

	if (argc <= 1)
	{
		std::cout << "** nothing to make some noise **" << std::endl;
		return (0);
	}
	i = 1;
	while (i < argc)
		transform(argv[i++]);
	std::cout << std::endl;
	return (0);
}

void	transform(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		std::cout << static_cast<char>(std::toupper(str[i++]));
}
