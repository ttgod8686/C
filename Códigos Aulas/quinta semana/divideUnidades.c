#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
int main(){
	int numero, resto;
	printf("\nQual o numero? ");
	scanf("%d", &numero);
	while( numero > 0){
		resto = numero % 10;
		if(resto % 2 == 0){
			printf("%d eh par\n", resto);
		}else{
			printf("%d eh impar\n", resto);
		}
		numero = numero / 10;
	}
	return 0;
}
