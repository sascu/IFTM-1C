#include <stdio.h>
#include <stdlib.h>

/*
Calcular o fatorial de um número N. O cálculo do fatorial de um valor N é feito da
seguinte forma: Fatorial de N = N*(N-1)*(N-2)*...(1)
Fatorial de 5=5*4*3*2*1
*/

int main(void){
    int i, n;
    printf("Digite um Valor: ");
    scanf("%d", &n);

    for(i = 1; n > 1; n--){
        i *= n;
    }

    printf("\nFatorial: %d", i);
    return 0;
}