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
	const char tbMSG[] = { 0x53, 0x4C, 0x4F};
	char tbMSGComplet[15];
	int annee = 2022;
	int8_t version = 0x33;
	char Chaine1[10];

	
	//printf("avant copie =%s \n", pt_message);
	strcpy(Chaine1, &tbMSG[0]);
	printf("apres copie = %s \n", Chaine1);

	strcat(Chaine1, pt_message);
	printf("strcat = % s \n", Chaine1);
}