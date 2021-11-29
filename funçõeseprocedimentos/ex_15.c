#include <stdio.h>
#include <stdlib.h>


/*
15. Faça um procedimento que leia 50 valores inteiros e imprima o maior e o menor deles.
*/

int main(){ 
    int n, maior, menor;
    for(int i = 1; i <= 50; i++){ 
        printf("Numero %d: ", i);
        scanf("%d", &n);

        if (n > maior) maior = n;
        if (n < menor) menor = n;
    }

    printf("O maior numero eh: %d\nO menor numero eh: %d\n", maior, menor);

    return 0;
}