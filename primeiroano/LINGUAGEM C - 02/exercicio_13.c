#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa em linguagem C que leia via teclado 10 números do tipo float e
mostre na tela a média destes números.
Obs.:
media = (soma dos números) / (quantidade de números) = (soma dos números) / 10
*/

int main(void){
    float a, soma=0;

    for(int i = 0; i < 10; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%f", &a);
        soma += a;
    }

    printf("A media desses numeros eh igual a: %f", soma/10);
    return 0;
}