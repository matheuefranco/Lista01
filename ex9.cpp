#include <stdio.h>

int main(){
	float valor_custo,dist,impostos,custo_final;
	printf("Entre com o valor de custo:");
	scanf("%f",&valor_custo);
	dist= valor_custo *0.25;
	impostos = valor_custo * 0.42;
	custo_final = valor_custo + dist + impostos;
	printf("Custo ao consumidor: R$%.2f",custo_final);
	return 0;
}
