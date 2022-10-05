#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int numero, sorteado=-1, erros=0;
	printf("\nDigite um numero entre 0 e 100 ");
	scanf("%d", &numero);
	while(numero != sorteado){ //enquanto(numero <> sorteado) faca
		sorteado = rand()%101;
		erros++;
	} //fim do enquanto
	printf("\nO valor foi acertado ap%cs %d sorteios\n",162,erros);
	return 0;
}
