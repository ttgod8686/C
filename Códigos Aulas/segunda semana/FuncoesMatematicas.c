#include<stdio.h> //cabe�alho padr�o de entrada e sa�da
#include<stdlib.h> //padr�o de sistema
#include<math.h> //cabe�alho fun��es matem�ticas
int main(){
	float base, expoente; //real base, expoente
	printf("\nQual a base? ");
	scanf("%f", &base);
	printf("\nQual o expoente? ");
	scanf("%f", &expoente);
	printf("\nPotencia de %6.2f^%6.2f = %.5f",
	base,expoente,
	pow(base,expoente));
	printf("\nRaiz quadrada de %.2f = %.2f",base, sqrt(base));
	printf("\nRaiz quadrada de %.2f = %.2f",base, pow(base,1.0/2.0));
	return 0;
}
