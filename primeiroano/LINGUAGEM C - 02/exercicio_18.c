#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa em linguagem em C que receba um número inteiro e mostra
os números pares e ímpares (separados, em duas colunas), de 1 até esse inteiro.
*/

int main(void){
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("IMPARES  PARES\n");
    for(int i = 1; i < n; i++){
        if(i%2!=0){
            printf("%d        %d\n", i, i+1);
        }
    }
    return 0;
}