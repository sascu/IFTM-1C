#include <stdio.h>
#include <stdlib.h>


/*
16. Faça um procedimento que recebe, por parâmetro, um valor N e calcula e escreve a tabuada de 1 até N. Mostre a tabuada na forma:

1 x N = N
2 x N = 2N
...
N x N = N2
*/

int main(){ 


    int n;
    printf("Escreva um numero: ");
    scanf("%d", &n);

    printf("Tabuada: ");
    
    for(int i = 0; i <= n; i++){
        printf("%d x %d = %d\n", i, n, i*n);
    }

    return 0;
}