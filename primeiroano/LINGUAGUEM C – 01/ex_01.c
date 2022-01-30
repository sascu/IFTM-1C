#include <stdio.h>
#include <stdlib.h>

/* ENUNCIADO:

Faça um programa em linguagem C que leia dois números reais através do
teclado do computador e mostre o resultado da multiplicação destes dois
números.

*/

void main() {
    float numero1, numero2, resultado;

    printf("Vamos multiplicar! \n \n");

    printf("Digite um valor real: ");
    scanf("%f", &numero1);
    printf("\n");

    printf("Digite outro valor real: ");
    scanf("%f", &numero2);
    printf("\n");
    
    resultado = numero1 * numero2;

    printf("A multiplicacao entre %.2f e %.2f = %.2f \n\n", numero1, numero2, resultado);

    system("pause");
}