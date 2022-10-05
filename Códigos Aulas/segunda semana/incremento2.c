#include<stdio.h> //cabeçalho padrão de entrada/saída
#include<stdlib.h> //cabeçalho sistema

int main(){
	int i, num, qtd, aux;
	printf("\nQual o número base? ");
	scanf("%d", &num);
	printf("\nQuantos números deseja? ");
	scanf("%d", &qtd);
	aux = num;
	for(i=0; i<qtd; i++){ //para i de 0 ate qtd-1 passo 1 faca
		printf("i = %d\tvalor = %d\n",i, aux);
		aux = aux + num; // acumulador
	}
	system("pause"); //comando do Wndows de pausa
	return 0;
}

