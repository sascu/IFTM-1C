// QUESTÃO 1
// FABRICIO NUNES DE OLIVEIRA: fabricionunesdeoliveira

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Faça um programa em linguagem C que leia uma string via teclado (a string deverá conter várias palavras) e imprima a quantidade de caracteres da string. 

int main(){
    char string[1001];
    int qc;

    printf("Digite uma frase: ");
    gets(string);

    printf("A frase tem %d caracteres.\n", strlen(string));

    return 0;
}