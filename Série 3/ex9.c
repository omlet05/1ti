/*ex 9.*/


#define _CRT_SECURE_NO_WARNINGS
#include	<stdio.h>
#include	<conio.h>

void main(void){	
	int n=1,Max,Min,i,j;

	while(n<=5){
		Max = n+(n-1);
		Min = n;
		j=1;

		while(j <= (5-n)){
			printf(" ");
			j++;
		}

		i = Min;

		while(i <= Max){
			printf("%d",i);
			i++;
		}

		i = Max-1;
		while(i >= Min){
			printf("%d",i);
			i--;
		}
		printf("\n");
		n++;
	}

	getch();
}