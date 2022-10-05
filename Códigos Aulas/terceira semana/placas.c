#include<stdio.h> //cabeçalho de e/s
#include<stdlib.h> //cabeçalho padrão sistema
#include<time.h> // cabeçalho de funçoes de tempo

int main(){
	srand(time(NULL)); //corrigir a geracao aleatoria
	int qtd, i;
	printf("\nQuantas placas? ");
	scanf("%d", &qtd);
	for(i=0; i<qtd; i++){
		printf("%c%c%c - %d%c%d%d\n", (65+rand()%26),(65+rand()%26),
		(65+rand()%26),(rand()%10),(65+rand()%26),(rand()%10),(rand()%10));
	}
	return 0;
}
