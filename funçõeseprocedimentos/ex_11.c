#include <stdio.h>
#include <stdlib.h>


/*
11. Faça um procedimento que recebe 3 valores inteiros por parâmetro e imprima-os ordenados em ordem crescente.
*/

int maimen(int a, int b, int c){
    int copy = 0;

    if(b > a){
        copy = a;
        a = b;
        b = copy;
    }
    if(c > a){
        copy = a;
        a = c;
        c = copy;
    }
    if(c > b){
        copy = b;
        b = c;
        c = copy;
    }

    printf("ORDEM CRESCENTE: %d %d %d", c, b, a);
}


int main(){ 

    int a, b, c;
    
    printf("Numero 1: ");
    scanf("%d", &a);
    printf("Numero 2: ");
    scanf("%d", &b);
    printf("Numero 3: ");
    scanf("%d", &c);
    
    maimen(a, b, c);

    return 0;
}