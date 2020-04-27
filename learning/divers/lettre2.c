//lettre.c
//affiche voyelle sir var = voyelle , et vice versa
#include<stdio.h>
#include<string.h>
struct personne{
	char nom[10];
	char prenom[10];
	int age;
};

int main(void) {
 char var;
 int i, a=0; 
 printf("choisissez une lettre:\n");
 scanf("%c",&var);
 printf("ooooo%pooooo\n",&var);
    switch(var){
	    case 'a':case 'e':case 'i':case 'o':case'u':
		   printf("voyelle\n");break;
	    default: printf("consonne\n");
     }
  struct personne Moi;
  strcpy(Moi.nom,"Ait Bali");
  strcpy(Moi.prenom,"Abderrahim");
  Moi.age=42;
 printf("je m apelle %s %s et j ai %d\n",Moi.prenom,Moi.nom,Moi.age);
}


