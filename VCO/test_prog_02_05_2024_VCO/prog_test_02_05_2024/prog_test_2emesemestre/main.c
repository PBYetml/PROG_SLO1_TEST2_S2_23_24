//PROG TEST

// Inclure les libraires
#include "main.h" //Header file -> Q2,Q3
#include <stdio.h> // Entr�e sortie -> Q4 
#include <string.h> //librairie des strings -> Q3
#include <ctrd>

//#include <cstdint>

//TEST PROG
/*
//EXO1-----------------------
char tbValX[10];
char tbValY[50];
char* ptr = &tbValY[19];

//EXO2-----------------------


union RS232
{
    struct simulationRS
    {
        char start : 1;
        char datas;
        char parity : 1;
        char stop : 2;
    } envoi;
    short envoi;
};
*/

//EXO3-------------------------

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void main()
{
    const char* pt_message = " SLO"; // Ajout d'un espace avant SLO
    const char tbMSG[] = { 'T', 'E', 'S', 'T', '2', ' ', '\0' }; // Ajout d'un espace après TEST2
    char tbMSGComplet[16]; // Augmentation de la taille du tableau pour accueillir l'espace supplémentaire
    int annee = 2024;   // année 2024
    uint8_t version = 0x33; // Version 0x33

    char anneeStr[5]; // Pour stocker l'année en tant que chaîne de caractères
    itoa(annee, anneeStr, 10); // Convertir l'année en chaîne de caractères
    strcpy(tbMSGComplet, tbMSG); // Copier tbMSG dans tbMSGComplet
    strcat(tbMSGComplet, pt_message); // Ajouter pt_message à la fin de tbMSGComplet
    strcat(tbMSGComplet, anneeStr); // Ajouter anneeStr à la fin de tbMSGComplet

    printf("%s\n", tbMSGComplet); // Affiche le message complet
}
/*

// EXO4------------------------

//Libraires au dessus :)
// #include <stdint.h>
#include "calcul.h"


double Additionner(int* val1, int val2)  // Changement du type de retour � double
{
    double Resultat_Addition = 0;

    Resultat_Addition = *val1 + val2;  // pointeur val1 1 avant l'addition
    return Resultat_Addition;  // Retour du r�sultat "double"
}

int main(void)
{
    int8_t val1 = 130, val2 = -8;
    double Result_Addition = 0;  // Changement du type � double pour correspondre au type de retour de Additionner

    Result_Addition = Additionner(&val1, val2);  // Appel  avec l'adresse de val1 et val2
}

*/