//#include "stdafx.h"
#include "Joueur.h"


void Joueur::batisseursuivant(){
		selectionbat= ((++selectionbat) % nombredebat);
}

Joueur::Joueur(){
	nombredebat = 2;
	selectionbat = 0;
	for (int i = 0; i <nombredebat;i++) {
		bat[i] = new Batisseur();
	}
}

Joueur::~Joueur()
{
	delete[] *bat;

}





