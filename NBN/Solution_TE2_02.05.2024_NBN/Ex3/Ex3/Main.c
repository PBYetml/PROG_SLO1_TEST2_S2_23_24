/////////////////////////
//Ex3				   //
//NBN				   //
/////////////////////////

#include <stdio.h> // pour printf
#include <string.h> // pour strcat

#define TITRE "TEST"

void main()
{
	const char* pt_message = TITRE;
	const char tbMSG[] = { 0x53,0x4c,0x4f };	//S,L,O
	char tbMSGCopmlet[15];
	int année = 2022;
	int version = 0x33;							// 3

	// Mes instruction
	const char* MSG2 = TITRE;
	char tb_Annee[4] = {0,0,0,0};
	char Version = itoa(version);
	char totverif;
	short longueur = 0;

	// Remplir le tableau avec les chiffres du nombre, en partant de la fin
	for (int i = 3; i >= 0; i--)
	{
		tb_Annee[i] = année % 10;
		année /= 10;

	}

	totverif = strcat(MSG2, Version, tbMSG, tb_Annee);

	longueur = strlen(totverif);

	if (longueur > 15)
	{

	}
	else
	{
		strcpy(tbMSGCopmlet,  totverif);
	}
	printf("%s", tbMSGCopmlet);

	// pas pu tester car sur le O









}