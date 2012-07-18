/*
5.	Ecrire la fonction SigneRes qui re�oit un op�rateur et deux entiers en arguments d�entr�e, d�termine le signe du r�sultat de l�op�ration du premier entier par le deuxi�me et le transmet au programme appelant (sous forme d�un caract�re : + pour positif, - pour n�gatif ou = si �gal � 0) .
Le programme principal, apr�s avoir fait appel � la fonction, doit afficher  par exemple :
"Le r�sultat de  398 - 298 est positif".

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

