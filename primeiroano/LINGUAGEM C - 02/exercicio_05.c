#include <stdio.h>
#include <stdlib.h>

/*
A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou com a venda dos pães e broas (juntos), e quanto deve guardar numa conta de poupança (10% do total arrecadado). Você foi contratado para fazer os cálculos para o dono. Com base nestes fatos, faca um programa em linguagem C para ler as quantidades de pães e de broas vendidas no dia, via teclado, e depois calcular os dados solicitados.
*/

int main(void){
    int pao, broa;
    double rt, rp, rb;

    printf("Digite a quantidade de paes que foram vendidos: ");
    scanf("%d", &pao);
    printf("Digite a quantidade de broas que foram vendidos: ");
    scanf("%d", &broa);

    rp = pao * 0.12;
    rb = broa * 1.5;
    rt = rp + rb;

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\nVoce conseguiu R$ %.2f em paes. \nVoce conseguiu R$ %.2f em broas. \nNo total voce conseguiu R$ %.2f \nAo fim do dia voce deve depositar na poupanca R$ %.2f", rp, rb, rt, rt*0.1);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    return 0;
}