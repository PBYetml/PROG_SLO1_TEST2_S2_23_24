 /************************************************************
 *                                                           *
 *                      En-tête du programme                 *
 *                                                           *
 * Fichier : main.c                                          *
 * Projet : Correction de la question 3 du test 2            *
 * Description : Ce programme affiche une chaine de cractère *
 *               qui est issue de plusieurs autres chaine    *
 *               additionner deux entiers.                   *
 * Auteur initial : Stefanelli Matteo                        *
 * Date de création : 16.05.2024                             *
 * Auteurs des modifications :   -                            *
 *   -                                                       *
 *                                                           *
 ************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



#define TITRE "TEST"


int main()
{
				// A faire :
				/*instruction permettant de mettre à jour le tableau tbMSGComplet[15] pour avoir message suivant : TEST SLO2024*/
	while (1)
	{

		// déclaration des variables

		const char* pt_message = TITRE;
		const char tbMSG[] = { 0x53, 0x4C, 0x4F, '\0'};	//S  L  O
		char tbMSGComplet[15];
		int annee = 2024;
		char version = 0x33;							// 3



		// déclaration des variables intermédiaire

		char annee_str[5];


		// copie de titre dans le tableau tbMSGComplet
		strcpy(tbMSGComplet, pt_message);                  //TEST



		// ajout de la version ("3")
		tbMSGComplet[strlen(tbMSGComplet)] = version;      //TEST3

		//ajout d'un espace

        strcat(tbMSGComplet, " ");                        //TEST3

		// concaténation de tbMSGComplet et tbMSG
        strcat (tbMSGComplet, tbMSG);                     //TEST3 SLO

		//conversion de l'année en chaine de caractère
		itoa(annee, annee_str, 10);

		// concaténation de tbMSGComplet et annee_str
		strcat(tbMSGComplet, annee_str);                 //TEST3 SLO2024

		// affichage du message
		printf("%s\n", tbMSGComplet);

		return 0;

		//pour le problème du "_s" apres les fonctions (exemple : strcpy_s), j'ai cru comprendre que les standars ne prenait pas en compte
		// la taille de la destination et du coup ca pourrait amener a des problèmes lors du lancement du code. C'est pourquoi il y a ces fonctions
		//"sécurisée" qui elle, vérifie la taille de la destination
	}
}


