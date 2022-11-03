#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){
    int vet[100];
	int i, j, colunas=0, linhas=0, n;
	srand(time(NULL));
	
	printf("Quantos tamanho de N? \n");
	scanf("%d", &n);
	
	linhas = sqrt(n);
	colunas = sqrt(n);
	
	for(i=0; i<linhas ; i++){
        for(j=0; j<colunas ; j++){
            vet[i] = rand() % 100;
            printf("\t%d", vet[i]);
        }
        printf("\n\n");
	}
	return 0;
}