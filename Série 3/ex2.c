/*programme n°1s3 table de multi.*/
#include	<stdio.h>
#include	<conio.h>

void	main(void)
{		
	int i, j, Nbr=1;
	
	for(i = 1;i <= 10; i++){
		printf("\t\t ******** Table de %d ********\n\n", i);
		
		for(j = 1;j <= 10;j++){
			printf("\n%d * %d = %d\n", j, i, i*j);
		}
	}
	getch();
}