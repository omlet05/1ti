/*programme n°1 inverser deux variables.*/
#include	<stdio.h>
#include	<conio.h>

void	main(void)
{	
	int N1,N2,N3;
	
	printf("Veuillez entrer deux entiers a inverser:\n le premier:\t");
	scanf("%d",&N1);
	printf("\nle deuxieme:\t");
	scanf("%d",&N2);
	printf("\nvoila vos variables:\n A:%d B:%d\n",N1,N2);
	/*inversion*/
	N3=N1;
	N1=N2;
	N2=N3;
	/*fin inversion*/
	printf("\nvoila vos variables:\n A:%d B:%d",N1,N2);
	getch();
}