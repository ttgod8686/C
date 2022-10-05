#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main(){
	double pi=0, denominador=1.0, sinal=1.0;
	int i, n;
	printf("\nQuantos elementos? ");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		pi = pi + 1.0/denominador*sinal;
		sinal = sinal * -1;
		denominador = denominador + 2.0;
	}
	pi = pi * 4.0;
	printf("\nPi calculado = %.15lf\n", pi);
	printf("\nPi real = %.15lf\n", M_PI);
	printf("\nErro = %.15lf\n", pi-M_PI);
	return 0;
}
