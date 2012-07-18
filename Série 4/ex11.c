#define _CRT_SECURE_NO_WARNINGS
#include	<stdio.h>
#include	<stdlib.h>
#include	<conio.h>
#include	<string.h>

typedef struct CellPart{
	char Nom[15];
	char Tel[11];
	char Adresse[25];
	int TabRef[6];

}cellpart;

//void tri(cellpart [], int []);

void main(void){
	cellpart TabPart[500];
	int i,k,Ind,NP=0;
	char NomLu[15], Tel[11], Adresse[25];
	printf("Entrez le nom du participant: ");
	fflush(stdin);
	gets(NomLu);
	while(strcmp(NomLu,"XXX") != 0){ 
		k=0;
		while(k < NP && strcmp(NomLu,TabPart[k].Nom) !=0)
			k++;
		if(k == NP || strcmp(NomLu,TabPart[k].Nom) < 0){
			Ind= NP;
			while(Ind>k){
				TabPart[Ind] = TabPart[Ind-1];
				Ind--;
			}
			strcpy(TabPart[k].Nom,NomLu);
			printf("\nEntrez le telephone du participant: ");
			fflush(stdin); 
			gets(TabPart[k].Tel);
			fflush(stdin);
			printf("\nEntrez l'adresse du participant: ");
			gets(TabPart[k].Adresse);
			NP++;
			
			i=0;
			while(i < 6){
				fflush(stdin);
				printf("reponse pour la question %d: ", i+1);
				scanf("%d", &TabPart[k].TabRef[i]);
				i++;
			}
		}
		else
			printf("Un seul bulletin de participation par Personne!");
			_getch();
		system("cls");
		printf("Entrez le nom du participant: ");	
		fflush(stdin);
		gets(NomLu);
	}
	
}