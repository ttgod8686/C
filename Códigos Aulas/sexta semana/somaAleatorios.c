/*
Fa�a um programa que gere um n�mero entre 100 e 500. Ap�s isso gere n n�meros aleat�rios 
   reais entre 0 e 10, somando-os at� que o primeiro n�mero tenha sido atingido. Responda 
   quantos n�meros foram gerados e qual o erro, ou seja, qual a diferen�a entre o n�mero 
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
