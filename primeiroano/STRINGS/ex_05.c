#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Faça um programa em linguagem C que leia uma string via teclado (a string
poderá conter várias palavras) e imprima quantas vogais existem na string.
Considerar como vogais os caracteres ‘a’, ‘e’, ’i’, ’o’, ‘u’, ‘A’, ‘E’, ‘I’, ‘O’ e ‘U’.
*/

int main(void){
    char sp[1001];
    int cont = 0;

    printf("Digite uma frase: ");
    gets(sp);

    for(int i = 0; i <= strlen(sp); i++) if(sp[i] == 'a' || sp[i] == 'A' || sp[i] == 'e' || sp[i] == 'E' || sp[i] == 'i' || sp[i] == 'I' || sp[i] == 'o' || sp[i] == 'O' || sp[i] == 'u' || sp[i] == 'U') cont++;

    printf("Existem %d vogais em sua string. \n", cont);
    return 0;
}