
/*
//Q1

//a)
for (i = 1; i <= 10; i++)
{
	char y = 20;
	tbValX[i] = tbValY[y];
	y++
}
//b)
recup = tbVar[9;]

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


#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define TITRE "TEST"

void main()
{
	const char* pt_message = TITRE;
	const char tbMSG[] = { 0x53,0x4c, 0x4f };
	char tbMSGComplet[15];
	int annee = 2022;
	int8_t version = 0x33;

	strcpy(tbMSGComplet, pt_message);
	itoa(version, tbMSGComplet, 16);
	strcat(tbMSGComplet, tbMSG);
	itoa(annee, tbMSGComplet, 10);

	printf("%c", tbMSGComplet);
	
}