/*  
	Exercice de préparation pour les chaines de caractères.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

void makelogin(int ,char [],char [],char [],char []);

void	main(void){
	char sect[3],nom[20],pnom[20],login[20];
	int annee;
	printf("\t\t---------------Creation de LOGIN---------------\n");
	printf("Entrez les deux lettres de la section:\t");
	gets(sect);
	
	printf("\nEntrez l'annee scolaire:\t");
	scanf("%d", &annee);
	
	printf("\nEntrez le prenom:\t");
	fflush(stdin);
	gets(pnom);
	
	printf("\nEntrez le nom:\t");
	fflush(stdin);
	gets(nom);

	makelogin(annee,sect,pnom,nom,login);

	printf("\nVotre login est:\t%s\n", login);
	getch();
}

void makelogin(int annee,char sect[],char pnom[],char nom[],char login[]){
	char tmp[2];
	
	strcpy(login,sect);
	itoa(annee,tmp,10);
	strcat(login,tmp);
	strcat(login,nom);
	strncat(login,pnom,1);

}
