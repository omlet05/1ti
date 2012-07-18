/*
4.	Ecrire la fonction AfficheMin qui reçoit trois réels en arguments et imprime le plus petit des trois réels.
Après avoir obtenu les trois réels, le programme principal fait appel à la fonction.
*/
#define _CRT_SECURE_NO_WARNINGS
#include	<stdio.h>
#include	<stdlib.h>
#include	<conio.h>

int AfficheMin(int,int,int); 

void	main(void){
	int a,b,c,min;
	printf("Entrez a,b,c:\n");
	scanf("%d,%d,%d",&a,&b,&c);
	min = AfficheMin(a,b,c);

	printf("le minimum de ces trois nombres est: %d",min);
}

int AfficheMin(int a,int b,int c){
	int min;

	if(a < b && a < c)
		min = a;
	else{
		if(c < b && c < a)
			min = c;
		else
			min = b;

	return(min);
	}
}
