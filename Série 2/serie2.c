/*programme n°1 plus grand, plus petit ou égal.*/
#include	<stdio.h>
#include	<conio.h>

void choix_a();
void choix_b();
void choix_c();
void choix_d();
void choix_e();
void choix_f();
void choix_g();


void	main(void)
{	
	char choix;
	
	printf("Choisiez l'exercice(a->g): ");
	do
	{
	scanf("%c", &choix);
	}
	while(choix < 'a' || choix > 'g' );

	switch(choix){
	case 'a':
		choix_a();
		break;
	case 'b':
		choix_b();
		break;
	case 'c':
		choix_c();
		break;
	case 'd':
		choix_d();
		break;
	case 'e':
		choix_e();
		break;
	case 'f':
		choix_f();
		break;
	case 'g':
		choix_g();
		break;
	}
	
}

void choix_a(){
	printf("je suis dans la fonction a\n");
}

void choix_b(){
	printf("je suis dans la fonction b\n");
}

void choix_c(){
	printf("je suis dans la fonction c\n");
}

void choix_d(){
	printf("je suis dans la fonction d\n");
}

void choix_e(){
	printf("je suis dans la fonction e\n");
}

void choix_f(){
	printf("je suis dans la fonction f\n");
}

void choix_g(){
	printf("je suis dans la fonction g\n");
}