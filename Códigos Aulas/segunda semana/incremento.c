#include<stdio.h> //cabe�alho padr�o de entrada e sa�da
#include<stdlib.h> //padr�o de sistema
#include<math.h> //cabe�alho fun��es matem�ticas

int main(){
	int numero, i, aux;
	printf("\nQual o n�mero? "); //escreva(...)
	scanf("%d", &numero);  //leia(numero)
	aux = numero;
	for(i=0; i<10; i++){ //para i de 0 ate 9 passo 1 faca
		printf("i = %d\tvalor = %d\n", i, aux);
		aux = aux + numero;
	}
	system("pause");
	return 0;
}
