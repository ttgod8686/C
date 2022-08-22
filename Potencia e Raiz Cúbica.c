#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, y, r;
    printf("Qual valor de x e y? ");
    scanf("%f %f", &x, &y);
    r = pow(x,y);
    printf("\n%.2f ^ %.2f = %.5f", x, y, r);
    r = sqrt(x);
    printf("\nRaiz quadrada de %.2f = %.5f", x, r);
    r= pow(x, (1.0/3.0));
    printf("\nRaiz cubica de %.2f = %.5f", x, r);
    return 0;
}
