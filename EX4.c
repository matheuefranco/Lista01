#include <stdio.h>
#define PI 3.1416
int main(){
//	float const pi = 3.1416;
	float raio,altura,area;
	printf("Entre com o raio e altura do cilindro:");
	scanf("%f%f",&raio,&altura);
	area = 2*PI*raio*(raio+altura);
	printf("Area do cilindro:%.2f\n",area);
	printf("Resuldado eh:%.2f",area);
	return 0;
}
