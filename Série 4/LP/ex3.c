/*
3.	Ecrire la fonction CalculAge qui permet, à partir d’une date de naissance ainsi que de la date du jour (AAAAMMJJ) obtenues dans le programme principal, de déterminer et de transmettre l’âge de la personne (entier).
Le programme principal doit faire appel à la fonction et afficher le message suivant : « Bonjour, vous avez XX ans ».
*/
#define _CRT_SECURE_NO_WARNINGS
#include	<stdio.h>
#include	<stdlib.h>
#include	<conio.h>

int CalculAge(int,int);

void	main(void){


	int DateJour,DateNaiss,age;

	printf("Entrez la date du jour: (JJMMAAAA)");
	scanf("%d", &DateJour);
	
	printf("Entrez votre date de naissance: (JJMMAAAA)");
	scanf("%d", &DateNaiss);
	age = CalculAge(DateJour,DateNaiss);

	printf("Bonjour, vous avez %d ans\n", age);
}

int CalculAge(int DateJour, int DateNaiss){
	int age,mois_aujd,mois_naiss;

	mois_aujd	= (DateJour / 10000)% 100;
	mois_naiss	= (DateNaiss / 10000) % 100;

	age = (DateJour % 10000) - (DateNaiss % 10000);

	if(mois_naiss < mois_aujd){
		age--;
	}
	return age;
}