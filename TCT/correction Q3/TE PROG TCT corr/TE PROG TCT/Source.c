
/*
//Q1

//a)

strcpy(&tbValY[19], &tbValX);

//b)
recup = tbVar[9];

//c)

scanf_s("%f", &tbVarF[4]);

//Q2
//nous somme ici dans un .h

typedef union
{
		char start_bit;
		char datas;
		char parité;
		char stop_bit;
}u_RS232;

uint8_t envoi;
*/





//Q3
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
	char anneeChaine[5];								

	//... vos instructions
	tbMSGComplet[0] = '\0';		

	strcpy(tbMSGComplet, pt_message);

	int lenght = strlen(tbMSGComplet);	

	tbMSGComplet[lenght] = version;	

	tbMSGComplet[lenght + 1] = '\0';	

	strcat(tbMSGComplet, " ");		

	strncat(tbMSGComplet, tbMSG, 3);	

	itoa(annee, anneeChaine, 10);		

	strcat(tbMSGComplet, anneeChaine);	

	printf("%s \n", tbMSGComplet);	

	return 0;
}