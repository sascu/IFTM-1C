#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Faça um programa em linguagem C que leia uma string via teclado (a string
poderá conter várias palavras) e imprima toda a string em letras maiúsculas.
*/

int main(void){
    char s[1001];

    printf("Digite uma frase: ");
    gets(s);

    for(int i = 0; i < strlen(s); i++) s[i] = toupper(s[i]);
    printf("Em maiusculo fica:   %s", s);
    return 0;
}