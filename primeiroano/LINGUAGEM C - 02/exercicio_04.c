#include <stdio.h>
#include <stdlib.h>

/*
Faca um programa para calcular quantas ferraduras são necessárias para equipar
todos os cavalos comprados para um haras. A quantidade de cavalos do haras deverá ser
informada através da leitura via teclado.
*/

int main(void){
    int a;

    printf("Digite a quantidade de cavalos: ");
    scanf("%d", &a);

    printf("Voce ira precisar de %d ferraduras.", a*4);
    return 0;
}