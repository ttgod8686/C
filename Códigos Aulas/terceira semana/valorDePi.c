#include<stdio.h> //cabeçalho de e/s
#include<stdlib.h> //cabeçalho padrão sistema
#include<math.h>

int main(){
	int qtd, i;
	double denominador = 1.0, sinal = 1.0, pi=0;
	printf("\nQuantas parcelas deseja? ");
	scanf("%d", &qtd);
	for(i=0; i<qtd; i++){
		pi = pi + (1.0/denominador)*sinal;
		denominador = denominador + 2.0; //denominador+=2.0;
		sinal = sinal * - 1.0; //sinal*=-1;
	}
	pi = pi*4;
	printf("\nO valor de Pi calculado eh %.20f\n", pi);
	printf("\nO valor de Pi real eh %.20f\n", M_PI);
	printf("\nO erro de Pi eh %.20f\n", pi-M_PI);
	return 0;
}

