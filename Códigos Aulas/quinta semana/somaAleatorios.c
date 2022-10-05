/*
Faça um programa que gere um número entre 100 e 500. Após isso gere n números aleatórios 
   reais entre 0 e 10, somando-os até que o primeiro número tenha sido atingido. Responda 
   quantos números foram gerados e qual o erro, ou seja, qual a diferença entre o número 
   gerado aleatoriamente e os somados.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
int main(){
	srand(time(NULL));
	float numero, aleatorio, soma=0;
	int qtd=0;
	numero = 100.0+((float)rand()/(float)RAND_MAX)*400.0;
	printf("\nO numero gerado foi %.10f\n",numero);
	while(soma <= numero){
		aleatorio = ((float)rand()/(float)RAND_MAX)*10.0; //gera numero real entre 0 e 10
		soma = soma + aleatorio;
		qtd++;
	}
	printf("\nForam gerados %d numeros\n", qtd);
	printf("\nO erro foi de %.10f\n\n", (soma - numero));
	return 0;
}
