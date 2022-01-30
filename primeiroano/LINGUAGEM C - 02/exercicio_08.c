#include <stdio.h>
#include <stdlib.h>

/*
O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. Escreva
um programa em linguagem C que leia o peso do prato montado pelo cliente (em quilos)
e imprima o valor a pagar. Considere que o peso do prato montado poderá ter casas
decimais, ex.: 1,5 kg – 0,432 kg
*/

int main(void){
    double a;

    printf("Qual o peso do prato?");

    scanf("%lf", &a);

    printf("O peso do seu prato eh: %lf e voce deve pagar: R$%lf\n", a, a*12.0);
    
    return 0;
}