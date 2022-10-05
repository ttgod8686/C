#include<stdio.h>

int A(int B){
	if(B == 1){
		return 1;
	}else{
		return A(B-1)*B;
	}
}

int main(){
	printf("\nO fatorial de 5 e %d\n\n", A(5));
	return 0;
}
