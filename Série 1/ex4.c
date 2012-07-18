/*programme n°4 fraction.*/
#define _USE_MATH_DEFINES
#include	<stdio.h>
#include	<conio.h>
#include	<math.h>

void	main(void)
{
	int num,deno;
	float fract;

	printf("Entrez le numerateur:\t");
	scanf("%d",&num);
	printf("\nEntrez le denominateur:\t");
	scanf("%d",&deno);

	fract=(float)num/deno;

	printf("\nvotre fraction:\t%d/%d\nqui donne:\t%.2f\n\n",num,deno,fract);
	getch();
}