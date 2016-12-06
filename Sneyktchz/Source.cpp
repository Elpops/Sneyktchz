

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

	
	//boucler sur tout ça :
		//Gérer les évènements extérieurs
		//mettre à jour le jeu
		//supprimer le contenu de la fenêtre
		//dessiner dans la fenêtre

	}
	

	return 0;

}