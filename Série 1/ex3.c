/*programme n°3 inverser deux variables.*/
#define _USE_MATH_DEFINES
#include	<stdio.h>
#include	<conio.h>
#include	<math.h>

void	main(void)
{
	float rayon;
	float volume;

	printf("Entrez le rayon d'une sphere pour son volume\n");
	scanf("%f",&rayon);
	volume=4./3*M_PI*pow(rayon,3);
	/*!!!!!!!!!!		un . pour le casting		!!!!!!!!!!!!*/
	printf("votre volume: %.2f", volume);
	getch();
}