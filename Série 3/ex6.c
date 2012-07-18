/*EX 6S3 pyramide */

#include	<stdio.h>
#include	<conio.h>

void main(void){

	int nb,cpt;

	printf("*********** PYRAMIDE ***********\n");

	printf("Entrez un nombre pour realiser sa pyramide:\n");

	scanf("%d", &nb);

	do{
		cpt = nb;
		do{ 
			printf("*");
			cpt --;
		}while(cpt > 0);

	nb--;
	printf("\n");

	}while(nb > 0);

}