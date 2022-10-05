#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	float seno=0, x, sinal=1;
	int n, fat, i, j, denominador=1;
	printf("\nQuantas parcelas? ");
	scanf("%d", &n);
	printf("\nQual o valor de x? ");
	scanf("%f", &x);
	for(i=1; i<=n; i++){
		fat=1;
		for(j=denominador; j>1; j--){
			fat = fat * j;
		}
		seno = seno + 1.0/(float)fat*x*sinal;
		sinal = sinal * -1;
		denominador = denominador + 2;
	}
	printf("\nSeno(%.2f) = %.2f\n\n", x, seno);
	return 0;
}

