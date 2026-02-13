#include <cctype>
#include <iostream>
#include <string>

class	Rectangle
{
private:
	int longeur;
	int largeur;

public:
	Rectangle(int lon, int lar)
	{
		longeur = lon;
		largeur = lar;
	}

	int calculeAir()
	{
		return (longeur * largeur);
	}

	int calculePerim()
	{
		return (2 * (longeur + largeur));
	}

	void affiche()
	{
		std::cout << "longeur : " << longeur << " et largeur : " << largeur << std::endl;
	}
};

int	main()
{
	Rectangle rect(5, 3);

	rect.affiche();
	std::cout << "Aire : " << rect.calculeAir() << std::endl;
	std::cout << "Perimetre : " << rect.calculePerim() << std::endl;
}
