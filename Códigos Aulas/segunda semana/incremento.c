#include<stdio.h> //cabeçalho padrão de entrada e saída
#include<stdlib.h> //padrão de sistema
#include<math.h> //cabeçalho funções matemáticas

int main(){
	int numero, i, aux;
	printf("\nQual o número? "); //escreva(...)
	scanf("%d", &numero);  //leia(numero)
	aux = numero;
	for(i=0; i<10; i++){ //para i de 0 ate 9 passo 1 faca
		printf("i = %d\tvalor = %d\n", i, aux);
		aux = aux + numero;
	}
	system("pause");
	return 0;
}
