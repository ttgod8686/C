#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, j, fat = 1, r = 0, s = 0, n, x;
    printf("Oual valor de N e X? ");
    scanf ("%d %d",&n, &x);
    
    for(i = 1; i < n; i++){
        for(j = i+1; j > 0; j--){
            fat *= j;
            }
    x = pow(x, i + 1);
    s = n * ( n-i ) * x / fat;
    r += s;
    printf("%d ", s);
    fat = 1;
    }
    r += 1 + (n * x);
    printf("\n%d ", r);
    return 0;
}
