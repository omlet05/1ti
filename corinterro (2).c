#include <stdio.h>
#include <conio.h>

void main(void){
	int nbre,nbreTMP,som=0;

	printf("Entrez un nombre:\t");
	scanf("%d", &nbre);
	nbreTMP = nbre;
	while(nbreTMP != 0){
		som+=nbreTMP%10;
		printf("%d",som);
		nbreTMP /= 10;
		printf("%d",nbreTMP);
	}
	printf("%d=>%d\n\n",nbre,som);
	getch();
}