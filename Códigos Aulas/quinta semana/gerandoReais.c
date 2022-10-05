#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	float numero, divisor;
	int qtd = 0;
	srand(time(NULL));
	numero = 1000.0 + ((float)rand()/(float)RAND_MAX)*9000.0; //gera um numero real entre 1000 e 10000
	printf("\nO numero gerado foi %.30f\n", numero);
	while(numero > 0){
		divisor = 1.0 + ((float)rand()/(float)RAND_MAX)*9.0; //gera um numero real entre 1 e 9
		numero = numero /  divisor;
		qtd++;
	}
	printf("\nO numero foi divido %d vezes\n", qtd);
}
