#ifndef Batisseur_H_
#define Batisseur_H_
#include "iostream"
#include "string"
class Batisseur{

public:
	int posXY[2];
	int nvcase;
	int deplacement(int plateau[5][5][3],int couleur);
	int construire(int plateau[5][5][3]);
	void placementstart(int plateau[5][5][3],int couleur);
	Batisseur();
	~Batisseur();
};


#endif
