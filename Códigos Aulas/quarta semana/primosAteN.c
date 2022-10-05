#include<stdio.h>
int main(){
	int i, j, ehprimo, n;
	printf("\nPrimos ate que numero? ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		ehprimo = 1;
		for(j=i-1; j>1; j--){
			if(i%j == 0){ // i é divisivel por j. Então não é primo
				ehprimo = 0;
			}
		}
		if(ehprimo == 1){
			printf("\n%d\t eh primo", i);
		}
	}
	printf("\n\nFIM\n\n");
	return 0;
}
