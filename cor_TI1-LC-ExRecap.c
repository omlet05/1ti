# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# define C 4
# define JEU 10
# define LGCH 16
# define NE 4
typedef struct jeu
{
char pseudo[LGCH];
int score;
}jeu;
void initJeu(char[]);
void copie(char [],char[]);
void menu(void);
void obtention(char[]);
int testBienPlace(char tabPropo[],char[]);
int testMalPlace(char[],char[]);
int ajoutTab(char[],int,jeu[],int);
void afficheTab(jeu[],int);
void main(void)
{ char rep[4];
char tabCombi[C],pseudoJ[LGCH],tabCombiTest[C],tabPropo[C];
int nj=0,bmp,bbp,essai;
jeu tabJeu[JEU];
printf("\n nouvelle partie?");
gets(rep);
while(strcmp(rep,"oui")==0)
{
initJeu(tabCombi);
printf("\n entrer votre pseudo");
fflush(stdin);
gets(pseudoJ);
bbp=0;
essai=1;
while(bbp<4 && essai<=NE)
{
copie(tabCombi,tabCombiTest);
printf("\n essai n° %d",essai);
menu();
obtention(tabPropo);
bbp=testBienPlace(tabPropo,tabCombiTest);
bmp=testMalPlace(tabPropo,tabCombiTest);
printf("\n\n pions corrects : %d et %d pions mal placés",bbp,bmp);
essai++;
}
if(bbp==C)
printf("\n %s, vous avez gagné au bout de %d essais",pseudoJ,essai-1);
else
printf("\n vous avez perdu");
nj=ajoutTab(pseudoJ,bbp,tabJeu,nj);	
printf("\n nouvelle partie?");
fflush(stdin);
gets(rep);
}
afficheTab(tabJeu,nj);
}
void initJeu(char tabCombi[])
{
tabCombi[0]='V';
tabCombi[1]='V';
tabCombi[2]='R';
tabCombi[3]='J';
}
void copie(char tabC[],char tabT[])
{
int i;
for(i=0;i<C;i++)
tabT[i]=tabC[i];
}
void menu(void)
{ printf("\n blabla bla");
}
void obtention(char tabPropo[])
{
int i;
for(i=0;i<C;i++)
{
printf("\n encoder la proposition");
fflush(stdin);
tabPropo[i]=getchar();
}
} 
int testBienPlace(char tabPropo[],char tabTest[])
{
int nb=0;
int i;
for(i=0;i<C;i++)
{
if( tabPropo[i]==tabTest[i])
{
nb++;
tabTest[i]='X';
tabPropo[i]='Y';
}
}
return nb;
}
int testMalPlace(char tabPropo[],char tabTest[])
{
int i,iR,bmp=0;
for(i=0;i<C;i++)
{
iR=0;
while(iR<C && tabTest[iR]!=tabPropo[i])
iR++;
if(iR<C)
{
bmp++;
tabTest[iR]='X';
tabPropo[i]='Y';
}	
}
return bmp;
}
int ajoutTab(char pseudoJ[],int bbp,jeu tabJeu[],int nj)
{
int i;
for(i=0;i<nj && strcmp(pseudoJ,tabJeu[i].pseudo);i++);
if(i==nj)
{
strcpy(tabJeu[nj].pseudo,pseudoJ);
if(bbp==C)
tabJeu[nj].score=1;
else tabJeu[nj].score=0;
nj++;
}
else
if(bbp==C)
tabJeu[nj].score+=1;
return nj;
}
void afficheTab(jeu tab[],int nj) 
{
int i;
for(i=0;i<nj;i++)
printf("\n pseudo : %s \t \t score : %d",tab[i].pseudo,tab[i].score);
}