#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float area, base, altura;

    printf("\nQual a base do triângulo? ");
    scanf("%f",&base);
    printf("\nQual a altura do triângulo? ");
    scanf("%f",&altura);

    area=(base*altura)/2;

    printf("\n Area do triângulo=%.1f\n",area);
    return 0;
}
