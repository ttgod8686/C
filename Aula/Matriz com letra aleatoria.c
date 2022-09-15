#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//Matriz com letra aleatoria
int main()
{
    srand(time(NULL));
    int i, j, n;
    printf("Qual dimensão da matriz? " );
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%c\t", 65+rand()%26);
        }
        printf("\n\n");
    }

    return 0;
}
