#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

int main()
{   
    srand(time(NULL));
    int aleatorioInt, maior, menor;
    float aleatorioFloat, min, max;

    aleatorioInt = rand() % (maior - menor) + menor + 1;
    
    aleatorioFloat = (min + 1) + (((float) rand()) / (float) RAND_MAX) * (max- (min +1));

    
    return 0;
}
