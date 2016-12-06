#include "Fenetre.h"



Fenetre::Fenetre()
{
	m_fenetre.create();
}


Fenetre::Fenetre(const sf::Vector2u &taille,const string &titre)
{ 
	m_titre = titre;
	m_taille = taille;
	
}

Fenetre::~Fenetre()
{
	m_fenetre.close();
}

void Fenetre::creer(const sf::Vector2u &taille, const string& titre)
{
	m_fenetre.create(sf::VideoMode(taille.x,taille.y), titre);
}

void Fenetre::fermer()
{
	m_fenetre.close();
}

void Fenetre::gereEvenements()
{

	sf::Event event;

	while (m_fenetre.pollEvent(event))
	{
		if (event.type = sf::Event::Closed)
		{
			fermer();
		}

	}
}

void Fenetre::dessiner(sf::Drawable & drawable)
{
	m_fenetre.clear();
	m_fenetre.draw(drawable);

}

void Fenetre::supprimerContenu()
{
	m_fenetre.clear();
}

sf::Vector2u Fenetre::getTaille()
{
	return m_taille;
}

string Fenetre::getTitre()
{
	return m_titre;
}
