#include<stdio.h> //cabe�alho de e/s
#include<stdlib.h> //cabe�alho padr�o sistema

int main(){
	int A=0, B=1, C= 1, i, n;
	printf("\nQuantos numeros da serie de Fibonacci? ");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		printf("%d\t",C);
		C = A + B;
		A = B;
		B = C;
	}
	return 0;
}
