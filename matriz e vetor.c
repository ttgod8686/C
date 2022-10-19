#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, linhas, colunas;
    srand(time(NULL));
    
    printf("Quantas linhas e colunas? ");
    scanf("%d %d", &linhas, &colunas);
    
    int matriz[linhas][colunas];
    
    for(i=0 ; i<linhas ; i++){
        for(j=0 ; j<colunas ; j++){
            matriz[i][j] = rand()%100;
        }
    }
    
    for(i=0 ; i<linhas ; i++){
        for(j=0 ; j<colunas ; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
