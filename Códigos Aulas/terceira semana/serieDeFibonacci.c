#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main(){
	int A=0, B=1, C=1, n, i;
	printf("\nQuantos numeros? ");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		printf("%d\t",C);
		C=A+B;
		A=B;
		B=C;
	}
	return 0;
}
