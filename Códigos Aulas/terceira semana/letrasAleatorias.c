#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main(){
	int i, j, n;
	srand(time(NULL)); //acerta o gerador aleatorio
	/*for(i=0; i<256; i++){
		printf("%d --> %c\n",i, i);
	}*/
	printf("\nDigite a dimensao da matriz ");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%c\t", 65+rand()%26);
		}
		printf("\n\n");
	}
	printf("\n\nAGORA MINUSCULAS\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%c\t", 97+rand()%26);
		}
		printf("\n\n");
	}
	
	return 0;
}

