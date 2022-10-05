#include<stdio.h> //cabeçalho padrão de entrada e saída
#include<stdlib.h> //padrão de sistema
#include<math.h> //cabeçalho funções matemáticas
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
