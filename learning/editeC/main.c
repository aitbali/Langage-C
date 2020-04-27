// fopen ----> fprint / fscanf ------> fclose
// r   w   a      rw
#include<stdio.h>
int main(void){

char ch1[20];
char ch2[20];
char ch3[20];
FILE *fichier=NULL;
fichier=fopen("file.txt","rw");
//if(fichier==NULL){
//	printf("Le fichier n existe pas!!\n");
//	return 1;
//}
//fprintf(fichier,"oooo");

fscanf(fichier,"%s %s %s",ch1, ch2, ch3);
printf("Ca marche!!!\n");
printf("%s %s %s\n",ch1, ch2, ch3);
fclose(fichier);
return 0;
}
