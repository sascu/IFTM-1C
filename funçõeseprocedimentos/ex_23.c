#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
23. Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma equação do segundo grau e retorne o valor do delta, que é dado por 'b2 - 4ac’.
*/

int dellta(int a, int b, int c){
    int delta;

    delta = pow(b, 2) - (4 * a * c);
    
    return delta;
}

int main(){ 

    int a, b, c, delta;

    printf("Digite o coeficiente a: ");
    scanf("%d", &a);
    printf("Digite o coeficiente b: ");
    scanf("%d", &b);
    printf("Digite o coeficiente c: ");
    scanf("%d", &c);

    delta = dellta(a, b, c);

    printf("O delta desses coeficientes eh: %d", delta);
    return 0;
}