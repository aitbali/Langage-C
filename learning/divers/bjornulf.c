#include<stdio.h>
int main(void){

	int mon_age=42; // declaration et affectation de la variable mon_age 
	char lettre='a';	
	char nom[10]="Abderrahim";
	printf("Bonjour\nCeci est le résultat du tuto de programmation en langage C par Bjornulf Frode\n\nJe me présente, \'%s\' ",nom);
	printf("et j ai %d ans\n",mon_age);
	printf("notre variable char : %c\n",lettre);
	// boucles
	int i=0;
	while(i<10){
		printf("while\n");
		i=i+1;
	}
	int o;
	for(o=0;o<10;o++){
		printf("for%d\n",o);
	}
	do{
		printf("dododowhile%d\n",o);
		o++;
	}while(o<15);
}
