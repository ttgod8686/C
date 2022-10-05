#include<stdio.h> //cabeçalho padrão de entrada/saída
#include<stdlib.h> //cabeçalho sistema
//#include<unistd.h>

int main(){
	int dia, hora, minuto, segundo;
	for(dia=0; dia<30; dia++){
		for(hora=0; hora<24; hora++){
			for(minuto=0; minuto<60; minuto++){
				for(segundo=0; segundo<60; segundo++){
					printf("\r%2d:%2d:%2d:%2d",dia,hora,minuto,segundo);
					sleep(1); //aguarda 1 segundo
				}
			}
		}
	}
	return 0;
}
