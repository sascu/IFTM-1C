#include <stdio.h>
#include <stdlib.h>


/*
19. Escreva uma função que recebe, por parâmetro, dois valores X e Z e calcula e retorna X**Z.(sem utilizar funções ou operadores de potência prontos).
*/

int var(){
    int x = 0, z = 0, c = 1;

    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite um numero: ");
    scanf("%d", &z);

    for(int i = 0; i < z; i++) c *= x;

    return c;
}

int main(){ 

    int r;

    r = var();

    printf("O resultado eh: %d\n", r);
    return 0;
}