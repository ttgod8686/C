#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int a[100];
    int i, n, m, media, impar = 0, par = 0, tres = 0, cinco = 0, tresecinco = 0;
    m = a[0];

    printf("Quantos numeros voce deseja? ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        int random_number = rand() % 100 + 1;
        a[i] = random_number;
        printf("%d ",a[i]);
        m = m + a[i];
    }
    
    for(i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            par++;
        }else{
            impar++;
        }}
    
    for(i = 0; i < n; i++){
        if(a[i] % 3 == 0){
            tres++;
        }}
        
        for(i = 0; i < n; i++){
    if(a[i] % 5 == 0){
            cinco++;
    }}
    
        for(i = 0; i < n; i++){
    if(a[i] % 5 == 0 && a[i] % 3 == 0){
            tresecinco++;
    }}
    
    media = m/n;
    printf("\n\nMedia: %d\tPares: %d\tImpares: %d", media, par, impar);
    printf("\n\nDivisiveis por 3: %d\tDivisiveis por 5: %d", tres, cinco);
    printf("\n\tDivisiveis por 3 e 5: %d", tresecinco);
    return 0;
}
