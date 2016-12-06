#pragma once
#include "include.h"
#include <SFML\Graphics.hpp>
#include <SFML\Window.hpp>


class Fenetre
{

private :

	sf::RenderWindow m_fenetre;
	sf::Vector2u m_taille;
	string m_titre;

public:

	Fenetre();
	Fenetre(const sf::Vector2u &taille,const string &titre);
	~Fenetre();

	void creer(const sf::Vector2u &taille, const string& titre);
	void fermer();
	void gereEvenements();
	void dessiner(sf::Drawable &drawable);
	void supprimerContenu();

	sf::Vector2u getTaille();
	string getTitre();



};

