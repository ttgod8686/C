#include<stdio.h> //cabe�alho padr�o de entrada/sa�da
#include<stdlib.h> //cabe�alho sistema

int main(){
	int i, num, qtd, aux;
	printf("\nQual o n�mero base? ");
	scanf("%d", &num);
	printf("\nQuantos n�meros deseja? ");
	scanf("%d", &qtd);
	aux = num;
	for(i=0; i<qtd; i++){ //para i de 0 ate qtd-1 passo 1 faca
		printf("i = %d\tvalor = %d\n",i, aux);
		aux = aux + num; // acumulador
	}
	system("pause"); //comando do Wndows de pausa
	return 0;
}

