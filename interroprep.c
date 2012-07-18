/*programme d'interro avec tab et fct 
	1.ftc garnir
	2.fct calcul moy
	3.fct calcul max
	4.fct Sortie  
*/
#include	<stdio.h>
#include	<conio.h>


void doubler(int []);
float calcmoy(int []);
int calcmax(int []);
void sortie(float, int);

void main(void)
{
	int tabnb[10]={14,2,1,25,4,6,4,8,11,21};
	float moy;
	int max;
	
	doubler(tabnb);

	moy = calcmoy(tabnb);

	max = calcmax(tabnb);

	sortie(moy, max);
}

void doubler(int tabnb[]){
	int i;

	for(i=0;i<10;i++){
		tabnb[i] *= 2;
	}
}

float calcmoy(int tabnb[]){
	float moy;
	int i;
	
	for(i=0,moy=0;i<10;i++){
		moy += tabnb[i];
	}
	moy /= 10;
	return moy;
}
int calcmax(int tabnb[]){
	int max,i;

	for(i=0,max=0;i<10;i++){
		if(tabnb[i]> max)
			max = tabnb[i];
	}
	return max;
}
void sortie(float moy, int max){
	
	printf("\n\tLa moyenne vaut: %.2f.\n\t Le maximum est %d",moy,max);
	getch();
}