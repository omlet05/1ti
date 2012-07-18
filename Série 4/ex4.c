/*	ex2:
*/
#include	<stdio.h>
#include	<conio.h>
#include	<stdlib.h>
#include	<time.h>
#define N 10

typedef struct Participant{
	char NomPart[20];
	int ScorePart;
} participant;

int compter(participant []);
void init(participant []);
void sortie1(int);
void sortir500(participant []);
int Max(participant []);
void creationTABNIV(participant [],int[]);
void sortie2(int []);

void main(void)
{
	
	int tabniveau[]={0,0,0,0,0},rep=1;
	int nb100,NumMax;
	do{
	participant tabscore[10]={{"Mathieu",0},{"Loic",0},{"Nicolas",0},{"Roger",0},{"Max",0},{"Emilien",0},{"Jeremy",0},{"Anthony",0},{"Joachim",0},{"Marc",0}};
	srand(time(NULL)); 
	init (tabscore);

	nb100 = compter(tabscore);
	sortie1(nb100);

	sortir500(tabscore);

	NumMax = Max(tabscore);
	printf("Meilleur score: %s avec %d\n",tabscore[NumMax].NomPart,tabscore[NumMax].ScorePart);	
	creationTABNIV(tabscore,tabniveau);

	sortie2(tabniveau);
	printf("Continuer? (0=non 1=oui");
	scanf("%d",&rep);
	}while(rep==1);
	_getch();
}

int compter(participant tab[]){
	int i=0, nb100=0;
	while(i<N){
		if(tab[i].ScorePart==100)
			nb100++;
	i++;
	}
	return nb100;
}

void init(participant tab[]){
	int i;
	for(i=0;i<N;i++)
		tab[i].ScorePart= rand()%800;
}
void sortie1(int nb){
	printf("il y a: %d participant(s) avec 100 points.\n",nb);
}

int Max(participant tab[]){
	int i=0, max=0,NumMax=0;
	
	while(i<N){
		if(tab[i].ScorePart > NumMax){
			NumMax = tab[i].ScorePart;
			max = i;
		}
		i++;
	}
	return max;
}

void sortir500(participant tab[]){
	int i=0, max=0,NumMax=0;
	
	while(i<N){
		if(tab[i].ScorePart > 500)
			printf("Participant: %s avec le score de %d.\n",tab[i].NomPart,tab[i].ScorePart);
		i++;
	}
}
void creationTABNIV(participant tab[],int tabscore[]){
	int i,j;
	for(i=0;i<N;i++){
	tabscore[i]=0;
	}
	for(i=0;i<N;i++){
	j=0;
	if(tab[i].ScorePart >100 && tab[i].ScorePart <= 200)
		j=1;
	else{
		if(tab[i].ScorePart <= 300)
			j=2;
		else{
			if(tab[i].ScorePart <= 400)
				j=3;
			else{
				if(tab[i].ScorePart <= 500)
				j=4;
				else
					j=5;
			}
		}
	}

	switch(j){
		case 1:
			tabscore[0]++;
			break;
		case 2:
			tabscore[1]++;
			break;
		case 3:
			tabscore[2]++;
			break;
		case 4:
			tabscore[3]++;
			break;
		case 5:
			tabscore[4]++;
			break;
	}
	
	}
}

void sortie2 (int tab[])
{
	int i;
	for(i=0;i<5;i++)
		printf("Niveau %d: %d \t",i+1,tab[i]);
}