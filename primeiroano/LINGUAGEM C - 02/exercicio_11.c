#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa em linguagem C que leia um número inteir ovia teclado e imprima
se ele é positivo, negativo ou nulo (zero).
*/

int main(void){
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n>0){
        printf("Positivo.");
    }else if(n == 0){
        printf("Nulo.");
    }else{
        printf("Negativo.");
    }
    return 0;
}