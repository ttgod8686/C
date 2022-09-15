#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    
    int opcao, a, b, n, i, maior, menor, aleatorioInt;
    float aleatorioFloat, nums;
    srand(time(NULL));

    while(1)
    {
            
        printf("1 - Gerar aleatório inteiro entre A e B\n");
        printf("2 - Gerar aleatório real entre A e B\n");
        printf("3 - Gerar n aleatórios entre A e B.\n");
        printf("4 - Sair do programa\n");
        scanf("%d", &opcao);
    
        switch(opcao){
            case 1:
                printf("\nQual valor de A e B? ");
                scanf("%d %d", &a, &b);
                if(a > b){
                    maior = a;
                    menor = b;
                }else{
                    maior = b;
                    menor = a;
                }
                aleatorioInt = (rand() % (maior - menor + 1)) + menor;
                printf("%d\n\n", aleatorioInt);
            break;
        
            case 2:
                printf("\nQual valor de A e B? ");
                scanf("%d %d", &a, &b);
                if(a > b){
                    maior = a;
                    menor = b;
                }else{
                    maior = b;
                    menor = a;
                }
                aleatorioFloat = (menor + 1) + (((float) rand()) / (float) RAND_MAX) * (maior - (menor + 1));
                printf("%.2f\n\n", aleatorioFloat);
            break;
        
            case 3:
                printf("\nQual valor de A e B? ");
                scanf("%d %d", &a, &b);
                printf("Quantos numeros aleatorios? ");
                scanf("%d", &n);
                if(a > b){
                    maior = a;
                    menor = b;
                }else{
                    maior = b;
                    menor = a;
                }
                for(i = 1; i <= n; i++){
                aleatorioFloat = (menor + 1) + (((float) rand()) / (float) RAND_MAX) * (maior - (menor + 1));
                printf("%.2f  ", aleatorioFloat);
                }
                printf("\n\n");
            break;
        
            case 4:
                exit(1);
            break;
        }
    }
    return 0;
}
