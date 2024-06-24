#include <stdio.h>
#include "main.h"
#include <stdint.h>
//var glo 

void main(void)
{


	/*Exercice 2*/
	//var 
	char tbValx[NBCASES] = { 1,1,1,1,1,1,1,1,1 };
	char	tbValy[50] = { 0 };
	char tbVar[10] = { 0,1,2,3,4,5,6,7,8,9 };
	char recup = 0;
	float tbVarF[NBCASES] = { 1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9 };
	char errCode;
	
	//Index= nbcases-1
	/*
	for (char i = 0; i < NBCASES; i++)
	{

		tbValy[(i + 20)-1] = tbValx[i];
	}
	*/
	strcpy(&tbValy[19], &tbValx[0]);
	printf("%s", tbValy);

	
	recup = tbVar[NBCASES-1];


	errCode=scanf("%f", &tbVarF[(5 - 1)]);
	if (errCode)
	{
		printf("%f", tbVarF[4]);
	}
	
	printf("%d", recup);



	/*Exercice3*/
	//var 
	const char* pt_message = TITRE;
	const char  tbMSG[] = {0x53,0x4C,0x4F};
	char tbMSGCOmplet[15] = {0};

	int annee = 2022;
	int8_t version = 0x33;

	//instructions
	strcpy(tbMSGCOmplet, TITRE);
	printf("LAAAAAAAAAAAAAA %s", tbMSGCOmplet);
	tbMSGCOmplet[10] = tbMSGCOmplet[5];
	tbMSGCOmplet[4] = (char)version; 
	tbMSGCOmplet[5] = 0x20;//' '
	//tbMSGCOmplet[6] = '\0 ';

	//printf("LAAAAAAAAAAAAAA %s", tbMSGCOmplet);

	for (char i = 6; i < 9; i++)
	{
		tbMSGCOmplet[i] = tbMSG[i - 6];

	}
	


	itoa(annee, &tbMSGCOmplet[9], 10);

	printf("finnaly: %s", tbMSGCOmplet);
	

}