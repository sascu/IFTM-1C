#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa em linguagem C que leia via teclado um número. Se ele for maior
ou igual a 50 e menor ou igual a 100 imprimir a metade do número. Se ele for maior que
100 imprimir do dobro do número. Se ele não for nenhuma destas duas opções anteriores
imprimir o valor normal do número.
*/

int main(void){

    float a;

    printf("Digite um numero: ");
    scanf("%f", &a);

    if(a >= 50 && a <= 100){
        printf("A metade do numero eh: %.1f", a/2);
    }else if (a>100){
        printf("O dobro do numero eh igual a: %f", a*2);
    }else{
        printf("O numero normal eh: %.0f", a);
    }
    return 0;
}