#include <stdio.h>

int main(){
	int dia;
  do{
	printf("Entre com um numero entre 1 e 7:");
	scanf("%d",&dia);
	switch(dia){
		case 1:printf("Domingo..\n");
		break;
		case 2:printf("Segunda\n");
		break;
		case 3:printf("Terca\n");
		break;
		case 4:printf("Quarta\n");
		break;
		case 5:printf("Quinta\n");
		break;
		case 6:printf("Sexta\n");
		break;
		case 7:printf("Sabado\n");
		break;
		case 0:printf("saindo...\n");
		break;
		default: printf("Dia invalido\n");
	}// fim switch
 }while(dia!=0);
	return 0;
}
