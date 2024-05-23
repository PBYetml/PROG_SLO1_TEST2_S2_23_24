//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: 
// Date de création 	: 02.05.2024
// Date de modification : 
//
// Auteur 				: Etienne De Oliveira
//
// Description          : fichier source Test3 SLO
//----------------------------------------------------------------------------------//
//-- délcaration des libraires systèmes --// 
#include <stdio.h>				// lib standard pour les entrée sortie 
#include <stdint.h> 			// lib standard sur les entiers 
#include <string.h>
#pragma warning(disable : 4996)

#define TITRE "TEST"

void main()
{
	const char* pt_message = TITRE;
	const char tbMSG[] = { 0x53, 0x4C, 0x4F };
	char tbMSGComplet[15];
	int annee = 2024;
	char version = 0x33;
	char Chaine1[5];

	//Mes instructions

	tbMSGComplet[0] = '\0';

	strcpy(tbMSGComplet, TITRE);

	int lenght = strlen(tbMSGComplet);
	tbMSGComplet[lenght] = version;
	tbMSGComplet[lenght + 1] = '\0';

	strcat(tbMSGComplet, " ");

	strncat(tbMSGComplet, tbMSG, 3);
	itoa(annee, Chaine1, 10);

	strcat(tbMSGComplet, Chaine1);

	printf("%s \n", tbMSGComplet);

	return 0;
}