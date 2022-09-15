#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//Computador acertar o numero
int main(){
	srand(time(NULL)); //corrigir a geracao aleatoria
	int erros=0, lido, sorteado=-1;
	printf("Digite um numero entre 0 e 100\n");
	scanf("%d", &lido);
	while(lido != sorteado){
		sorteado = rand()%101;
		printf("\nNumero: %d   Bot chutou: %d", lido, sorteado);
		erros++;
	}
	printf("\nO computador acertou seu numero em %d rodadas\n",erros);
	return 0;
}
