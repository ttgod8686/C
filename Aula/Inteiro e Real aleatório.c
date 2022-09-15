#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int n, i, maior, menor, nums;
    float aleatorioInt, aleatorioFloat;
    srand(time(NULL));
    
    printf("Quantos aleatorios? ");
    scanf("%d",&n);
    aleatorioInt = rand()%101;
    aleatorioFloat = (float)rand()/((float)RAND_MAX)*101;
    
    if(aleatorioInt > aleatorioFloat){
        maior = aleatorioInt;
        menor = aleatorioFloat;
    }else{
        menor = aleatorioInt;
        maior = aleatorioFloat;   
    }
    printf("Inteiro: %0.f \nReal: %.2f \nNúmeros aleatorios: ", aleatorioInt, aleatorioFloat);

    for(i = 1; i<=n ; i++){
        nums = (rand() % (maior - menor + 1)) + menor;
        printf("%d ", nums);
    }
    return 0;
}
