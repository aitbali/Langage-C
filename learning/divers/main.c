#include<stdio.h>
int main(void) {
	int Abdel_age;
	Abdel_age=41;
	char lettre;
	lettre='a';
	char nom[10]="AitBali";
	printf("\tAge de Abdel \"%s\" : %d %c\n", nom,Abdel_age/20+Abdel_age%20,lettre);
	//Condition
	if(Abdel_age==41){
		printf("\tok\n");
	}
	//Boucle
	int i=0;
	while(i<=Abdel_age){
		printf("%d\tAge de Abdel \"%s\" : %d %c\n",i,nom,Abdel_age,lettre);
	i++;
	}
	for(i=0;i<=Abdel_age;i++){
		printf("%dfor\n",i);
	}
}
