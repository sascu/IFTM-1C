#include <stdio.h>
#include <stdlib.h>


/*
21. Crie uma função em linguagem C que receba 2 números e retorne o menor valor.
*/



int maiormenor(int x, int y){
    int menor;

    if(x > y){
        menor = y;
    }else{
        menor = x;
    }
}


int main(){ 

    int n1, n2, n;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    n = maiormenor(n1, n2);

    printf("O menor numero: %d\n", n);

    return 0;
}