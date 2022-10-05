#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	float numero, soma=0, aleatorio;
	int qtd = 0;
	srand(time(NULL));
	numero = 100.0+((float)rand()/(float)RAND_MAX)*400.0;
	while(soma <= numero){
		aleatorio = ((float)rand()/(float)RAND_MAX)*10;
		soma = soma + aleatorio;
		qtd++;
	}
	printf("\nO valor gerado foi %.20f\n", numero);
	printf("\nFoi atingido depois de %d aleatorios\n", qtd);
	printf("\nO erro foi de %.20f\n", (soma-numero));
}
