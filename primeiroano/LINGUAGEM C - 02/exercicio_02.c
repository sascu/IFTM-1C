#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa em linguagem C que leia dois números reais e mostre o resultado
o resultado da divisão destes dois números. O programa deverá prever que não ocorra
erro de divisão por zero.
*/

int main(void){
    double a, b;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &a);
    printf("Digite o segundo numero: ");
    scanf("%lf", &b);

    if(b==0){
        printf("Nao eh possivel realizar a divisao por 0.\n");
    }else{
        printf("O resultado de %.2lf e %.2lf eh igual a: %.2lf\n", a, b, a/b);
    }
    return 0;
}