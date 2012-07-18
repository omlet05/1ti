/*	ex2:
	
*/
#include	<stdio.h>
#include	<conio.h>

void main(void)
{
	char nom[20];
	int i;

	i=0;
	do{
		printf("Entrez le nom du participant(x pour terminer et afficher):\n");
		fflush(stdin);
		scanf("%c", &nom[i]);
		printf("%c ", nom[i]);
		i++;
	}while(nom[i]!='x');

	do{
		printf("%c ", nom[i]);
		i--;
	}while(i>=0);

}