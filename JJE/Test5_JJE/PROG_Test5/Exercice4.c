//-- librairie standard --//
#include <stdio.h>
#include "Exercice4.h"		//J'ai mis Exercice4.h à la place de calcul.h

//-- programme principal --//
int main(void)
{
	char val1 = 130, val2 = -8;
	int Resul_Addition = 0;

	Resul_Addition = Additionner(&val1, &val2);
}

//ADDITION
int Additionner(int* val1, int val2)
{
	int Resultat_Addition = 0;

	Resultat_Addition = val1 + val2;
	return Resultat_Addition;
}