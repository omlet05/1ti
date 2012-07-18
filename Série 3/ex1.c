/*programme n°1s3 table de multi.*/
#include	<stdio.h>
#include	<conio.h>

void	main(void)
{		
	int i, Nbr;
	printf("Entrez le numbre a afficher la table: ");
	scanf("%d", &Nbr);

	for(i = 1;i <= 10;i++){
	printf("\n%d * %d = %d\n", i, Nbr, Nbr*i);
	}
	getch();
}