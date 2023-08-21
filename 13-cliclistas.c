#include <stdio.h>

int main(){
	int c1=0,c2=2000,tempo=0,d1=0,d2=0;
	do{
		c1+=10;
		c2-=15;
		tempo++;
		printf("Posicao ciclista 1: %d m\n",c1);
		printf("Posicao ciclista 2: %d m\n",c2);
	}while(c2>c1);
	printf("Ciclista 1 percorreu %d metros\n",c1);
	printf("Ciclista 2 percorreu %d metros\n",2000-c2);
	return 0;
}


