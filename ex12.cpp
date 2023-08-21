#include <stdio.h>

int main(){
	int idade;
	while(1){
	printf("Idade:");
	scanf("%d",&idade);
	if(idade<16)
	  printf("Nao eleitor\n");
	else 
	  if( idade >=18 && idade <=65)  
	       printf("Eleitor obrigatorio\n");
	   else 
	     printf("Facultativo\n");
   }// fim while
	return 0;
}
