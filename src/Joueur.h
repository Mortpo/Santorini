#ifndef Joueur_H_
#define Joueur_H_
#include "Batisseur.h"
#include "string"

class Joueur{
public:
	std::string nom;
	int couleurjoueur;
	int selectionbat;
	int nombredebat;
	Batisseur *bat[2];
	void batisseursuivant();
	Joueur();
	~Joueur();
};

#endif
