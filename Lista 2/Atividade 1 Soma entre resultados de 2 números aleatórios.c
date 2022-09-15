#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int n[10];
    int a, b, r, i, j, maior, menor;
    a = rand() % 11;
    b = rand() % 11;
    printf("A = %d | B = %d\n",a,b);
    
    if(a > b){
        maior = a;
        menor = b;
    }else{
        maior = b;
        menor = a;
    }

    for(i = menor; i <= maior; i++){
        printf("+ %d ", i);
        j = i;
        r = r + j;
    }
    
    printf("= %d ", r);
    return 0;
}
