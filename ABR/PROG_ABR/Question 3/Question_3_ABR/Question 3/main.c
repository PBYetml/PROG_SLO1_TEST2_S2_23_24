#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h> // Pour itoa

#define TITRE "TEST"

int main() {
    const char* pt_message = TITRE;
    const char tbMSG[] = { 0x20, 0x53, 0x4C, 0x4F, '\0' }; // Correspondant à 'S', 'L', 'O', avec terminateur nul
    char tbMSGComplet[15];
    int annee = 2022;
    int8_t version = 0x33; // Ceci est 51 en décimal, correspondant à '3' en ASCII

    //Initialisation des variables pour la manipulation des chaînes de caractères
    size_t tailleTableau;
    char tbAnnee[5];
  
    //Copier le titre dans tbMSGComplet
    strcpy(tbMSGComplet, pt_message);
    //Obtenir la longueur de tbMSGComplet après avoir copié le titre
    tailleTableau = strlen(tbMSGComplet);

    //Ajouter la version sous forme de caractère
    tbMSGComplet[tailleTableau] = (char)version; // '3' en ASCII
    tbMSGComplet[tailleTableau + 1] = '\0'; // Terminer la chaîne avec un caractère nul
    //Convertir l'année en chaîne de caractères
    itoa(annee, tbAnnee, 10);
    //Copie de SLO dans le tableau final
    for (int i = 6; i < 10; i++)
    {
        if (i < 10)
            tbMSGComplet[i] = tbMSG[i];
        else
            tbMSGComplet[i] = '\0';
    }
    //Ajouter tbMSG à tbMSGComplet
    strcat(tbMSGComplet, tbMSG);

    //Ajouter la chaîne de caractères de l'année à tbMSGComplet
    strcat(tbMSGComplet, tbAnnee);

    //Afficher le résultat pour vérification
    printf("%s\n", tbMSGComplet);

    return 0;
}
