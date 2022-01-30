#include <stdio.h>
#include <stdlib.h>

/*
Uma fábrica de camisetas produz camisetas com os tamanhos pequeno, médio e
grande, cada uma sendo vendida respectivamente por R$ 10,00, R$ 12,00 e R$ 15,50.
Construa um programa em linguagem C em que o usuário forneça através de leitura via
teclado a quantidade de camisetas pequenas, medias e grandes referentes a uma venda, e
a máquina informe quanto será́́ o valor arrecadado.
*/

int main(void){
    int p, m, g;

    printf("Digite quantas camisas pequenas foram arrecadadas: ");
    scanf("%d", &p);
    printf("Digite quantas camisas medias foram arrecadadas: ");
    scanf("%d", &m);
    printf("Digite quantas camisas grandes foram arrecadadas: ");
    scanf("%d", &g);

    printf("O valor total arrecadado eh de: %.2f", p*10+m*12+g*15.5);
    return 0;
}