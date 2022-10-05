#include<stdio.h>
int main(){
	int numero, resto;
	printf("\nQual o numero? ");
	scanf("%d", &numero);
	while(numero > 0){ // enquanto nao dividir todo o numero
		resto = numero%10; // recebe o resto do numero por 10
		if(resto%2 == 0){ // eh um numero par
			printf("%d eh par\n",resto);
		}else{
			printf("%d eh impar\n",resto);
		}
		numero = numero/10; // como numero eh inteiro, pega a parte inteira e trunca a decimal
	}
	return 0;
}
