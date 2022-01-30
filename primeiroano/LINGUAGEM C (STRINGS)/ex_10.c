#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Faça um programa em linguagem C que leia uma string via teclado (a string
poderá conter várias palavras) e gerar uma nova string sem os espaços em
branco entre as palavras. Imprimir as duas strings.
*/

int main(void){
    char s[1001];
    int cont = 0;

    printf("Digite um texto: ");
    gets(s);
    
    printf("String: %s\nString sem espaco: ", s);

    for(int i = 0; i < strlen(s); i++){
        if(s[i] == ' ') cont++;
        else break;
    }
    for(int i = 0; i < strlen(s); i++){
            if(cont > i) printf("%c", s[i]);
            else if(s[i] != ' ') printf("%c", s[i]);
    }
    return 0;
}

