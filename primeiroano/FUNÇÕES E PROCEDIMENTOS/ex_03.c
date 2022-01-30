#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
3. Faça uma função que recebe por parâmetro um valor inteiro e positivo e retorna o valor lógico Verdadeiro caso o valor seja PAR e Falso em caso contrário.
*/

bool pori(unsigned short int n){

    if(n%2 == 0){

        return true;
    }else{

        return false;
    }
}

int main(){ 

    unsigned short int n;
    bool s;

    printf("Digite um numero: ");
    scanf("%d", &n);

    s = pori(n);

    printf("%s", s ? "Numero Par" : "Numero impar");

    return 0;
}