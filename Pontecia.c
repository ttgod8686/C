#include <stdio.h>
#include <math.h>

int main()
{
    int numero, expoente, potencia, i;

    printf("Qual o seu número?\n");
    scanf("%d", &numero);
    printf("Qual o seu expoente?\n");
    scanf("%d", &expoente);

    potencia = pow(numero,expoente);
    printf("\n%d elevado a %d é: %d\n\n", numero, expoente, potencia);
    for(i = 0; i < expoente; i++){
        printf("%d ",  numero);
       if(i != expoente - 1)
           printf("* ");
    }
    printf("= %d",potencia);
    
    return 0;
}
