/*programme n�6 v�rif date.*/
#include	<stdio.h>
#include	<conio.h>

void	main(void)
{	
	int date,A,M,J;
	
	printf("Entrez votre date: (aaaammjj)");
	scanf("%d", &date);

	A = date / 10000;
	M =  (date/100) % 100;
	J = date % 100;

	printf("%d %d %d", A,M,J);
	getch();
}