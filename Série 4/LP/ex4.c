/*
4.	Ecrire la fonction AfficheMin qui re�oit trois r�els en arguments et imprime le plus petit des trois r�els.
Apr�s avoir obtenu les trois r�els, le programme principal fait appel � la fonction.
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
