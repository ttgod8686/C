#include<stdio.h> //cabe�alho padr�o de entrada/sa�da
#include<stdlib.h> //cabe�alho sistema
#include<math.h> //cabe�alho de fun��es matem�ticas
#include<time.h> //cabe�alho de tempo

int main(){
	srand(time(NULL));//corre��o da gera��o de aleat�rios do C
	int i, qtd, semente;
	printf("\nQuantos numeros? ");
	scanf("%d", &qtd);
	printf("\nQual a semente para aleatorios? ");
	scanf("%d", &semente);
	for(i=0; i<qtd; i++){
		printf("%d --> %d\n",(i+1),(rand()%semente)+1);
	}
	return 0;
}
