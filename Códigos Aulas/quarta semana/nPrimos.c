#include<stdio.h>
int main(){
	int i, j, ehprimo, n;
	printf("\nQuantos numeros Primos? ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		ehprimo = 1;
		for(j=(i/2); j>1; j--){
			if(i%j == 0){ // i � divisivel por j. Ent�o n�o � primo
				ehprimo = 0;
				break; // para o la�o mais interno (como se j virasse 1)
			}
		}
		if(ehprimo == 1){
			printf("\n%d\t eh primo", i);
		}else{
			n++; //incrementa 1 caso n�o seja primo. (testo um a mais)
		}
	}
	printf("\n\nFIM\n\n");
	return 0;
}
