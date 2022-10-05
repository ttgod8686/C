/*
Crie uma Função que receba 2 números (A e B) e 
retorne a soma de todos os números do intervalo, 
sem considerar A e B
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int somaIntervalo(int A, int B); //prototipo da funcao

int main(){
	int A, B;
	printf("\nQual o valor de A e B? ");
	scanf("%d %d", &A, &B);
	printf("\nA soma e igual a %d\n\n", somaIntervalo(A,B));
	
	return 0;
}
int somaIntervalo(int A, int B){
	int soma = 0, aux, i;
	if(A > B){
		aux = A;
		A = B;
		B = aux;
	}
	for(i=A+1; i<B; i++){
		soma = soma + i;
	}
	return soma;
}

