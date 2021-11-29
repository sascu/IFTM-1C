#include <stdio.h>
#include <stdlib.h>


/*
20. Crie uma função em linguagem C que receba 2 números e retorne o maior valor.
*/

int maiormenor(int x, int y){
    int maior;

    if(x > y){
        maior = x;
    }else{
        maior = y;
    }
}


int main(){ 

    int n1, n2, n;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    n = maiormenor(n1, n2);

    printf("O maior numero: %d\n", n);

    return 0;
}