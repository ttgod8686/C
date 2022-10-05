#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h> 
#include<math.h>
int main(){
	int i, qtdLetras, erros = 0, acertos = 0, acertei;
	char palavra[30], oculta[30], letra;
	printf("\nQual a palavra? ");
	scanf("%s", palavra);
	qtdLetras = strlen(palavra);
	for(i=0; i<qtdLetras; i++){
		oculta[i] = '_';
	}
	//printf("\n%s\n%s\n", palavra, oculta);
	system("cls"); //system("clear");
	while(acertos < qtdLetras && erros < 4){
		system("cls"); //system("clear");
		printf("\nErros = %d\nAcertos = %d\n\n",erros, acertos);
		for(i=0; i<qtdLetras; i++){
			printf("%c ",oculta[i]);
		}
		fflush(stdin); // limpa o buffer de entrada
		fflush(stdout); // limpa o buffer de saida
		printf("\n\nQual letra voce vai chutar? ");
		scanf("%c", &letra);
		fflush(stdin); // limpa o buffer de entrada
		fflush(stdout); // limpa o buffer de saida
		acertei = 0;
		for(i=0; i<qtdLetras; i++){
			if(letra == palavra[i]){
				acertos++; //acertei
				acertei = 1; 
				oculta[i] = letra;
			}
		}
		if(acertei == 0){ // nao acertei
			erros++;  
		}
	}
	return 0;
}
