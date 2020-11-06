#ifndef Partie_H_
#define Partie_H_
#include "iostream"
#include "Joueur.h"


class Partie {
public:
	int nbjoueur;
	int joueuractif;
	int plateau[5][5][3];
	void affichetab();
	Joueur* joueur[4];
	void findepartie(Partie *ptr);
	void joueursuivant();
	Partie();
	~Partie();
};

#endif
