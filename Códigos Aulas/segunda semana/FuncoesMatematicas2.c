#include<stdio.h> //cabe�alho padr�o de entrada/sa�da
#include<stdlib.h> //cabe�alho sistema
#include<math.h> //cabe�alho de fun��es matem�ticas

int main(){
	float x, y, resultado;
	printf("\nQual os valores de x e y? ");
	scanf("%f %f", &x, &y);
	resultado = pow(x, y); //potencia de x elevado a y
	printf("\n%6.2f^%6.3f = %.10f",x, y, resultado);
	resultado = sqrt(x); //raiz quadrada de x
	printf("\nRaiz de %.2f = %.5f", x, resultado);
	resultado = pow(x, (1.0/2.0)); // raiz de indice
	printf("\nRaiz de %.2f = %.5f", x, resultado);
}
