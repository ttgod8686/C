#include <stdio.h>

int main()
{
    int n, x, s = 0, r = 0, i, j;
    printf("Qual valor de N e X? ");
    scanf("%d %d",&n, &x);

    for(i = 0; i < n; i++){
    s = 1 + n * (n - i - 1) * x^i / i;
    printf("%d ", s);
    r += s;
    }
    printf("\n%d ", r);

    return 0;
}
