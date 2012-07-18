/*
7.	Ecrire un programme qui imprime un rectangle de taille  Long ,Larg compos� de caract�res Motif. Le programme principal fera appel � trois fonctions :
	i.	la premi�re LireC permet de lire un caract�re C et de le transmettre au programme appelant ; 
	ii.	la deuxi�me LireT permet de lire un entier T (tant que l�utilisateur n�a pas introduit un nombre
			sup�rieur ou �gal � 2, faites recommencer) et le transmet au programme appelant ;  (2 appels)
	iii. la troisi�me AfficherRect  imprime le rectangle.
			On doit pouvoir ex�cuter le programme plusieurs fois sans le relancer.
*/
#define _CRT_SECURE_NO_WARNINGS
#include	<stdio.h>
#include	<stdlib.h>
#include	<conio.h>

char LireC(void);
int LireT(char []);
void AfficherRect(int,int, char c);

void main(void){
	int Long,Larg,rep=1;
	char c;
	do{
		system("cls");
		c = LireC();
		Long = LireT("Longueur");
		Larg = LireT("Largeur");
		
		AfficherRect(Long,Larg, c);

		printf("\ncontinuer le programme: (0=non 1=oui)");
		scanf("%d",&rep);
	}while(rep==1);
_getch();
}

char LireC(void){
	char c;
	printf("\nEntrez un caractere special: ");
	fflush(stdin);
	scanf("%c", &c);
	return(c);
}
int LireT(char s[]){
	int nb;
	printf("Entrez la %s: ", s);
	scanf("%d",&nb);
	return(nb);
}
void AfficherRect(int Long,int Larg, char c){
	int i,j;
	printf("\n\tRETANGLE (%dx%d):\n\n",Long,Larg);
	for(i=0;i<Larg;i++){
		printf("\t\t\t");
		for(j=0;j<Long;j++){
			printf("%c", c);
		}
	printf("\n");
	}
}


