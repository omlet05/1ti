/*  
	Exercice de préparation pour les chaines de caractères.
*/

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

void	main(void){
	int i=0,len;
	char nom[]="Dupont", pnom[30];
	printf("Encodez une prenom (minuscule):");
	gets(pnom);

	pnom[0]= toupper(pnom[0]);
	printf("Premiere lettre en majuscule:\t%s\n", pnom);

	while(i < 30 && pnom[i]!='\0')
	{
		pnom[i] = toupper(pnom[i]); 
		i++;
	}

	
	printf("Tout en majuscule:\t%s\n", pnom);

	for(i=0;i<30 && pnom[i]!='\0';i++){
			pnom[i] = tolower(pnom[i]); 
		
	}
	printf("Tout en minuscule:\t%s\n", pnom);
	strcat(pnom," ");
	strcat(pnom,nom);
	len = strlen(pnom);
	printf("avec le nom:\t\"%s\" qui contient %d caractere(s)\n", pnom, len);

	getch();
}