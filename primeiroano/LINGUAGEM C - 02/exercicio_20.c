#include <stdio.h>
#include <stdlib.h>

/*
Desenvolver um programa que leia um número não determinado de valores, calcule
e escreva a média aritmética deles, quantidade de valores positivos, a quantidade de
valores negativos e o percentual de valores negativos e positivos. O programa termina
quanto o usuário entrar com o valor -1000.
*/

int main(void){
    int a, i=0, somap=0, contp=0, soman = 0, contn=0, somat=0, contt=0;
    float mediap, median, mediat, pp, pn;
    while(1){
            printf("Digite um numero[-1000 para encerrar]: ");
            scanf("%d", &a);
            if(a == -1000){
                break;
            }else if (a>0){
                somap+=a;
                contp++;
            }else if (a<0){
                soman+=a;
                contn++;
            }
            somat += a;
            contt++;
    }

    mediap = somap/contp;
    median = soman/contn;
    mediat = somat/contt;
    pp = (100/contt)*contp;
    pn = (100/contt)*contn;


    printf("\nMedia dos valores positivos: %f\n", mediap);
    printf("Media dos calores negativos: %f\n", median);
    printf("Media total: %f\n", mediat);
    printf("Foi lido %d numeros positivos.\n", contp);
    printf("Foi lido %d numeros negativos.\n", contn);
    printf("Foi lido %d numeros no total.\n", contt);
    printf("O percentual de numeros positivos eh: %.2f%%\n", pp);
    printf("O percentual de numeros negativos eh: %.2f%%\n", pn);
    return 0;
}