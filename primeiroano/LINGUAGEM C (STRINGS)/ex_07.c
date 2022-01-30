#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Faça um programa em linguagem C que leia uma string via teclado (a string
poderá conter várias palavras) e imprima a string de trás para frente.
Ex.:
Entrada: aula de informatica
Saida: acitamrofni ed alua
*/

int main(void){
    char s[1001] = " ", s1[1001] = " ";
    int b;

    

    printf("Digite uma frase: ");
    gets(s);
    b = strlen(s);
    for(int i = 0; s[i] != '\0'; i++){
        s1[b] = s[i];
        b--;
    }
    printf("A frase invertida: %s", s1);
    
    return 0;
}