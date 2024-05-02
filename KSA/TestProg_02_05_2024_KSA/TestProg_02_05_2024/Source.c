
#include <stdio.h>
#include <string.h>

//----------déclarations donées----------
#define TITRE "TEST"

void main()
{
	const char* pt_message = TITRE;	// TEST
	const char tbMSH[] = { 0x53, 0x4C, 0x4F };	// SLO
	char tbMSGComplet[15];
	int annee = 2022;	// 2022
	__int8 version = 0x33;	// 3
//---------------------------------------

	// Question 3

	strcat(pt_message, version, tbMSH, annee);	// Création du message "TEST3 SLO2022"
	strcpy(tbMSGComplet, pt_message, strlen(tbMSGComplet));	// Copie du message "TEST3 SLO2022" dans tbMSGComplet
	
	printf("Message : %s\n", tbMSGComplet);	// Affichage du message "TEST3 SLO2022"
}


// Question 4
/*

double Additioner(int val1, int val2)
{
	double Resultat_Addition = val1 + (double)val2;

	return (int)Resultat_Addition;
}

double Additionner(int val1, int val2);

int main(void)
{
	int val1 = 130, val2 = -8;
	double Resul_Addition = 0;

	Resul_Addition = Additionner(&val1, &val2);
}

*/