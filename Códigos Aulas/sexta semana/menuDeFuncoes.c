#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int menu();
int gerarAleatorioInteiro();
void gerarNAleatoriosInteiros(int n);
float gerarAleatorioReal();
void gerarNAleatoriosReais(int n);

int main(){
	srand(time(NULL)); // usar uma única vez no main
	int op = 0, n;
	while(op != 5){ //condicao de saida do menu
		op = menu();
		switch(op){
			case 1:
				printf("\nNumero gerado %d\n",gerarAleatorioInteiro());
			break;
			case 2:
				printf("\nQuantos numeros? ");
				scanf("%d", &n);
				gerarNAleatoriosInteiros(n);
			break;
			case 3:
				printf("\nNumero gerado %.4f\n",gerarAleatorioReal());
			break;
			case 4:
				printf("\nQuantos numeros? ");
				scanf("%d", &n);
				gerarNAleatoriosReais(n);
			break;
			default:
				printf("\nOpcao Invalida\n");
			break;
		}
	}
}

int menu(){
	int opcao;
	printf("\n\n\t\tMENU\n\n");
	printf("\n1) Gerar um número aleatório inteiro");
    printf("\n2) Gerar n números aleatórios inteiros");
    printf("\n3) Gerar um número aleaatório real");
    printf("\n4) Gerar n números aleatórios reais");
    printf("\n5) sair\n");
    printf("\nEscolha uma opcao\n");
    scanf("%d", &opcao);
    return opcao;
}

int gerarAleatorioInteiro(){
	return rand()%100;
}

void gerarNAleatoriosInteiros(int n){
	int i;
	for(i=0; i<n; i++){
		printf("\n%d", gerarAleatorioInteiro());
	}
	printf("\n\n");
}

float gerarAleatorioReal(){
	return ((float)rand()/(float)RAND_MAX)*100;
}

void gerarNAleatoriosReais(int n){
	int i;
	for(i=0; i<n; i++){
		printf("\n%.4f", gerarAleatorioReal());
	}
	printf("\n\n");
}


