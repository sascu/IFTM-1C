#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa em linguagem C, usando o comando for, um algoritmo para
calcular e imprimir a soma dos elementos de 1 a 100.
*/

int main(void){
    int soma;
    for(int i=0; i<101; i++){
        soma += i;
    }
    printf("A soma de 1 ate 100 eh igual a: %d", soma);
}