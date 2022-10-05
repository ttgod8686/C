#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
int main(){
	int i, j, n, ehprimo;
	printf("\nPrimos ate que numero? ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		ehprimo = 1;
		for(j=(i/2); j>1; j--){
			if(i%j == 0){
				ehprimo = 0;
				break; // interrompe o laco mais interno
			}
		}
		if(ehprimo == 1){
			printf("\n%d eh primo", i);
		}
		
	}
	printf("\n\nFIM\n\n");
	return 0;
}
