//lettre.c
//affiche voyelle sir var = voyelle , et vice versa
#include<stdio.h>
int main(void) {
 char var[1]={0};
 int i, a=0;
 printf("choisissez une lettre:\n");
 scanf("%c", var);
 char voyelles[6]="aeiouy";
 for(i=0;i<6;i++){
  if(var[0]==voyelles[i]){
    printf("%c est une voyelle\n",var[0]);
    a=1;
  }
 }
 if(a==0){printf("%c est une consonne\n",var[0]);}
}

