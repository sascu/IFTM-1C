#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
8. Faça uma função que recebe um valor inteiro e verifica se o valor é par ou ímpar. A função deve retornar um valor booleano Verdadeiro para par e Falso para ímpar.
*/


bool pori(int n){

    if(n%2 == 0){

        return true;
    }else{

        return false;
    }
}

int main(){ 

    int n;
    bool s;

    printf("Digite um numero: ");
    scanf("%d", &n);

    s = pori(n);

    printf("%s", s ? "Numero Par" : "Numero impar");


    return 0;
}