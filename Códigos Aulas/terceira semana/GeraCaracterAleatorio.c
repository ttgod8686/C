#include<stdio.h> //cabe�alho de e/s
#include<stdlib.h> //cabe�alho padr�o sistema
#include<time.h> // cabe�alho de fun�oes de tempo

int main(){
	srand(time(NULL)); //corrigir a geracao aleatoria
	int i, j, n;
	/*for(i=0; i<256; i++){
		printf("%d --> %c\n",i,i);
	}
	*/
	printf("\nQual a dimensao da matriz? ");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%c\t", 65+rand()%26);
		}
		printf("\n\n");
	}
	printf("\n\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%c\t", 97+rand()%26);
		}
		printf("\n\n");
	}
	return 0;
}
