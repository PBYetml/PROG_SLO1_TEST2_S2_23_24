//PROG TEST

// Inclure les libraires
#include "main.h" //Header file -> Q2,Q3
#include <stdio.h> // Entrée sortie -> Q4 
#include <string.h> //librairie des strings -> Q3
#include <ctrd>

//#include <cstdint>

//TEST PROG

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


//EXO3-------------------------

void main()
{
    const char* pt_message = 1;
    const char tbMSG[] = { 0x52, 0x4C, 0x4F };
    char tbMSGComplet[15];
    int annee = 2022;
    char version = 0x33;
}

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void main()
{
    const char* pt_message = TITRE;
    const char tbMSG[] = { 0x52, 0x4C, 0x4F, '\0' };
    char tbMSGComplet[15];
    int annee = 2022;
    int8_t version = 0x33;

    char anneeStr[5]; // Pour stocker l'année en tant que chaîne de caractères
    itoa(annee, anneeStr, 10);
    strcpy(tbMSGComplet, pt_message);
    strcat(tbMSGComplet, tbMSG);
    strcat(tbMSGComplet, anneeStr);
    strcat(tbMSGComplet, "TEST1");
}


// EXO4------------------------

//Libraires au dessus :)
// #include <stdint.h>
#include "calcul.h"


double Additionner(int* val1, int val2)  // Changement du type de retour à double
{
    double Resultat_Addition = 0;

    Resultat_Addition = *val1 + val2;  // pointeur val1 1 avant l'addition
    return Resultat_Addition;  // Retour du résultat "double"
}

int main(void)
{
    int8_t val1 = 130, val2 = -8;
    double Result_Addition = 0;  // Changement du type à double pour correspondre au type de retour de Additionner

    Result_Addition = Additionner(&val1, val2);  // Appel  avec l'adresse de val1 et val2
}

