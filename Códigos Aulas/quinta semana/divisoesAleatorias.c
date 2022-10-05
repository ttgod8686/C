/*
Faça um programa que gere um número aleatório entre 1000 e 10000 e vá divindo este número
   por números entre 1 e 10 até que o número seja considerado como zero. Imprima cada número 
   com 30 casas decimais.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
int main(){
	float numero, divisor;
	srand(time(NULL));
	int divisoes = 0;
	numero = 1000.0+((float)rand()/(float)RAND_MAX)*9000.0;
	printf("\nO numero gerado foi %.20f\n", numero);
	while(numero > 0){
		divisor = 1.0+((float)rand()/(float)RAND_MAX)*9.0;
		numero = numero / divisor;
		divisoes++;
	}
	printf("\nDividiu %d vezes\n\n", divisoes);
	return 0;
}
