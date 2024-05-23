
//Exercice 3 Test 2 Semestre 2

#define TITRE "TEST"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

void main()
{
	const char* pt_message = TITRE;						// pt_message prendra la valeur de TITRE qui est "TEST"
	const char tbMSG[] = { 0x53, 0x4C, 0x4F };			//--> voir la table ASCII "SLO"
	char tbMSGComplet[15];								// Déclaration d'un tableau de 16 cases
	int annee = 2022;									// Initialisation de la variable année à 2022
	char version = 0x33;								//--> voir la table ASCII "3"
	char anneeChaine[5];								// Stocke l'année sous forme d'une uite de caractères

	//... vos instructions
	tbMSGComplet[0] = '\0';								// Initialise "tbMSGComplet" en tant qu'une suite de caractère vide
	
	strcpy(tbMSGComplet, pt_message);					// Copie la valeur de pt_message (TEST) dans la suite de caractères "tbMSGComplet"

	int lenght = strlen(tbMSGComplet);					// Calcule la longueur de la suite de caractère puis met cette valeur dans la variable "lenght"
	tbMSGComplet[lenght] = version;						// Met la valeur de la variable "version" à dans la case du tableau calculée par "lenght"
	tbMSGComplet[lenght + 1] = '\0';					// Rajoute un zèra terminal pour terminer la suite de caractère

	strcat(tbMSGComplet, " ");							// Ajoute un espace nécéssaire pour séparer "TEST3" de "SLO2022"

	strncat(tbMSGComplet, tbMSG, 3);					// Ajoute le SLO en ajoutant aussi le zéro terminal

	itoa(annee, anneeChaine, 10);						// Convertit "annee" en une chaîne de caractères puis la stocke dans le tableau "anneeChaine"
														// crée au préalable

	strcat(tbMSGComplet, anneeChaine);					// Ajoute l'année à la fin de la suite de caractères

	printf("%s \n", tbMSGComplet);						// Affiche le message complet

	return 0;
}