#define TITRE "TEST"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{

	const char* pt_message = TITRE;						
	const char tbMSG[] = { 0x53, 0x4C, 0x4F };			
	char tbMSGComplet[15];
	int annee = 2022;
	char tbMSGComplet[15];																
	char version = 0x33;								
	char anneeChaine[5];								


	tbMSGComplet[0] = '\0';								
	strcpy(tbMSGComplet, pt_message);					
	int lenght = strlen(tbMSGComplet);					
	tbMSGComplet[lenght] = version;						
	tbMSGComplet[lenght + 1] = '\0';					
	strcat(tbMSGComplet, " ");						
	strncat(tbMSGComplet, tbMSG, 3);					
	itoa(annee, anneeChaine, 10);						
	strcat(tbMSGComplet, anneeChaine);	
	printf("%s \n", tbMSGComplet);						

	return 0;
}