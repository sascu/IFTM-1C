#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/*
7. Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. A função deve retornar um valor booleano Verdadeiro para positivo ou Falso para negativo.
*/


// onde o 0 entra?

bool forv(int n){
    bool s;

    if(n > 0){
        s = true;
        return s;
    }else if(n < 0){
        s = false;
        return s;
    }
}

int main(){ 
// outro ex mas com a mesma logica, nAO, eh outro
    int n;
    bool s;

    printf("Digite um numero: ");
    scanf("%d", &n);

    s = forv(n);

    if(s == true) printf("True");
    else printf("False");

    return 0;
}

// retornar 0 ou 1 or true ou false