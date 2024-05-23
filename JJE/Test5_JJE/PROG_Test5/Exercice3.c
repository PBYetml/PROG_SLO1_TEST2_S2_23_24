
//Exercice 3 Test 2 Semestre 2

#define TITRE "TEST"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

void main()
{
	const char* pt_message = TITRE;						// pt_message prendra la valeur de TITRE qui est "TEST"
	const char tbMSG[] = { 0x53, 0x4C, 0x4F };			//--> voir la table ASCII "SLO"
	char tbMSGComplet[15];								// D�claration d'un tableau de 16 cases
	int annee = 2022;									// Initialisation de la variable ann�e � 2022
	char version = 0x33;								//--> voir la table ASCII "3"
	char anneeChaine[5];								// Stocke l'ann�e sous forme d'une uite de caract�res

	//... vos instructions
	tbMSGComplet[0] = '\0';								// Initialise "tbMSGComplet" en tant qu'une suite de caract�re vide
	
	strcpy(tbMSGComplet, pt_message);					// Copie la valeur de pt_message (TEST) dans la suite de caract�res "tbMSGComplet"

	int lenght = strlen(tbMSGComplet);					// Calcule la longueur de la suite de caract�re puis met cette valeur dans la variable "lenght"
	tbMSGComplet[lenght] = version;						// Met la valeur de la variable "version" � dans la case du tableau calcul�e par "lenght"
	tbMSGComplet[lenght + 1] = '\0';					// Rajoute un z�ra terminal pour terminer la suite de caract�re

	strcat(tbMSGComplet, " ");							// Ajoute un espace n�c�ssaire pour s�parer "TEST3" de "SLO2022"

	strncat(tbMSGComplet, tbMSG, 3);					// Ajoute le SLO en ajoutant aussi le z�ro terminal

	itoa(annee, anneeChaine, 10);						// Convertit "annee" en une cha�ne de caract�res puis la stocke dans le tableau "anneeChaine"
														// cr�e au pr�alable

	strcat(tbMSGComplet, anneeChaine);					// Ajoute l'ann�e � la fin de la suite de caract�res

	printf("%s \n", tbMSGComplet);						// Affiche le message complet

	return 0;
}