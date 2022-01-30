#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Faça um programa em linguagem C que leia uma string via teclado (a string
poderá conter várias palavras) e imprima a string sem as suas vogais.
Ex.:

Entrada: aula de informatica
Saida: l d nfrmtc
*/

int main(void){
    char sp[1001];

    printf("Digite um texto: ");
    gets(sp);

    for(int i = 0; i < strlen(sp); ++i){
        if(!(strchr("AaEeIiOoUu", sp[i])))
            printf("%c", sp[i]);
    }

    return 0;
}