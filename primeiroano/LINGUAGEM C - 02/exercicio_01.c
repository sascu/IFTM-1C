#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa em linguagem C que leia dois números reais através do teclado
do computador e mostre o resultado da multiplicação destes dois números.
*/

int main(void){

    double a, b;

    printf("Digite um valor real: ");
    scanf("%lf", &a);

    printf("Digite um outro valor: ");
    scanf("%lf", &b);

    printf("O resultado da multiplicacao entre %.2lf e %.2lf eh igual a: %.2lf", a, b, a*b);

    
    return 0;
}

