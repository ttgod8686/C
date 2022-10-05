#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int numero=-1, sorteado, erros=0;
	sorteado = rand()%101;
	while(numero != sorteado){ //enquanto(numero <> sorteado) faca
		printf("\nDigite um numero entre 0 e 100 ");
		scanf("%d", &numero);
		if(numero > sorteado){
			printf("\nVc errou\nO numero e menor\n");
		}
		if(numero < sorteado){
			printf("\nVc errou\nO numero e maior\n");
		}
		erros++;
	} //fim do enquanto
	printf("\nO valor foi acertado ap%cs %d sorteios\n",162,erros);
	return 0;
}
