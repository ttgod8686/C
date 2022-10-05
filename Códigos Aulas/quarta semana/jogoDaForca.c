#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char palavra[30], oculta[30], letra;
	int i, qtdLetras, erros=0, acertos=0;
	printf("\nQual a palavra? ");
	scanf("%s", palavra); // leitura de string
	qtdLetras = strlen(palavra); // retorna a quantidade de letras digitadas
	printf("\nA palavra tem %d letras\n",qtdLetras);
	/*
	for(i=29; i>=0; i--){ //imprimir o vetor de tras para frente
		printf("%c",palavra[i]);
	}
	printf("\n\n");
	for(i=qtdLetras-1; i>=0; i--){ //imprimir a palavra de tras para frente
		printf("%c",palavra[i]);
	}
	*/
	system("cls"); //system("clear");
	for(i=0; i<qtdLetras; i++){
		oculta[i] = '_';
	}
	int acertei;
	while(acertos < qtdLetras  &&  erros < 4){ //condicao de acerto ou enforcamento
		system("cls"); //system("clear");
		for(i=0; i<qtdLetras; i++){
			printf("%c ",oculta[i]);
		}
		fflush(stdin); //limpa o buffer de entrada
		fflush(stdout); //limpa o buffer de saida
		printf("\nQual a letra? ");
		scanf("%c", &letra);
		fflush(stdin);
		fflush(stdout);
		acertei = 0;
		for(i=0; i<qtdLetras; i++){
			if(palavra[i] == letra){
				oculta[i] = letra;
				acertos++;
				acertei = 1;
			}
		}
		if(acertei == 0){
			erros++;
		}
	}
	printf("\nA palavra e %s\n", palavra);
	printf("\nAcertou %d vezes\nE errou %d vezes\n",acertos, erros);
	printf("\n\nFIM\n\n");
	return 0;
}
