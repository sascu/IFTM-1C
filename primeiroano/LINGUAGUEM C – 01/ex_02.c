#include <stdio.h>
#include <stdlib.h>

/* ENUNCIADO: 

Faca um programa para calcular quantas ferraduras são necessárias para
equipar todos os cavalos comprados para um haras. A quantidade de cavalos
do haras deverá ser informada através da leitura via teclado.

*/

void main() {
    int cavalos, patas, resultado;

    patas = 4;

    printf("Quantos cavalos foram comprados? ");
    scanf("%d", &cavalos);

    resultado = cavalos * patas;

    printf("Sera necessario %d ferraduras para equipar %d cavalos saudaveis.\n", resultado, cavalos);
}