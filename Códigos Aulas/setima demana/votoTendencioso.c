#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	int n_votos, A=0, B=0, C=0, nulos=0, num, i;
	printf("\nQuantos votos deseja ");
	scanf("%d", &n_votos);
	for(i=0; i<n_votos; i++){
		num = rand()%100;
		if(num < 15){
			A++;
		}else{
			if(num < 31){
				B++;
			}else{
				if( num < 48){
					C++;
				}else{
					nulos++;
				}
			}
		}
	}
	printf("\nO candidato A teve %d votos\n", A);
	printf("\nO candidato B teve %d votos\n", B);
	printf("\nO candidato C teve %d votos\n", C);
	printf("\nVotos nulos %d\n\n", nulos);
}
