/*
1.	Ecrire la fonction Liste qui permet d’afficher la liste suivante :
"Choix de programmes à utiliser :
	A.  Word
  	B.   Excel   	
C.	Access
D.	Internet Explorer"
*/
#define _USE_MATH_DEFINES
#include	<stdio.h>
#include	<conio.h>

void liste(void);
char choisir(void);

void	main(void)
{
	char choix;
	liste();
	choix = choisir();
	printf("%c", choix);
	switch(choix)
	{
	case 'A':
		printf("\nLancer Word\n");
		break;
	case 'B':
		printf("\nLancer Excel\n");
		break;
	case 'C':
		printf("\nLancer Access\n");
		break;
	case 'D':
		printf("\nLancer Internet Explorer\n");
		break;
	default:
		printf("\nchoix incorrect\n");
	}

}

void liste(void)
{
printf("Choix de programme  a utiliser:\nA. Word\nB.Excel\nC.Access\nD.Internet Explorer\n");
}

char choisir(void)
{
	char choix;
	printf("Entrez votre choix:\n");
	fflush(stdin);
	scanf("%c", &choix);
	return choix;
}