#include <stdio.h>
#include <stdlib.h>


/*
5. Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa idade expressa em dias.
*/

// Nesse exercicio considerei cada mes como 30 dias e o ano como 365 dias.

int vida(int a, int m, int d){
    return printf("Voce viveu: %d\n", d + (a * 365) + (m * 30));
}

int main(){ 

    int a, m, d;

    printf("Digite sua idade [AA MM DD]:");
    scanf("%d %d %d", &a, &m, &d);

    vida(a, m, d);

    return 0;
}