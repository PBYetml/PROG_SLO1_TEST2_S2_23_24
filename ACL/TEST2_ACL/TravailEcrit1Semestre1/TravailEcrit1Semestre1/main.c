#include <stdio.h>
#include "main.h"
#include <stdint.h>
//var glo 

void main(void)
{


	/*Exercice 2*/
	//var 
	char tbValx[nbCases1] = { 0 };
	int	tbValy[50] = { 0 };
	char tbVar[10] = { 0,1,2,3,4,5,6,7,8,9 };
	char recup = 0;
	float tbVarF[nbCases1] = { 1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9 };
	char errCode;

	//Index= nbcases-1
	for (char i = 0; i < nbCases1; i++)
	{

		tbValy[(i + 20)-1] = tbValy[i];
	}
	
	recup = tbVar[nbCases1-1];


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
	char tbMSGCOmplet[15];

	char tbMSGCOmpletcpy[4];
	int annee = 2022;
	int8_t version = 0x33;

	//instructions
	
	
	strcpy(tbMSGCOmplet, TITRE);
	tbMSGCOmplet[4] = (char)version;
	for (char i = 5; i < strlen(tbMSG); i++)
	{
		tbMSGCOmplet[i] = tbMSG[i - 5];

	}
	printf("LAAAAAAAAAAAAAA %s", tbMSGCOmplet);
	//strcpy(tbMSGCOmpletcpy,version);

	//strcpy(tbMSGCOmplet, tbMSGCOmpletcpy);


	//sa fou la m CA 
	itoa(annee, tbMSGCOmpletcpy, 10);
	//sa marche pooooo 

	strcat(tbMSGCOmplet, tbMSGCOmpletcpy);
	printf("finnaly: %s", tbMSGCOmplet);
	

}