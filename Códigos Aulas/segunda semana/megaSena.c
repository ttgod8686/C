#include<stdio.h>
#include<stdlib.h>
#include<time.h> //cabeçalho de tempo

int main(){
	int n, i;
	srand(time(NULL)); //zera o cronometro de geracao aleatoria
	printf("\nQuantos numeros? ");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		printf("%d numero gerado --> %d\n",i+1, (rand()%60)+1);
	}
	return 0;
}
