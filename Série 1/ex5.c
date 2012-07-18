/*programme n°5 calculs.*/
#define _USE_MATH_DEFINES
#include	<stdio.h>
#include	<conio.h>
#include	<math.h>

void	main(void)
{
	int a,b;

	printf("Entrez a:\t");
	scanf("%d",&a);
	printf("\nEntrez b:\t");
	scanf("%d",&b);

	/* AFFICHAGE   */

	printf("\na= %d", a);
	printf("\t\tb= %d\n", b);
	printf("\na+b= %d\n", a+b);
	printf("\na-b= %d\n", a-b);
	printf("\na*b= %d\n", a*b);
	printf("\na/b= %.2f\n", (float)a/b);
	getch();
}