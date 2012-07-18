/*programme n°3s3 Suite de Fibonacci.*/
#include	<stdio.h>
#include	<conio.h>

void	main(void)
{		
	int u1=1,u2=1,u3,n,cpt;
	
	printf("Entrez le nombre d'occurence a afficher: \n");
	scanf("%d", &n);
	
	printf("%d\t%d", u1, u2);
	for(cpt=1;cpt <= n-2;cpt++)
	{
		u3 = u1 + u2;
		u1 = u2;
		u2 = u3;
		printf("\t%d\t%d\t",u1, u2);
	}
	getch();
}