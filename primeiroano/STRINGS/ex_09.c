#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Faça um programa em linguagem C que leia uma string via teclado no
seguinte formato: “DD/MM/AAAA”, onde DD, MM e AAAA serão caracteres
numéricos e retorne uma string contendo o dia, uma string contendo o mês e
uma string contendo o ano. Imprime essas todas as strings na tela.
Ex.:
Entrada: 01/12/2020

Cálculos:Dia = “01”
Mês = “12”
Ano = “2020”
Saída:
Imprimir todas as strings (entrada e cálculos)
*/

int main(void){
    char data[10];

    pritf("Digite uma data [dd/mm/aaaa]: ");
    gets(data);

    printf("Dia = %c%c\nMes = %c%c\nAno = %c%c%c%c", data[0],data[1], data[3], data[4], data[6], data[7], data[8], data[9]);

    return 0;
}