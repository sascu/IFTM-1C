#include <stdio.h>
#include <stdlib.h>

/*
A lanchonete Gostosura vende apenas um tipo de sanduiche, cujo recheio inclui duas
fatias de queijo, uma fatia de presunto e uma rodela de hambúrguer. Sabendo que cada
fatia de queijo ou presunto pesa 50 gramas, e que a rodela de hambúrguer pesa 100
gramas, faca um programa em linguagem C em que o dono forneça a quantidade de
sanduiches a fazer através de leitura via teclado e a máquina informe as quantidades (em
quilos) de queijo, presunto e carne necessários para compra.
*/

int main(void){

    int q;

    printf("Quantidade de hamburguers: ");
    scanf("%d", &q);

    printf("\nSera necessario:\n\n%.2f KG de queijo.\n%.2f KG de presunto.\n%.2f KG de hamburguer.\n", q*0.1, q*0.05, q*0.1);


    return 0;
}