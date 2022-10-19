#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, n;
    srand(time(NULL));
    
    printf("Quantos n? ");
    scanf("%d", &n);
    
    int vet[n];
    
    for(i = 0; i < n ; i++){
        vet[i] = rand()%100;
    }
    
    for(i = 0; i < n ; i++){
        printf("\n%d > %d", i+1, vet[i]);
    }
    printf("\nFIM");
    
    return 0;
}
