#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Faça um programa em linguagem C que leia uma string via teclado (a string
poderá conter várias palavras) e imprime a quantidade de caracteres da string.
Utilize funções prontas da biblioteca string.h para efetuar o cálculo.nunciado
*/

int main(void){
    char sp[1001];
    

    printf("Digite uma frase: ");
    gets(sp);

    printf("A string digitada tem: %d caracteres\n", strlen(sp));

    return 0;
}