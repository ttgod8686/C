#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j, m;
    float n;
    srand(time(NULL));
    
    m = rand()%9+1;
    printf("\n");
    
    for(i=0 ; i<m ; i++){
        for(j=0 ; j<m ; j++){
            if(i + j == 0 || i - j >= 0){
                printf("\t%.2f", (0 + 1) + (((float) rand()) / (float) RAND_MAX) * (10- (0 +1)));
            }else{
                printf("\t0");
            }
        }
        printf("\n\n");
    }
    
    
    


    return 0;
}
