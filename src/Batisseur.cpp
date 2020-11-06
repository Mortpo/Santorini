//#include "stdafx.h"
#include "Batisseur.h"

using namespace std;


int Batisseur::deplacement(int plateau[5][5][3], int couleur)
{
	int  x, y,i,j;
	std::string buffer;
	bool bouge = false;
	x = posXY[0];
	y = posXY[1];
	i = posXY[0];
	j = posXY[1];
	while (bouge == false) {
		cin>>buffer;
		if ((buffer == "6") && (y<4) && (plateau[i][j++][0]-nvcase<2) && (plateau[i][j][1] == 0)) {
			plateau[x][y][1] = 0;
			plateau[x][y][2] = 0;
			posXY[1] =++ y;
			nvcase = plateau[x][y][0];
			plateau[x][y][1] = 1;
			plateau[x][y][2] = couleur;
			bouge = true;
		}
		j = posXY[1];
		if ((buffer == "4") && (y>0)  && ((plateau[i][--j][0]) - nvcase<2) && (plateau[i][j][1] == 0)) {
			plateau[x][y][1] = 0;
			plateau[x][y][2] = 0;
			posXY[1] = --y;
			nvcase = plateau[x][y][0];
			plateau[x][y][1] = 1;
			plateau[x][y][2] = couleur;
			bouge = true;
		}
		j = posXY[1];
		if ((buffer == "8") && (x>0) && ((plateau[--i][j][0]) - nvcase<2) && (plateau[i][j][1] == 0)) {
			plateau[x][y][1] = 0;
			plateau[x][y][2] = 0;
			posXY[0] = --x;
			nvcase = plateau[x][y][0];
			plateau[x][y][1] = 1;
			plateau[x][y][2] = couleur;
			bouge = true;
		}
		i = posXY[0];
		if ((buffer == "2") && (x<4) && ((plateau[++i][j][0]) - nvcase<2) && (plateau[i][j][1] == 0)) {
			plateau[x][y][1] = 0;
			plateau[x][y][2] = 0;
			posXY[0] = ++x;
			nvcase = plateau[x][y][0];
			plateau[x][y][1] = 1;
			plateau[x][y][2] = couleur;
			bouge = true;
		}
		i = posXY[0];
		if ((buffer == "1") && (y>0) && (x<4) && ((plateau[++i][--j][0]) - nvcase<2) && (plateau[i][j][1] == 0)) {
			plateau[x][y][1] = 0;
			plateau[x][y][2] = 0;
			posXY[0] = ++ x;
			posXY[1] = -- y;
			nvcase = plateau[x][y][0];
			plateau[x][y][1] = 1;
			plateau[x][y][2] = couleur;
			bouge = true;
		}
		i = posXY[0];
		j = posXY[1];
		if ((buffer == "3") && (y<4) && (x<4) && ((plateau[++i][++j][0]) - nvcase<2) && (plateau[i][j][1] == 0)) {
			plateau[x][y][1] = 0;
			plateau[x][y][2] = 0;
			posXY[0] = ++x; 
			posXY[1] = ++y;
			nvcase = plateau[x][y][0];
			plateau[x][y][1] = 1;
			plateau[x][y][2] = couleur;
			bouge = true;
		}
		i = posXY[0];
		j = posXY[1];
		if ((buffer == "7") && (y>0) && (x>0) && ((plateau[--i][--j][0]) - nvcase<2) && (plateau[i][j][1] == 0)) {
			plateau[x][y][1] = 0;
			plateau[x][y][2] = 0;
			posXY[0] =-- x;
			posXY[1] =-- y;
			nvcase = plateau[x][y][0];
			plateau[x][y][1] = 1;
			plateau[x][y][2] = couleur;
			bouge = true;
		}
		i = posXY[0];
		j = posXY[1];
		if ((buffer == "9") && (y<4) && (x>0) && ((plateau[--i][++j][0]) - nvcase<2) && (plateau[i][j][1] == 0)) {
			plateau[x][y][1] = 0;
			plateau[x][y][2] = 0;
			posXY[0] = --x;
			posXY[1] = ++y;
			nvcase = plateau[x][y][0];
			plateau[x][y][1] = 1;
			plateau[x][y][2] = couleur;
			bouge = true;
		}
		i = posXY[0];
		j = posXY[1];
		if ((buffer == "5") ) {
			return 5;
		}
		if (nvcase == 3) {
			return 2;
		}
		if (buffer == "3€") {
			return 2;
		}
	}
	return 1;
	}

int Batisseur::construire(int plateau[5][5][3])
{
		
	int buffer, x, y,i,j;
	bool construit = false;
	x=posXY[0];
	y=posXY[1];
	cout << "construis" << endl;
	while (construit == false) {
		cin >> buffer;
		i = posXY[0];
		j = posXY[1];
		if ((buffer == 6) && (y < 4) && ((plateau[i][++j][0]) < 4) && (plateau[i][j][1] == 0)){
			plateau[x][++y][0] ++;
			construit = true;
		}
		j = posXY[1];
		if ((buffer == 4) && (y>0) && ((plateau[i][--j][0]) < 4) && (plateau[i][j][1] == 0)) {
			plateau[x][--y][0]  ++;
			construit = true;
		}
		j = posXY[1];
		if ((buffer == 8) && (x>0) && ((plateau[--i][j][0]) < 4) && (plateau[i][j][1] == 0)) {
			plateau[--x][y][0] ++;
			construit = true;
		}
		i = posXY[0];
		if ((buffer == 2) && (x<4) && ((plateau[++i][j][0]) < 4) && (plateau[i][j][1] == 0)) {
			plateau[++x][y][0] ++;
			construit = true;
		}
		i = posXY[0];
		if ((buffer == 1) && (y>0) && (x<4) && ((plateau[++i][--j][0]) < 4) && (plateau[i][j][1] == 0)) {
			plateau[++x][--y][0]  ++;
			construit = true;
		}
		i = posXY[0];
		j = posXY[1];
		if ((buffer == 3) && (y<4) && (x<4) && ((plateau[++i][++j][0])< 4) && (plateau[i][j][1] == 0)) {
			plateau[++x][++y][0]  ++;
			construit = true;
		}
		i = posXY[0];
		j = posXY[1];
		if ((buffer == 7) && (y>0) && (x>0) && ((plateau[--i][--j][0]) < 4) && (plateau[i][j][1] == 0)) {
			plateau[--x][--y][0]  ++;
			construit = true;
		}
		i = posXY[0];
		j = posXY[1];
		if ((buffer == 9) && (y<4) && (x>0) && ((plateau[--i][++j][0]) < 4) && (plateau[i][j][1] == 0)) {
			plateau[--x][++y][0]  ++;
			construit = true;
		}

	}
	return 0;
}


void Batisseur::placementstart(int plateau[5][5][3],int couleur) {
	int x,y;
	bool good=false;
	while (good == false) {
		cout << "ou voulez vous placer votre batisseur ?" << endl;
		cout << "ligne" << endl;
		cin >> x;
		cout << "colonne" << endl;
		cin >> y;
		if ((plateau[--x][--y][1] == 0) && (++x>0 && x<6) && (++y>0 && y<6)) 
		{
			x--;
			y--;
			plateau[x][y][1] = 1;
			posXY[0] = x;
			posXY[1] = y;
			plateau[x][y][2] = couleur;
			good = true;
		}
		else
		{
			cout << "placement incorecte" << endl;
		}
	}

}

Batisseur::Batisseur() 
{
		nvcase = 0;
		posXY[0]=-66;
		posXY[1]=-66;
}

Batisseur::~Batisseur(){}
