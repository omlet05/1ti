/*programme n°12 dpi d'imprimante.*/
#include	<stdio.h>
#include	<conio.h>

void	main(void)
{	
	int dpi;
	
	printf("Entrez les dpi de votre imprimante: ");
	scanf("%d", &dpi);

	if(dpi > 4500 || dpi < 50)
		printf("erreur: mauvaise resolution!!");
	else{
		if(dpi <= 200)
			printf("Imprimante basse resolution.");
		else{
		if(dpi < 500)
			printf("Imprimante de moyenne resolution");
			else
				printf("Imprimante de haute resolution");
		}
	}

	getch();
}