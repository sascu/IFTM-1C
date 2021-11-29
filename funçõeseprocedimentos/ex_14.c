#include <stdio.h>
#include <stdlib.h>


/*
14. Faça uma função que receba um valor inteiro e positivo e calcula e retorna o seu fatorial.
*/
int fatorial(int n){
    if(n == 0) return 1;
    return n * fatorial(n-1);
}


int main(){ 

    int a;

    printf("Digite um numero inteiro: ");
    scanf("%d", &a);

    printf("O fatorial de %d eh: %d", a, fatorial(a));

    return 0;
}