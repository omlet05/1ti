/*programme n°1 plus grand, plus petit ou égal.*/
#include	<stdio.h>
#include	<conio.h>

void	main(void)
{	
	int NbLu;

	printf("Entrez un nombre:\t");
	scanf("%d",&NbLu);

	if(NbLu>100){
		printf("\n%d est plus grand que 100.\n",NbLu);
	}
	else{
		if(NbLu==100){
			printf("\n%d est egal a 100.\n",NbLu);
		}
		else{
			printf("\n%d est plus petit que 100.\n",NbLu);	
		}
	}
	getch();
}