#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int i, j, n, m, vet[100];
	srand(time(NULL));
	
	printf("Quantos tamanho de N e M?\n");
	scanf("%d %d", &n, &m);
	
	for(i=0; i<n ; i++){
        for(j=0; j<m ; j++){
            vet[i] = rand() % 100;
            printf("\t%d", vet[i]);
        }
        printf("\n");
	}

	printf("\nFIM");
	return 0;
}