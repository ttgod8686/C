#include<stdio.h>

int fatorial(int n); //prototipo da funcao

int main(){ //funcao principal
	int n;
	printf("\nQual o valor para testar o fatorial? ");
	scanf("%d", &n);
	printf("\nO fatorial de %d e %d\n\n", n, fatorial(n));
	return 0;
}

int fatorial(int n){ // funcao que calcula fatorial de n
	int i, fat=1;
	for(i=n; i>=1; i--){
		fat = fat * i;
	}
	return fat;
}
