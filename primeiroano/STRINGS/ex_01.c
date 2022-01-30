#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Faça um programa em linguagem C que leia uma string via teclado (a string
poderá conter várias palavras) e imprime a quantidade de caracteres da string.
Utilize o comando FOR para fazer o cálculo da quantidade de caracteres da
string.
*/

int main(void){
    char sp[1001];
    int cont = 0;

    printf("Digite uma frase: ");
    gets(sp);

    for(int i = 0; sp[i] != '\0'; i++) cont++;
    
    printf("A string digitada tem: %d caracteres\n", cont);

    return 0;
}
