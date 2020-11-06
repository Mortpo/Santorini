// JeuTP.cpp : Définit le point d'entrée pour l'application console.
//

//#include "stdafx.h"
#include <iostream>
#include "string"
#include "Partie.h"
#include "unistd.h"
#include <fstream>
#include <cstdlib>
#include "COULEURS.h"

using namespace std;

int main()
{
	
		int choix,i,DEBUT=0,FIN=11,page=0;
	string lecture;
	bool menu=true;
	system("clear");
	cout<<"============================"<<"\n\n"<<endl;
	couleur("36;1");
	cout<<"         SANTORINI"<<"\n\n"<<endl;
	couleur("0");
	cout<<"============================"<<endl;
	sleep(2);
	system("clear");
	cout<<"============================"<<endl;
	cout<<"jeu inspiré d'un jeu de\nplateau.\ncrée par ANQUETIN,PARROD."<<"\n"<<endl;
	cout<<"============================"<<endl;
	sleep(2);
	system("clear");
	while (menu==true){
	system("clear");
	cout<<"============================"<<"\n"<<endl;
	cout<<"          -Jouer(1)\n          -Regles(2)\n          -quitter(3)"<<"\n"<<endl;
	cout<<"============================"<<endl;
	cin>>choix;
	if (choix==1)
		menu=false;
	if (choix==2){
		ifstream fichier("regles.txt");
		while(choix==2){
			page++;
			system("clear");
			for (i=DEBUT;i<FIN;i++){
				getline(fichier,lecture);
				cout<<lecture<<endl;
			}
			
			if(page<3){
			cout<<"\n<-retour(1)              ->suite(2)"<<endl;
			cin>>choix;
			DEBUT=DEBUT+10;
			FIN=FIN+10;
			}
			else{
				cout<<"\n<-retour(1)"<<endl;
				cin>>choix;
				choix=0;
				page=0;
			}
			if(choix==1)
				page=0; 
			
	
	}
	
	}
	if(choix==3){
		system("clear");
		return 0;
		
	}
}
	Partie *partie;
	int retour;
	partie=new Partie();
		for (int u = 0; u < 2; u++) {
			for (int j = 0; j < partie->nbjoueur; j++) {
				partie->affichetab();
				cout << "C'est le tour du joueur :" << partie->joueur[j]->nom << endl;
				partie->joueur[j]->bat[u]->placementstart(partie->plateau, partie->joueur[j]->couleurjoueur);
			}
		}
	
		while (1) {
		partie->affichetab();
		cout << "C'est le tour du joueur :" << partie->joueur[partie->joueuractif]->nom <<endl<<"deplacement : "<< endl;
		
		retour=partie->joueur[partie->joueuractif]->bat[partie->joueur[partie->joueuractif]->selectionbat]->deplacement(partie->plateau, partie->joueur[partie->joueuractif]->couleurjoueur);
		partie->affichetab();
		if (retour == 5){
			partie->joueur[partie->joueuractif]->batisseursuivant();

		}
		else {
			if (retour == 2) {
				system("clear");
				cout << " joueur " << partie->joueur[partie->joueuractif]->nom << " gagne" << endl;
				return 0;
			}
			else {
				partie->joueur[partie->joueuractif]->bat[partie->joueur[partie->joueuractif]->selectionbat]->construire(partie->plateau);
				partie->joueursuivant();
			}
		}


	}
	/*cout << partie->winner << endl;
	partie->joueur[1]->couleurjoueur = 5;
	cout << partie->joueur[0]->couleurjoueur << endl;
	cout << partie->joueur[1]->couleurjoueur << endl;
	cout << partie->joueur[1]->bat[0]->nvcase << endl;
	partie->joueur[1]->bat[1]->nvcase = 45;
	cout << partie->joueur[1]->bat[1]->nvcase << endl;*/
	delete  partie;
	return 0;
	//system("PAUSE");
}

