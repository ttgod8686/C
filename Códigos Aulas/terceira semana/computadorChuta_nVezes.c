#include<stdio.h> //cabeçalho de e/s
#include<stdlib.h> //cabeçalho padrão sistema
#include<time.h> // cabeçalho de funçoes de tempo

int main(){
	srand(time(NULL)); //corrigir a geracao aleatoria
	int erros=0, lido, sorteado, qtd, n=0;
	printf("\nDigite um numero entre 0 e 100 ");
	scanf("%d", &lido);
	printf("\nQuantas vezes quer que ela seja sorteado? ");
	scanf("%d", &qtd);
	while(n<qtd){ // enquanto nao sortear
		sorteado = rand()%101; //sorteia um numero entra 0 e 100
		erros++; //erros e incrementado de 1 em 1
		if(lido == sorteado){
			n++; //n = n + 1; 
		}
	}
	printf("\nO computador acertou %d vezes seu numero em %d rodadas\n",qtd, erros);
	return 0;
}
