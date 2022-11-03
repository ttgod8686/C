#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j;
    float n, min, max, aleatorio;
    srand(time(NULL)); 
    
    n = rand()%10+1;
    
    min = n;
    max = n*2;
    printf("N = %.f", n);

    for(i = 0; i < n ; i++){
        printf("\n");
        for(j = 0; j < n ; j++){
            printf("\t%.2f",  (min + 1) + (((float) rand()) / (float) RAND_MAX) * (max- (min +1)));
        }
        printf("\n");
    }
    return 0;
}
