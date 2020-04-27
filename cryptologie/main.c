//Projet 1 chaine youtube Bjornufl Frode 
//Langage C - Avancé 1 ; sujet cryptographie
#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
  unsigned char TAILLE=strlen(argv[1]);
  unsigned char PHRASE[TAILLE]; int i=0;
  strcpy(PHRASE,argv[1]);
  printf("\nAVANT: %s\n",PHRASE);
  /*-----ROT 13-----*/
  for(i=0;i!=TAILLE;i++){
    printf("%d > ",PHRASE[i]);
    PHRASE[i]=PHRASE[i]+13;
      if(PHRASE[i]>127){
        PHRASE[i]=PHRASE[i]-96;// -128 + 32
      }
    printf("%d _",PHRASE[i]); 
  }  
  /*-----------------------*/  
  printf("\nAPRÉS : %s\n",PHRASE);
  
  for(i=0;i!=TAILLE;i++){
    printf("%d > ",PHRASE[i]);
      if((PHRASE[i]-13)<32){
        PHRASE[i]=PHRASE[i]+83;// i+96 -13
      }
      else{PHRASE[i]=PHRASE[i]-13;}
    printf("%d _ ",PHRASE[i]); 
  }  
  /*-----------------------*/  
  printf("\nREWINDED : %s\n",PHRASE);
  
  /*----cryptage avec clef-----*/
  unsigned char CLEF[]="~oopopo`";int x=0;int k=0;
  unsigned char TAILLECLEF=strlen(CLEF);
   
  for(i=0;i!=TAILLE;i++){
    if(x==TAILLECLEF){x=0;}
    k=CLEF[x]%96;  
    printf("%d > ",PHRASE[i]);
    PHRASE[i]=PHRASE[i]+k;
      if(PHRASE[i]>127){
        PHRASE[i]=PHRASE[i]-96;// -128 + 32
      }
    printf("%d _ ",PHRASE[i]);
    x++; 
  }  

  printf("\nCrypted With Key : %s\n",PHRASE);



} 
