/*
//Exercice 3 Test 2 Semestre 2

#define TITRE "TEST"
#include "stdio.h"

void main()
{
	const char* pt_message = TITRE;
	const char tbMSG[] = { 0x53, 0x4C, 0x4F };			//--> voir la table ASCII "SLO"
	char tbMSGComplet[15];
	int annee = 2022;
	char version = 0x33;								//--> voir la table ASCII "3"

	//... vos instructions
	struct tbMSGComplet
	{
		const char* pt_message;
		char version;
		const char tbMSG;
		int annee;
	};
}
*/