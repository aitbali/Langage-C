#include<stdio.h>
int main(int argc, char *argv[]){
	// *argv[] ets un tableau de pointeurs
	printf("\nargv[0] affiche chemin fichier: %s\n",argv[0]);    
	printf("\nargv[1] affiche \"%s\" : ce qui est envoyé en argument:\n",argv[1]);    
	printf("%s\n",argv[0]);    
}
