#include <stdio.h>
#include <stdlib.h>

/*
3. Faça uma função que recebe por parâmetro um valor inteiro e positivo e retorna o valor lógico Verdadeiro caso o valor seja PAR e Falso em caso contrário.
*/

int VorF(unsigned short int n){
    if(n%2 == 1) return printf("0");
    else return printf("1");
}


int main(){ 

    unsigned short int valor;

    printf("Digite um valor inteiro positivo: ");
    scanf("%si", &valor);
    printf("\n");

    VorF(valor);

    return 0;
}