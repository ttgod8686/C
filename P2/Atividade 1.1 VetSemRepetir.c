#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int numero[100], i, j, n;
    char repetido;
    srand(time(NULL));
    printf("Quantos elementos? ");
	scanf("%d", &n);
    for (i=0; i<n; i++) {
        numero[i] = rand() % 15;
        repetido = 'N';
        for (j=0; j<i && repetido == 'N'; j++) {
            if (numero[i] == numero[j])
                repetido = 'S';
        }
        if (repetido == 'S')
            i--;
    }
    for (i=0; i<n; i++)
        printf("\n%d --> %d",i+1, numero[i]);
    return 0;
}