/*programme n°6 calculs du nombre de secondes.*/
#define _USE_MATH_DEFINES
#include	<stdio.h>
#include	<conio.h>
#include	<math.h>

void	main(void)
{	
	int H,M,S,sec;
	printf("Entrez votre heure comme tel: hh:mm:ss\n\n");
	scanf("%d:%d:%d",&H,&M,&S);
	
	/*affichage & calcul*/

	
	sec =	H*3600;
	sec +=	M*60;
	sec +=	S;
	
	printf("%dh heures %d minutes %d secondes\n",H,M,S);
	printf("\n vaut %d secondes\n",sec);
	
	getch();
}