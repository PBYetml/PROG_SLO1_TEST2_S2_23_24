/////////////////////////
//Ex3				   //
//NBN				   //
/////////////////////////

#include <stdio.h> // pour printf
#include <string.h> // pour strcat
#include <stdlib.h>

#define TITRE "TEST"

void main()
{
	const char* pt_message = TITRE;
	const char tbMSG[] = { 0x53,0x4c,0x4f };	//S,L,O
    char tbMSGComplet[16];
	int ann�e = 2022;
	int version = 0x33;							// 3

	// Mes instruction

    // Construire le message
    strcpy(tbMSGComplet, pt_message);  // Commence avec "TEST"

    // Convertir la version en caract�re et l'ajouter
    char versionStr[2] = { version, '\0' };
    strcat(tbMSGComplet, versionStr);  // Ajoute "3"

    // Ajouter "SLO" du tableau tbMSG1 � la cha�ne, en v�rifiant la longueur totale
    if (strlen(tbMSGComplet) + sizeof(tbMSG) < sizeof(tbMSGComplet)) 
    {
        strncat(tbMSGComplet, tbMSG, sizeof(tbMSG));
    }

    // Convertir l'ann�e en cha�ne et l'ajouter, en v�rifiant la longueur
    char anneeStr[5];
    itoa(ann�e, anneeStr, 10);  // Convertit 2022 en cha�ne "2022"
    if (strlen(tbMSGComplet) + strlen(anneeStr) < sizeof(tbMSGComplet)) 
    {
        strcat(tbMSGComplet, anneeStr);  // Ajoute l'ann�e "2022"
    }

    // Afficher le message complet
    printf("Message final : %s\n", tbMSGComplet);
}