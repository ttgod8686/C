#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int n1, n2, i, r, c, p;
    
    for(i = 0; i <= 9;){
    n1 = rand()%100;
    n2 = rand()%100;
    c = rand()%4;
    switch(c){
        case 0://Soma
        printf("\nQuanto é %d + %d? ",n1 ,n2);
        r = n1 + n2;
        break;
        case 1://Subtração
        printf("\nQuanto é %d - %d? ",n1 ,n2);
        r = n1 - n2;
        break;
        case 2://Multiplicação
        printf("\nQuanto é %d * %d? ",n1 ,n2);
        r = n1 * n2;
        break;
        case 3://Divisão
        printf("\nQuanto é %d / %d? ",n1 ,n2);
        r = n1 / n2;
        break;
    }
    scanf("%d", &p);
        if(p == r){
            i += 1;
            printf("Voce acertou!\nVoce já acertou %d questões\n", i);
        }else{
            printf("Você errou, tente novamente!\nVoce já acertou %d questões\n",i);
        }
    }
    printf("\nParabens você acertou todas as 10 questões\n");
    return 0;
}
