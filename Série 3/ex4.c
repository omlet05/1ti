/*programme n°4s3 Module*/
#include	<stdio.h>
#include	<conio.h>

void	main(void)
{		
	int Nbetud=0, NbModMoy=0, Max=0, NbMod=0, Num=0;
	float Moy=0;
	char Nom,NomMax='z';
	printf("Entrez la premiere lettre du prenom: (z=> fin)\n");
	scanf("%c", &Nom);
	if(Nom != 'z'){
	do
	{
		
		NbMod=0;
		printf("\nEntrez le nombre de module auquel vous participez: (0 => fin)");
		scanf("%d", &Num);
		if(Num != 0){
			do
			{
				NbMod++;
				if(Num != 0){
				printf("\nEntrez le nombre de module auquel vous participez: (0 => fin)");
				scanf("%d", &Num);
				}
			}while(Num != 0);

			Nbetud++;
			printf("\n%c inscript a %d module(s)",Nom,NbMod);

			if(NbMod > Max)
			{
				Max = NbMod;
				NomMax = Nom;
			}
			NbModMoy+=NbMod;
			printf("\nEntrez la premiere lettre du prenom: (z=> fin)");
			scanf("%c", &Nom);
		}
		}while(Nom != 'z');
	}
	if(Nbetud != 0){
		Moy = NbModMoy / Nbetud;
		printf("il y a %d etudiants inscrits\n l'eleve qui a le plus de module(%f) est %c",Nbetud,Moy,NomMax);
	}
	else
		printf("Aucun etudiant n'est inscrit.");
	getch();
}