#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa em linguagem C que leia via teclado 2 números do tipo float e
efetue a sua soma. Se a soma for maior ou igual a 10 mostrar o resultado da soma, caso
contrário mostrar a mensagem: “SOMA INFERIAL A 10”.
*/

int main(void){

    float a, b;

    printf("Digite um valor real: ");
    scanf("%f", &a);
    printf("Digite mais um valor real: ");
    scanf("%f", &b);

    if(a+b>=10){
        printf("A soma eh: %f", a+b);
    }else{
        printf("SOMA INFERIOR A 10");
    }
    return 0;
}