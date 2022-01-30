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
    char *vogais = "aeiouAEIOU";
    char s[1001];

    printf("Digite um texto: ");
    gets(s);

    for(int i = 0; i < strlen(s); ++i){
        if(!(strchr("AEIOUaeiou", s[i])))
            printf("%c", s[i]);
    }

    return 0;
}