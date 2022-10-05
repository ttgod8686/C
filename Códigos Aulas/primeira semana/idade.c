// Online C compiler to run C program online
#include <stdio.h>
/*
linhas de comentario
bla bla bla
*/
int main() { //metodo principal
    int idade;
    printf("\nQual a idade? ");
    scanf("%d", &idade);
    if(idade < 13){ // se(idade < 13)
        printf("\nCriança\n");
    }else{
        if(idade < 20){
            printf("\nAdolescente\n");
        }else{
            if(idade < 66){
                printf("\nAdulto\n");
            }else{
                printf("\nIdoso\n");
            }
        }
    }
    return 0;
}
