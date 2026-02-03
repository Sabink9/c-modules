#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int     main(int ac , char **av)
{
	if (ac == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return 0;
	}
        int     i;
	int	j = 1;
        string  argument;
	string	line;
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
	return 0;
}
