#include <cctype>
#include <iostream>
#include <string>

using namespace	std;

int	main(int ac, char **av)
{
	unsigned long		i;
	int		j;
	string	argument;
	string	line;

	if (ac == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
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
		cout << line << endl;
	return (0);
}
