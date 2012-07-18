/*programme n°1 declaration, affectation, lecture et ecriture.*/
#include	<stdio.h>
#include	<conio.h>

void	main(void)
{	/*a*/
	int	heure=10,minute=30,seconde=12;
	char	lettre1='T',lettre='I';
	float	minerval=750.85239,frais=65.0452,total;
	double	resultat=4750391367.62;


	/*b*/
	printf("\nil est %d:%d:%d",heure,minute,seconde);
	printf("\nvous etes en %c%c1",lettre,lettre1);

	total = minerval + frais;
	printf("\ntotal %.2f+%.2f=%.2f euros",minerval,frais,total);
	printf("\nle resultat est egal a %.2f euros\nce qui fait %.2f euros par mois\n",resultat, resultat/12);
	getch();

	/*c*/
	printf("\nEntrez l'heure, minute, seconde: \t");
	scanf("%d",&heure);
	fflush(stdin);
	scanf("%d",&minute);
	fflush(stdin);
	scanf("%d",&seconde);
	fflush(stdin);

	printf("\nEntrez lettre 1 et lettre2: \t");
	scanf("%c",&lettre);
	fflush(stdin);
	scanf("%c",&lettre1);
	fflush(stdin);

	printf("\nEntrez minerval et frais: \t");
	scanf("%f",&minerval);
	fflush(stdin);
	scanf("%f",&frais);
	fflush(stdin);


	printf("\nEntrez resultat: \t");
	scanf("%f",&resultat);
	fflush(stdin);

	/*c²*/
	printf("\nil est %d:%d:%d",heure,minute,seconde);
	printf("\nvous etes en %c%c1",lettre,lettre1);

	total = minerval + frais;
	printf("\ntotal %.2f+%.2f=%.2f euros",minerval,frais,total);
	printf("\nle resultat est egal a %.2f euros\nce qui fait %.2f euros par mois\n",resultat, resultat/12);
	getch();



}