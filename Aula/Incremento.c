#include <stdio.h>

int main()
{
    int i, num, qtd, aux;
    printf("Qual n base? ");
    scanf("%d", &num);
    printf("Quantos n deseja? ");
    scanf("%d", &qtd);
    aux = num;
    
    for(i = 0; i < qtd; i++)
    {
        printf("i = %d\tValor = %d\n", i, aux);
        aux = aux + num;
    }
    return 0;
}
