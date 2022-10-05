#include<stdio.h> //cabeçalho padrão de entrada/saída
#include<stdlib.h> //cabeçalho sistema
#include<math.h> //cabeçalho de funções matemáticas

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
