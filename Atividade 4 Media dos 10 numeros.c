#include <stdio.h>

  int main() {
      
    int a[10];
    int i, maior, menor, m, media;

    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    maior = a[0];
    for (i = 0; i < 10; i++) {
        if (a[i] > maior) {
        maior = a[i];
    }}
    
    menor = a[0];
    for (i = 0; i < 10; i++) {
        if (a[i] < menor) {
        menor = a[i];
    }}
    
    m = a[0];
    for (i = 0; i < 10; i++) {
        m = m + a[i];
        media = m/10;
    }
    
    printf("O menor numero é = %d\nO maior numero é = %d\nA media dos numeros é = %d" ,menor,maior,media); 
    return 0;
  }