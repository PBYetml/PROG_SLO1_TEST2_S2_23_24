#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h> // Pour itoa

#define TITRE "TEST"

int main() {
    const char* pt_message = TITRE;
    const char tbMSG[] = { 0x20, 0x53, 0x4C, 0x4F, '\0' }; // Correspondant � 'S', 'L', 'O', avec terminateur nul
    char tbMSGComplet[15];
    int annee = 2022;
    int8_t version = 0x33; // Ceci est 51 en d�cimal, correspondant � '3' en ASCII

    //Initialisation des variables pour la manipulation des cha�nes de caract�res
    size_t tailleTableau;
    char tbAnnee[5];
  
    //Copier le titre dans tbMSGComplet
    strcpy(tbMSGComplet, pt_message);
    //Obtenir la longueur de tbMSGComplet apr�s avoir copi� le titre
    tailleTableau = strlen(tbMSGComplet);

    //Ajouter la version sous forme de caract�re
    tbMSGComplet[tailleTableau] = (char)version; // '3' en ASCII
    tbMSGComplet[tailleTableau + 1] = '\0'; // Terminer la cha�ne avec un caract�re nul
    //Convertir l'ann�e en cha�ne de caract�res
    itoa(annee, tbAnnee, 10);
    //Copie de SLO dans le tableau final
    for (int i = 6; i < 10; i++)
    {
        if (i < 10)
            tbMSGComplet[i] = tbMSG[i];
        else
            tbMSGComplet[i] = '\0';
    }
    //Ajouter tbMSG � tbMSGComplet
    strcat(tbMSGComplet, tbMSG);

    //Ajouter la cha�ne de caract�res de l'ann�e � tbMSGComplet
    strcat(tbMSGComplet, tbAnnee);

    //Afficher le r�sultat pour v�rification
    printf("%s\n", tbMSGComplet);

    return 0;
}
