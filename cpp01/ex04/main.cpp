#include <fstream>
#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "ac !=4" << std::endl;
		return 1;
	}
	std::string filename = av[1];
	std::string s1       = av[2];
	std::string s2       = av[3];
	
	if (s1.empty())
    	{
        	std::cout << "Erreur : s1 ne peut pas être vide" << std::endl;
        	return (1);
    	}
	std::ifstream infile(filename);
	if (!infile.is_open())
	{
		   std::cout << "Erreur : impossible d'ouvrir le fichier" << std::endl;
		    return (1);
	}
	 std::ofstream outfile(filename + ".replace");
    	if (!outfile.is_open())
    	{
        	std::cout << "Erreur : impossible de créer le fichier" << std::endl;
		return (1);
    	}
	std::string line;
	size_t pos;

	while (std::getline(infile, line))
	{
		while ((pos = line.find(s1)) != std::string::npos)
        		line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
 		outfile << line << "\n";
	}
	return 0;
}