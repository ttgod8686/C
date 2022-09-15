#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, delta, x1, x2;
    
    printf("Qual valor de A?");
    scanf("%d", &a);
    printf("Qual valor de B?");
    scanf("%d", &b);
    printf("Qual valor de C?");
    scanf("%d", &c);

    delta = b*b - 4 * a * c;
    
      if(delta < 0)
    {
        printf("\nEsta equação não possui raizes reais, pois delta é igual a %d\n\n", delta);
    }
    else
    {
        if(delta == 0)
        {
            x1 = -b / (2 * a);
            printf("\nDelta = %d\nX1 = %d\n\n", delta, x1);
        }
        else
        {
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            printf("\nDelta = %d\nX1 = %d\nX2 = %d\n\n", delta, x1, x2);
        }
    }
    return 0;
}
