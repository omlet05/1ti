#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void main(void){
	int i,j,l,nb;
	printf("entrez le nombres de lignes voulues:\t");
	scanf("%d", &nb);
	j = nb;
	l = nb;
	printf("\t\t\t\t|||| pyramide ||||\n\n");
	while(j > 0){
		i = l;
		while(i>1){
			printf("x");
			i--;
		}
		if(j > 2)
			printf("o\n");
		if(j == 2)
			l++;
		l--;
		j--;
	}
	printf("\nx\n\n\n");

	_getch();
}