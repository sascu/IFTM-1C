#include <stdio.h>
#include <stdlib.h>


/*
17. Escreva uma função que recebe por parâmetro um valor inteiro e positivo Ne retorna o valor de S.

S = 1 + 1⁄2 + 1/3 + 1⁄4 + 1/5 + ... + 1/N.
*/


float multi(int n){
    float s = 1, i;
    for(i = 1;i <= n; i++){
        s+=(1/i);
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