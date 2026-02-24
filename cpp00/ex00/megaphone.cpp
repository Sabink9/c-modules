#include <cctype>
#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	unsigned long		i;
	int		j;
	std::string	argument;
	std::string	line;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	j = 1;
	while (j < ac)
	{
		argument = av[j];
		i = 0;
		while (i < argument.length())
		{
			if (islower(argument[i]))
				argument[i] = toupper(argument[i]);
			i++;
		}
		line += argument;
		j++;
	}
	if (ac > 1)
		std::cout << line << std::endl;
	return (0);
}
