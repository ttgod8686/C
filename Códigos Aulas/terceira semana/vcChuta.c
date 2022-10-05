#include<stdio.h> //cabeçalho de e/s
#include<stdlib.h> //cabeçalho padrão sistema
#include<time.h> // cabeçalho de funçoes de tempo

int main(){
	srand(time(NULL)); //corrigir a geracao aleatoria
	int erros=0, lido=-1, sorteado;
	sorteado = rand()%101;
	while(lido != sorteado){ // enquanto nao sortear
		printf("\nDigite um numero entre 0 e 100 ");
	 	scanf("%d", &lido);
	 	if(lido > sorteado){
	 		printf("\nVc errou\nO numero e menor\n");
	 		erros++; //erros e incrementado de 1 em 1
		}
		if(lido < sorteado){
	 		printf("\nVc errou\nO numero e maior\n");
	 		erros++; //erros e incrementado de 1 em 1
		}
	}
	printf("\nVc acertou o numero em %d rodadas\n",erros);
	return 0;
}
