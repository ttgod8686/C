/*
Crie uma Função que receba 2 números (A e B) e 
retorne a soma de todos os números do intervalo, 
sem considerar A e B
*/
#include<stdio.h>
int somaIntervalo(int A, int B); // prototipo da funcao

int main(){
	int A, B;
	printf("\nDigite os valores de A e B ");
	scanf("%d %d", &A, &B);
	printf("\nA soma e igual a %d\n\n",somaIntervalo(A,B));
}

int somaIntervalo(int A, int B){ // funcao
	int soma = 0, i, aux;
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
