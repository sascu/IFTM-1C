#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa em linguagem C para ler a idade de uma pessoa e exibir
quantos dias de vida ela possui. Considere sempre anos completos, e que um ano possui
365 dias. Ex: uma pessoa com 19 anos possui 6935 dias de vida; veja um exemplo de
como deverá ser impressa a mensagem de saída do programa: OLÁ, VOCÊ JÁ VIVEU
6935 DIAS.
*/

int main(void) {
    int anos, diasdoano, diasvividos;

    diasdoano = 365;

    printf("Quantos anos inteiros voce viveu? ");
    scanf("%d", &anos);

    diasvividos = diasdoano * anos;

    printf("OLA, VOCE JA VIVEU %d DIAS.", diasvividos);

    return 0;
}
