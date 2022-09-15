#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    int n, i, maior, menor, aleatorioInt;
    float aleatorioFloat, nums;
    srand(time(NULL));
    
    printf("Quantos aleatórios? ");
    scanf("%d", &n);
    aleatorioInt = rand()%101;
    aleatorioFloat = (float)rand()/((float)RAND_MAX)*101;
    
    printf("Inteiro: %d \nReal: %.2f \nNumeros aleatórios: ", aleatorioInt, aleatorioFloat);
    
    if(aleatorioInt > aleatorioFloat){
        maior = aleatorioInt;
        menor = aleatorioFloat;
    }else{
        menor = aleatorioInt;
        maior = aleatorioFloat;
    }

    for(i = 0; i < n; i++){
        nums = ((maior - menor) * ((float)rand() / RAND_MAX)) + menor;
        printf("%.2f ", nums);
    }

    return 0;
}
