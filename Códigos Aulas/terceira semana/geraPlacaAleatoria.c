#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main(){
	int i, n;
	srand(time(NULL));
	printf("\nQuantas placas? ");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		printf("%c%c%c-%d%c%d%d\n",(65+rand()%26),
		(65+rand()%26),(65+rand()%26),(rand()%10),
		(65+rand()%26),(rand()%10),(rand()%10));
	}
	return 0;
}
