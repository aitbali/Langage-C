//fgets, fgetc
#include<stdio.h>
int main(void){
  char chaine[100];
  FILE *fichier=NULL;
  char caractere;
  fichier=fopen("BT.txt","r");
  caractere=fgetc(fichier);
  
  while(fgets(chaine,100,fichier)!=NULL){
          printf("%s",chaine);
  }

  rewind(fichier);

  printf("LE 1er CARACTERE~~~~%c\n\n",caractere);
  while( (caractere=fgetc(fichier)) != EOF){
	  printf("%c",caractere);
  }
  fclose(fichier);
  
}
