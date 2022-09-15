#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//User chutando numero
int main()
{
	srand(time(NULL));
	int numero=-1, sorteado, erros=0;
	sorteado = rand()%101;
	
	while(numero != sorteado)
	{ 
		printf("\nDigite um numero entre 0 e 100: ");
		scanf("%d", &numero);
		if(numero > sorteado)
		{
			printf("\nVc errou, tente um numero menor\n");
		}
		if(numero < sorteado)
		{
			printf("\nVc errou, tente um numero maior\n");
		}
		erros++;
	}
	printf("\nO valor foi acertado em %d tentativas\n",erros);
	return 0;
}
