
#include "Partie.h"
#include <cstdlib>
#include "COULEURS.h"
#include "string"

using namespace std;




void Partie::affichetab()
{
	system("clear");
	//system("cls");
	int i, j,X,Y,joueurcourant;
	char couleur[6];	
	//int *color = &joueur[0]->couleurjoueur;
	for (i = 0; i<5; i++) {
		for (j = 0; j<5; j++) {
			//||((i==J1.bat2->posX)&&(j==J1.bat2->posY)))   pour deux batisseurs
			sprintf(couleur,"%d",plateau[i][j][2]);
			if (plateau[i][j][1]==1) {
				if (joueur[joueuractif]->bat[joueur[joueuractif]->selectionbat]->posXY[0]==i && joueur[joueuractif]->bat[joueur[joueuractif]->selectionbat]->posXY[1]==j) {
					couleur("7;1");
					couleur(couleur);
					cout << " " << plateau[i][j][0] << " "; //ajouter la couleur du joueur avec le k et quand le pion se deplace il deplace aussi le ptr de sa couleur sur k=2 cout <<plateau[i][j][3]			
					couleur("0");
				}
				else {
					
					
					couleur(couleur);
					cout << " " << plateau[i][j][0] << " "; //ajouter la couleur du joueur avec le k et quand le pion se deplace il deplace aussi le ptr de sa couleur sur k=2 cout <<plateau[i][j][3]
					couleur("0");
				}
			}
			else {
				cout << " " << plateau[i][j][0] << " ";
			}
		}
		cout << endl;
	}
	


}

void Partie::findepartie(Partie *ptr)
	{
	delete  ptr;
	}
	
void Partie::joueursuivant() {
		joueuractif=((++joueuractif) % nbjoueur);
}

Partie::Partie() {
		system("clear");
		nbjoueur=1;
		while((2>nbjoueur)||(4<nbjoueur)){
		system("clear");
		cout<<"nombre de joueur qui joue ?(2-4)"<<endl;
		cin>>nbjoueur;
		cout<<nbjoueur<<endl;
		}
		joueuractif = 0;
		for (int i = 0; i < nbjoueur; i++) {
			joueur[i] = new Joueur();
			joueur[i]->couleurjoueur = 41+i;
			system("clear");
			cout<<"nom joueur "<<1+i<<":"<<endl;
			cin>>joueur[i]->nom;
		}
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				for (int k = 0; k < 3; k++) {
					plateau[j][i][k] = 0;
				}
			}
		}
	
}
	
	
Partie::~Partie()
	{
		delete[] *joueur;
	}




