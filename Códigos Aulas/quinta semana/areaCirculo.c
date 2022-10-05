#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int i, qtdPontos, acertos=0, erros=0;
	float x, y, hipotenusa, area;
	srand(time(NULL));
	printf("\nQuantos pontos deseja? ");
	scanf("%d", &qtdPontos);
	for(i=0; i< qtdPontos; i++){
		x = ((float)rand()/(float)RAND_MAX);
		y = ((float)rand()/(float)RAND_MAX);
		hipotenusa = sqrt(pow(x,2)+pow(y,2)); //raiz quadrada da soma dos quadrados dos catetos
		if(hipotenusa <= 1){
			acertos++;
		}else{
			erros++;
		}
	}
	area = ((float)acertos/(float)qtdPontos)*4.0;
	printf("\nAcertou %d pontos\n",acertos);
	printf("\nErrou %d pontos\n", erros);
	printf("\nA area e %.4f\n", area);
}
