#pragma once
#ifndef COULEURS
#define COULEURS

#include <stdio.h>

// Efface l'�cran et replace le curseur en haut � gauche
#define clrscr() printf("\033[H\033[2J")

// S�lection de couleurs
#define couleur(param) printf("\033[%sm",param)
/*   param devant �tre un const char *, vide (identique � "0") ou form�
d'une o� plusieurs valeurs s�par�es par des ; parmi
0  r�initialisation         1  haute intensit� (des caract�res)
5  clignotement             7  video invers�
30, 31, 32, 33, 34, 35, 36, 37 couleur des caract�res
40, 41, 42, 43, 44, 45, 46, 47 couleur du fond
les couleurs, suivant la logique RGB, �tant respectivement
noir, rouge, vert, jaune, bleu, magenta, cyan et blanc */

#endif
