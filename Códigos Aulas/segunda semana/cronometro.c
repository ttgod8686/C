#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int dias, horas, minutos, segundos;
	for(dias=0; dias<30; dias++){
		for(horas=0; horas<24; horas++){
			for(minutos=0; minutos<60; minutos++){
				for(segundos=0; segundos<60; segundos++){
					printf("\r%2d:%2d:%2d:%2d",dias, horas,minutos,segundos);
					sleep(1); //aguardar 1 segundo
				}
			}
		}
	}
	return 0;
}
