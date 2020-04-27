#include<stdio.h>
int main(void){
	char mot[10]="Abderrahim";
	printf("%s\n",mot); //    mot est l adresse de depart de mot
	printf("%s\n",&mot[0]);// &mot[0] et l adresse de mot[0]
	printf("%s\n",&mot[1]);// &mot[1] est l adresse de mot[1]
	printf("%s\n",mot+1);//   mot+1 est l adresse de depart de mot +1
	printf("%c\n",mot[1]);//  mot[1] est l adresse de "b"
	printf("%c\n",*(mot+1));//*(mot+1) est un pointeur qui indispensable poiur pointer un caractere

			}
