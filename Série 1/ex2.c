/*programme n°2 conversion euro=> usd.*/
#include	<stdio.h>
#include	<conio.h>

void	main(void)
{
	float nbEU,nbUSD,taux;
	
	printf("Entrez votre montant en Euro:\t");
	scanf("%f",&nbEU);
	nbUSD=nbEU*1.39;
	printf("\n\nmontant en euro:\t%.2f\nmontant en USD:\t\t%.2f",nbEU,nbUSD);
	getch();
}