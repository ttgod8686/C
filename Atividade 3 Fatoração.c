#include<stdio.h>

int main()
{
    int fat, n;
    printf("Qual valor para fatorar?");
    scanf("%d", &n);

    for(fat = 1; n > 1; n = n - 1)
    {
        fat = fat * n;
        printf("%d * ",n);
    }

    printf("1 = %d", fat);
    return 0;
}