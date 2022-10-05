#include<stdio.h> //cabeçalho padrão de entrada/saída
#include<stdlib.h> //cabeçalho sistema
#include<math.h> //cabeçalho de funções matemáticas
#include<time.h> //cabeçalho de tempo

int main(){
	srand(time(NULL));//correção da geração de aleatórios do C
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
