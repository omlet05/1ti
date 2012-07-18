/*programme n°6 calculs du nombre de secondes.*/
#define _USE_MATH_DEFINES
#include	<stdio.h>
#include	<conio.h>

void	main(void)
{	
	int H,M,S,sec;
	printf("Entrez le nombre de secondes:\t");
	scanf("%d",&S);
	sec = S;

	/*affichage & calcul*/

	
	H = S / 3600;
	S = S % 3600;
	M = S/60;
	S = S % 60;

	printf("\n\tdonc %d secondes",sec);
	printf("\n\test equivalent a: %d heure(s) %d minute(s) %d seconde(s)\n",H,M,S);

	getch();
}