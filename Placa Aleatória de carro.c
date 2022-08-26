#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//Placa de carro aleatoria
int main()
{
	srand(time(NULL)); //corrigir a geracao aleatoria
	int qtd, i;
	printf("\nQuantas placas? ");
	scanf("%d", &qtd);
	
	for(i=0; i<qtd; i++)
	{
		printf("%c%c%c-%d%c%d%d\n", (65+rand()%26), (65+rand()%26), (65+rand()%26), (rand()%10), (65+rand()%26), (rand()%10), (rand()%10));
	}
	return 0;
}
