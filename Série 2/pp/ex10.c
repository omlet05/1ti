/*programme n°10 bancontact.*/
#include	<stdio.h>
#include	<conio.h>

void	main(void)
{	
	int codedef=77, code, choix;
	
	printf("Entrez votre code secret: ");
	scanf("%d", &code);

	if(code != codedef){
		printf("Code non valide.\n");
	}
	else{
		printf("1.Fin - 2.Retrait - 3.Proton - 4.Solde - 5.Virements\n");
		scanf("%d", &code);

		switch(choix){
		case 1:
			printf("Fin\n");
			break;
		case 2:
			printf("Retrait\n");
			break;
		case 3:
			printf("Proton\n");
			break;
		case 4:
			printf("Solde\n");
			break;
		case 5:
			printf("Virements\n");
			break;
		default:
			printf("Choix invalide\n");
			break;
		
		}
	}
	
	getch();
}