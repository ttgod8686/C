#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
main(){
	int qtdPontos, i, acertos=0, erros=0;
	float ptX, ptY, hipotenusa, area, probAcertos;
	srand(time(NULL));
	printf("\nQuantos pontos deseja? ");
	scanf("%d", &qtdPontos);
	for(i=0; i<qtdPontos; i++){
		ptX = ((float)rand()/(float)RAND_MAX); // gera um valor entre 0 e 1
		ptY = ((float)rand()/(float)RAND_MAX); // gera um valor entre 0 e 1
		hipotenusa = sqrt((pow(ptX, 2.0)) + (pow(ptY, 2.0))); //raiz da soma dos quadrados dos catetos
		if(hipotenusa <= 1.0){
			acertos++;
		}else{
			erros++;
		}
	}
	probAcertos = ((float)acertos)/((float)qtdPontos);
	area = probAcertos * 4.0; //4.0 é a área do quadrado
	printf("\nA area do circulo e aproximadamente %.6f\n\n", area);
}
