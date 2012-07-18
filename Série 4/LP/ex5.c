/*
5.	Ecrire la fonction SigneRes qui reçoit un opérateur et deux entiers en arguments d’entrée, détermine le signe du résultat de l’opération du premier entier par le deuxième et le transmet au programme appelant (sous forme d’un caractère : + pour positif, - pour négatif ou = si égal à 0) .
Le programme principal, après avoir fait appel à la fonction, doit afficher  par exemple :
"Le résultat de  398 - 298 est positif".

*/
#define _CRT_SECURE_NO_WARNINGS
#include	<stdio.h>
#include	<stdlib.h>
#include	<conio.h>

void SigneRes(char,int,int);

void	main(void){
	int a,b;
	char op;
	printf("Entrez un operateur de calcul (+,-,*,/),reel a, reel b:\n");
	scanf("%c,%d,%d",&op,&a,&b);
	SigneRes(op,a,b);
	
}

void SigneRes(char op,int a,int b){
	int rep;
	switch(op){
		case '+':
			rep = a+b;
			break;
		case '-':
			rep = a-b;
			break;
		case '*':
			rep = a*b;
			break;
		case '/':
			rep = a/b;
			break;
	}
	printf("%d %c %d = %d\n",a,op,b,rep);
	getch();
}

