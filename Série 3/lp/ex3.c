/*programme n�1: .1.	Apr�s avoir d�clar� les variables n�cessaires,
	traduisez les s�quences d�instructions suivantes en prenant
soin de tester les diff�rents concepts vus au cours (while, for)*/
#define _USE_MATH_DEFINES
#include	<stdio.h>
#include	<conio.h>

void	main(void)
{
	int expo,expotmp;
	float nb,puis=1;

	printf("Entrez un nombre:\t");
	scanf("%f", &nb);

	printf("\nEntrez un exposant positif\n");
	scanf("%d", &expo);
	expotmp = expo;
	

	
	/*for(puis=1;expotmp > 0;expotmp--,puis= puis*nb);*/
		
	/*while (expotmp > 0)
	{
		puis = puis * nb;
		expotmp--;
	}*/
	/*do{
		puis = puis * nb;
		expotmp--;
	}while(expotmp > 0);
	*/
	printf("%.2f exposant %d est egal a %.2f\n", nb, expo, puis);
	getch();
}