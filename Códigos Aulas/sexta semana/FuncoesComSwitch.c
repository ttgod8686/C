#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int menu();
int geraAleatorioInteiro();
void geraNNumerosAleatoriosInteiros(int n);
float geraAleatorioReal();
void geraNNumerosAleatoriosReais(int n);

int main(){
	int opcao=0, n;
	srand(time(NULL)); //use apenas uma vez no main
	while(opcao != 5){
		opcao = menu();
		switch(opcao){
			case 1:
				printf("%d\n", geraAleatorioInteiro());
			break;
			case 2:
				printf("\nQuantos numeros? ");
				scanf("%d", &n);
				geraNNumerosAleatoriosInteiros(n);
			break;
			case 3:
				printf("%f\n", geraAleatorioReal());
			break;
			case 4:
				printf("\nQuantos numeros? ");
				scanf("%d", &n);
				geraNNumerosAleatoriosReais(n);
			break;
			default:
				printf("\nOpcao Invalida!\n");
			break;
		}
	}
}

int menu(){
	int op;
	printf("\n1) Gerar um n�mero aleat�rio inteiro");
    printf("\n2) Gerar n n�meros aleat�rios inteiros");
    printf("\n3) Gerar um n�mero aleaat�rio real");
    printf("\n4) Gerar n n�meros aleat�rios reais");
    printf("\n5) sair\n");
	scanf("%d", &op);
	return op;
}

int geraAleatorioInteiro(){
	return rand()%100;
}
void geraNNumerosAleatoriosInteiros(int n){
	int i;
	for(i=0; i<n; i++){
		printf("\n%d",geraAleatorioInteiro());
	}
	printf("\n\n");
}
float geraAleatorioReal(){
	return ((float)rand())/((float)RAND_MAX)*100.0;
}
void geraNNumerosAleatoriosReais(int n){
	int i;
	for(i=0; i<n; i++){
		printf("\n%f",geraAleatorioReal());
	}
	printf("\n\n");
}

/*
Fa�a uma fun��o de menu e um main com "case" para testar. 
O menu dever� ter:
   1) Gerar um n�mero aleat�rio inteiro
   2) Gerar n n�meros aleat�rios inteiros
   3) Gerar um n�mero aleaat�rio real
   4) Gerar n n�meros aleat�rios reais
   5) sair
*/
