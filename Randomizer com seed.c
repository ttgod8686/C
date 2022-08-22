#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int i, qtd, seed;
    printf("Quantos numeros para randomizar? ");
    scanf("%d", &qtd);
    printf("\nQual valor maximo da seed? ");
    scanf("%d", &seed);
    for(i = 0; i < qtd; i++)
    {
        printf("\n%d --> %d", (i+1),(rand()%seed)+1);
    }
    return 0;
}
