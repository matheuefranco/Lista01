#include <stdio.h>
#include <math.h>
int main(){
	int x;
	float res;
  do{
	printf("Entre com um numero:");
	scanf("%d",&x);
	if(x>0){
		printf("Quadrado: %.2f\n",pow(x,2)); // potencia(base,exp)
		res= sqrt(x); // raiz quadrada
		printf("Raiz quadrada: %.2f\n",res);
	}//fim if
	else
	  printf("Valor nulo ou negativo\n");	
  }while(x>0); // fim while
  return 0;	
}
