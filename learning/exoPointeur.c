#include<stdio.h>
void inverser(int *a,int *b){
	int c;
	c=*a;
	printf("valeur de c : %d\n",c);
	*a=*b;
	printf("valeur de a : %d\n",*a);
	*b=c;
}
int main(void){
	int a=1;
	int b=2;
	printf("a:%d\nb:%d\n",a,b);
	inverser(&a,&b);
	printf("a:%d\nb:%d\n",a,b);
}
