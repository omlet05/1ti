/*  
	Exercice de préparation pour les chaines de caractères.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

void menu(char []);
int choix(void);

void exit(void);

void	main(void){
	char chaine[20];
	int choix=0;

	printf("Entrez une chaine:\t");
	fflush(stdin);
	gets(chaine);
	system("cls");
	while("choix != 5"){
	menu(chaine);
	fflush(stdin);
	scanf("%s",&choix);

	switch(choix){
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 5:
		exit();
		break;
	}
	}
}


void menu(char chaine[]){
	printf("\t\t-------------Operation sur string------------------\n");
	printf("\t\tla chaine: %s\n",chaine);
	printf("\t\t1. Completer la chaine.\n");
	printf("\t\t2. Compter la chaine.\n");
	printf("\t\t3. vider la chaine.\n");
	printf("\t\t4. Remplacer la chaine.\n");
	printf("\t\t5. Quitter.\n");
	printf("\t\tEntrez votre choix:\t");
}

void exit(void){
	printf("\nA bientot!\n");
	getch();
}
