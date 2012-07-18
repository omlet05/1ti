/*Pizza.*/


#define _CRT_SECURE_NO_WARNINGS
#include	<stdio.h>
#include	<conio.h>

/*PROTOTYPES*/
float FTYPE(int);
float FluxTotal(int,char,float);
void sortir(int,char,float);

void main(void){	

	char formatp;
	int type,nbing;
	float prix;

	printf("Bienvenue chez nous.\n");

	do{
		printf("Entrez le type de pizza que vous souhaitez (de 1 a 5).\n");
		scanf("%d", &type);
	}while(type < 1 || type > 5);
	
	
	prix = FTYPE(type);

	do{
		printf("Entrez le format de votre Pizza ('N= Normal' 'k= King Size'.)\n");	
		fflush(stdin);
		scanf("%c", &formatp);
	}while(formatp != 'N' && formatp !='K');
	
	do{
	printf("Entrez le nombre d'ingredients supplementaire(s) desire(s).\n");
	scanf("%d", &nbing);
	}while(nbing < 0);

	prix = FluxTotal(prix,formatp,nbing);

	sortir(type,formatp,prix);
	getch();

}

float FTYPE(int type){
	float pbase;
	switch(type){
		case 1:
			pbase=6.5;
			break;
		case 2:
			pbase=7;
			break;
		case 3:
			pbase=8.5;
			break;
		case 4:
			pbase=9;
			break;
		default:
			pbase=10;
	}
	return pbase;

}

float FluxTotal(int prix,char formatp,float nbing){
	float prixtot = prix;
	
	if(formatp == 'K')
		prixtot += ((prix / 100) * 30);
	

	prixtot += nbing*1.20;
	if(prixtot>22)
		prixtot = 22;
	return prixtot;
}

void sortir(int type,char formatp,float prix){
	printf("Prix pour une pizza de type %d, de format %c:\n\t\t\t%.2f\n\n",type,formatp,prix);
}