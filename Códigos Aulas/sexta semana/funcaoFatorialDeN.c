/*
Crie uma função que receba um número e 
retorne o fatorial deste número
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int fatorial(int n);//prototipo da funcao
int A(int B);

int main(){
	int n;
	printf("\nQual o valor para calcular fatorial? ");
	scanf("%d", &n);
	printf("\nFatorial de %d e igual a %d\n\n", n, fatorial(n));
	printf("\nFatorial de %d e igual a %d\n\n", n, A(n));
	return 0;
}

int fatorial(int n){
	int i, fat=1;
	for(i=n; i>1; i--){
		fat = fat * i;
	}
	return fat;
}

int A(int B){ //funcao recursiva
	if(B == 1){
		return 1;
	}else{
		return (A(B-1))*B;
	}
}

