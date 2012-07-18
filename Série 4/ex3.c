/*	ex2:
*/
#include	<stdio.h>
#include	<conio.h>
#define N 10

int compter(int []);
void init(int []);
void sortie1(int);
void sortir500(int []);
int Max(int []);
void creationTABNIV(int [],int[]);
void sortie2(int []);

void main(void)
{
	int tabscore[N]={100,5,644,100,250,350,645,10,245,654}, tabniveau[]={0,0,0,0,0};
	int nb100,NumMax;
	//init (tabscore);

	nb100 = compter(tabscore);



	sortie1(nb100);

	sortir500(tabscore);

	NumMax = Max(tabscore);



	creationTABNIV(tabscore,tabniveau);

	sortie2(tabniveau);

	_getch();
}

int compter(int tab[]){
	int i=0, nb100=0;
	while(i<N){
		if(tab[i]==100)
			nb100++;
	i++;
	}
	return nb100;
}

void init(int tab[]){
	int i;
	for(i=0;i<N;i++)
		tab[i]=1;
}
void sortie1(int nb){
	printf("%d",nb);
}

int Max(int tab[]){
	int i=0, max=0,NumMax=0;
	
	while(i<N){
		if(tab[i] > max){
			max=tab[i];
			NumMax=i+1;
		}
		i++;
	}
	return max;
}

void sortir500(int tab[]){
	int i=0, max=0,NumMax=0;
	
	while(i<N){
		if(tab[i] > 500)
			printf("\nParticipant: %d avec le score de %d.\n",i+1,tab[i]);
		i++;
	}
}
void creationTABNIV(int tab[],int tabscore[]){
	int i,j;
	for(i=0;i<N;i++){
	j=0;
	if(tab[i]>100 && tab[i] <= 200)
		j=1;
	else{
		if(tab[i]<=300)
			j=2;
		else{
			if(tab[i]<=400)
				j=3;
			else{
				if(tab[i]<=500)
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
	printf("Niveau %d: %d",i+1,tab[i]);
}