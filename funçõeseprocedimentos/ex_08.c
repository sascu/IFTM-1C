#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
8. Faça uma função que recebe um valor inteiro e verifica se o valor é par ou ímpar. A função deve retornar um valor booleano Verdadeiro para par e Falso para ímpar.
*/


bool pori(int n){
    bool s;

    if(n%2 == 0){
        s = true;
        return s;
    }else{
        s = false;
        return s;
    }
}

int main(){ 

    int n;
    bool s;

    printf("Digite um numero: ");
    scanf("%d", &n);

    s = pori(n); // true or false

    printf("%s", s ? "true" : "false");
    // if(s == true) printf("True");
    // else printf("False");

    return 0;
}