

#include "include.h"

using namespace std;

int main() {

	sf::Window fenetre(sf::VideoMode(640, 400), "howmifool");
	sf::Event event;

	while (fenetre.isOpen())
	{
		while (fenetre.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				fenetre.close();
			}
		}

	
	//boucler sur tout �a :
		//G�rer les �v�nements ext�rieurs
		//mettre � jour le jeu
		//supprimer le contenu de la fen�tre
		//dessiner dans la fen�tre

	}
	

	return 0;

}