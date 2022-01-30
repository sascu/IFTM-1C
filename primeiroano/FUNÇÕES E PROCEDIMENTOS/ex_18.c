#include <stdio.h>
#include <stdlib.h>


/*
18. Escreva uma função que recebe por parâmetro um valor inteiro e positivo N
e retorna o valor de S.

S = 1 + 1/1! + 1⁄2! + 1/3! + ... + 1/N!
*/

float fatorial(float n){
    if(n == 0) return 1;
    return n * fatorial(n-1);
}

float multi(int n){
    float s = 1, i;
    for(i = 1;i <= n; i++){
        s+=(1/fatorial(i));
    }
    return s;
}

int main(){ 
    
    float n, s;

    printf("Digite um numero: ");
    scanf("%f", &n);

    s = multi(n);

    printf("O resultado eh: %.2f\n", s);

    return 0;
}