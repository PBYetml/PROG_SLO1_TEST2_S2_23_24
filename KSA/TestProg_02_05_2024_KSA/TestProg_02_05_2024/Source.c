
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

	// Copie du titre dans tbMSGComplet
	strcpy_s(tbMSGComplet, sizeof(tbMSGComplet), pt_message);

	// Ajout de la version au message
	char versionStr[2] = { version, '\0' };
	strcat_s(tbMSGComplet, sizeof(tbMSGComplet), versionStr);

	// Ajout d'un espace
	strcat_s(tbMSGComplet, sizeof(tbMSGComplet), " ");

	// Ajout de SLO
	strncat_s(tbMSGComplet, sizeof(tbMSGComplet), tbMSH, sizeof(tbMSH));

	// Ajout d'un caractère vide
	tbMSGComplet[strlen(tbMSGComplet)] = '\0'; // Ajout explicite du caractère nul

	// Conversion de l'anée en chaîne
	char anneeStr[5];
	itoa(annee, anneeStr, 10); // Utilisation de itoa pour convertir l'année en chaîne de caractères
	strcat_s(tbMSGComplet, sizeof(tbMSGComplet), anneeStr);

	// Lecture de la longeur du message
	size_t length = strlen(tbMSGComplet);

	// Affichage du message final
	printf_s("Message : %s\n", tbMSGComplet);	// Doit afficher "TEST3 SLO2022"
	printf_s("Longueur du message : %zu\n", length);	// Afficher la longueur du message

	return 0;
}
