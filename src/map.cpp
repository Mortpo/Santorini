#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "math.h"
#include "time.h"

using namespace std;
class Batisseur{

public:
	int posX, posY;
	int nvcase;
	int deplacement(int *X, int *Y);
	int construire(int X, int Y);
	Batisseur(int x,int y){
		posX=x;
		posY=y;
		nvcase=0;
	}
		
};

class Joueur{
public:
	string couleurjoueur;
	int selectionbat;
	int nombredebat;
	Batisseur *bat1;
	Batisseur *bat2;
	void batisseursuivant(int *selectionbat){
			selectionbat = &nombredebat;
			*selectionbat++;
			(*selectionbat % nombredebat);
	}

Joueur(string couleur){
	int i,j,x,y;
	couleurjoueur=couleur;
	nombredebat=2;
	cout<<"où voulez vous placer votre premier batisseur ?"<<endl;
	cout<<"ligne"<<endl;
	cin>>x;
	cout<<"colonne"<<endl;
	cin>>y;
	bat1= new Batisseur(x,y);
	system("clear");
	
	cout<<"où voulez vous placer votre deuxieme batisseur ?"<<endl;
	cout<<"ligne"<<endl;
	cin>>x;
	cout<<"colonne"<<endl;
	cin>>y;
	bat2= new Batisseur(x,y);
	system("clear");
}
	
};

int main(void){
    int plateau[5][5];
    int i,j,x,y,buffer,cas;
    bool parti=true;
    system("clear");

// initialisation joueur
	Joueur J1("rouge");

// initialisation joueur

// initialisation tableau 
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            plateau[j][i]=0;
            //||((i==J1.bat2->posX)&&(j==J1.bat2->posY)))   pour deux batisseurs
            if ((i==J1.bat1->posX)&&(j==J1.bat1->posY)){
				cout<<" "<<"P"<<" ";
			}
			else {
            cout<<" "<<plateau[j][i]<<" ";
			}
        }
        cout<<endl;
    }
// initialisation tableau

//debut parti
	while(parti==true){
		system("clear");
		for(i=0;i<5;i++){
			
			for(j=0;j<5;j++){
				//||((i==J1.bat2->posX)&&(j==J1.bat2->posY)))   pour deux batisseurs
				if ((i==J1.bat1->posX)&&(j==J1.bat1->posY)){
					cout<<" "<<"P"<<" ";
				}
				else {
				cout<<" "<<plateau[j][i]<<" ";
				}
		}
	cout<<endl;
    }
		x=J1.bat1->posX;
		y=J1.bat1->posY;
		cas=J1.bat1->nvcase;
		buffer=getchar();
		buffer=getchar();
		/*if(buffer==27){
			x=J1.bat1->posX;
			y=J1.bat1->posy;
			cas=J1.bat1->nvcase;
		}
		if(buffer==91){
			x=J1.bat2->posX;
			y=J1.bat2->posy;
			cas=J2.bat1->nvcase;
		}
		buffer=getchar();
		buffer=getchar();
		*/
		if((buffer==54)&&(y++<5)){
			cas=cas+2;
			if((x<4)&&((plateau[x][y])<cas)){
					J1.bat1->posY=y;
					J1.bat1->nvcase=cas;
					
					
			}
			
		//if(buffer==8){
			
}
//fin parti
}
}
