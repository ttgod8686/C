#include<stdio.h> //cabeçalho de e/s
#include<stdlib.h> //cabeçalho padrão sistema
#include<time.h> // cabeçalho de funçoes de tempo

int main(){
	srand(time(NULL)); //corrigir a geracao aleatoria
	int erros=0, lido, sorteado=-1;
	printf("\nDigite um numero entre 0 e 100 ");
	scanf("%d", &lido);
	while(lido != sorteado){ // enquanto nao sortear
		sorteado = rand()%101; //sorteia um numero entra 0 e 100
		erros++; //erros e incrementado de 1 em 1
	}
	printf("\nO computador acertou seu numero em %d rodadas\n",erros);
	return 0;
}
