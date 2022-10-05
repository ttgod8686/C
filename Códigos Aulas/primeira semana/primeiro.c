// Online C compiler to run C program online
#include <stdio.h>
/*
linhas de comentario
bla bla bla
*/
int main() { //metodo principal
    printf("Vamos somar...\n"); //escreva("Vamos somar... ")
    printf("\n\t\tDigite o primeiro número ");
    int n1, n2;
    scanf("%d", &n1); //leia(n1)
    printf("\n\t\tDigite o segundo número ");
    scanf("%d", &n2); //leia(n2)
    printf("\n%d + %d = %d\n",n1, n2, (n1+n2));
    float n3, n4, multi;
    printf("\n\t\tDigite o terceiro número ");
    scanf("%f", &n3);
    printf("\n\t\tDigite o quarto número ");
    scanf("%f", &n4);
    multi = n3*n4;
    printf("\n%6.2f * %6.3f = %.20f\n", n3, n4, multi);
    return 0;
}
