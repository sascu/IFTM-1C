#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa em linguagem em C que receba dois números inteiros e
mostra os números pares entre os números recebido.
*/

int main(void){

    int a, b, i=0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if(a>b){
        for(b++; b < a; b++){
            if(b%2==0){
                printf("%d ", b);
            }
        }
    }else{
        for(a++; a < b; a++){
            if(a%2==0){
                printf("%d ", a);
            }
        }
    }
    return 0;
}