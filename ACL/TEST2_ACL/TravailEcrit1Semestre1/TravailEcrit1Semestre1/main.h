#ifndef MAIN_H
#define MAIN_H

/*Exercice1*/
#define nbCases1 10
/*Exercice3*/
#define TITRE "TEST"





/*Exercice 2*/
typedef struct {
	//8bit
	char startBit:1;
	//8bit
	char data;
	//les 2 8bit 
	char parite : 1;
	char stopBit : 2;
}trame232;

typedef union {
	//24bits
	trame232 tramex;
	//4octets
	int envoi;
}U_RS232;
//************************
typedef union {
	//24bits
	struct {
		//8bit
		char startBit : 1;
		//8bit
		char data;
		//les 2 8bit 
		char parite : 1;
		char stopBit : 2;
	}trame232;
	//4octets
	int envoi;
}U_RS232_2;
#endif 

