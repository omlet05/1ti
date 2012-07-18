#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define NOM 16
#define NE 10
#define N 20
#define NC 4

typedef struct Jeu{
	char pseudo;
	int score;
}celljeu;

void menu(void);
void initJeu(char []);
void obtention(char []);
void copie(char [],char []);
int testBienPlace(char [], char []);
int testMalPlace(char [], char []);
int ajoutTab(char [], int, celljeu[], int);
void afficheTab(celljeu [],int);

void main(void){
	char Rep[NC],pseudoJ[NOM];
	int nj=10,bbp,essai,bmp;
	char TabCombi[NC],TabPropo[NC],TabCombiTest[NC];
	celljeu TabJeu[N];


	printf("Nouvelle partie? OUI/NON: ");
	fflush(stdin);
	gets(Rep);
	
	while(strcmp(Rep,"OUI") == 0){
		system("cls");
		initJeu(TabCombi);
		printf("\n\t\tDebut de la partie\nJoueur - Entrez votre pseudo: ");
		fflush(stdin);
		gets(pseudoJ);
		bbp = 0;
		essai= 1;

		while(bbp < NC && essai <= NE){
			copie(TabCombi,TabCombiTest);
			printf("\nEssai n: %d\n", essai);
			menu();
			obtention(TabPropo);
			bbp = testBienPlace(TabPropo,TabCombiTest);
			printf("bbp = %d\n", bbp);
			bmp = testMalPlace(TabPropo,TabCombiTest);
			printf("bmp = %d\n", bmp);
			printf("\nPions corrects: %d bien place(s) et %d mal place(s)", bbp, bmp);
			essai++;
		}
		if(bbp==4)
			printf("\n%s, vous avez gagne un au bout de %d essai(s) !\n",pseudoJ,essai-1);
		else
			printf("\nVous avez perdu !\n");
		nj = ajoutTab(pseudoJ,bbp,TabJeu,nj);
		
		printf("Nouvelle partie? OUI/NON ");
		fflush(stdin);
		gets(Rep);
	}
	//afficheTab(TabJeu,nj);
}

void menu(void){
	printf("Combinaison composee de 4 pions de couleur - Tapez :\n\t\t\tB pour bleu\n\t\t\tF pour fuchsia \n\t\t\tJ pour jaune\n\t\t\tM pour mauve\n\t\t\tN pour noir\n\t\t\tO pour orange\n\t\t\tR pour rouge\n\t\t\tV pour vert\n");
}

void initJeu(char tab[]){
	int i;
	char Rep[NC];
	menu();
	do{
		for(i=0;i < NC; i++){
			fflush(stdin);
			printf("Case %d: ",i+1);
			gets(tab+i);
		}
		printf("\t\t");
		for(i=0;i < NC; i++){
			printf("|%c", tab[i]);
		}
		printf("|\n");
		printf("Le tableau vous convient? (OUI/NON)");
		fflush(stdin);
		gets(Rep);
	}while(strcmp(Rep,"OUI") != 0);
}
void obtention(char tab[]){
	int i;
	char Rep[NC];

	do{
		for(i=0;i < NC; i++){
			fflush(stdin);
			printf("Case %d: ",i+1);
			gets(tab+i);
		}
		printf("\t\t");
		for(i=0;i < NC; i++){
			printf("|%c", tab[i]);
		}
		printf("|\n");
		printf("Cette proposition vous convient? (OUI/NON)");
		fflush(stdin);
		gets(Rep);
	}while(strcmp(Rep,"OUI") != 0);
}
void copie(char tab1[],char tab2[]){
	int i;
	for(i = 0;i< NC;i++)
		tab2[i]=tab1[i];
//strcpy(tab2,tab1);
}
int testBienPlace(char tab1[],char tab2[]){
	int nb=0;
	int i;
	for(i=0;i < NC;i++){
		if(tab1[i]==tab2[i]){
			nb++;
			tab2[i]='X';
			tab1[i]='Y';
		}
	}
	return nb;
}
int testMalPlace(char tab1[],char tab2[]){
	int i,j,bmp=0;
	for(i = 0;i < NC;i++){
		j=0;
	while(j < NC && tab2[j] != tab1[i])
		j++; 
		if(j < NC){
			bmp++;
			tab2[j]='X';
			tab1[i]='Y';
		}	
	}
	return bmp;
}
int ajoutTab(char tab1[], int score, celljeu tab2[], int nj){
	int i;
	for(i = 0;i < nj && strcmp(tab1,tab2[i].pseudo);i++);
	if(i==nj){
		strcpy(tab2[nj].pseudo,tab1);
		if(score == NC)
			tab2[nj].score=1;
		else tab2[nj].score=0;
		nj++;
	}
	else
		if(score == NC)
			tab2[nj].score+=1;
	return nj;
}

void afficheTab(celljeu tab[],int nj){
	int i;
	for(i=0;i < nj;i++){
	printf("\njoueur1:\nPseudo: %s \t \t Score: %d",tab[i].pseudo,tab[i].score);
	}
}