#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Faça um programa em linguagem C que leia uma string via teclado (a string
poderá conter várias palavras) e imprima quantos caracteres ‘a’ existe na string.
*/

int main(void){
    char sp[1001];
    int cont = 0;

    printf("Digite uma frase: ");
    gets(sp);

    for(int i = 0; i < strlen(sp); i++) if(sp[i] == 'a') cont++;
    
    printf("A string digitada tem %d caracteres 'a' \n", cont);

    return 0;
}