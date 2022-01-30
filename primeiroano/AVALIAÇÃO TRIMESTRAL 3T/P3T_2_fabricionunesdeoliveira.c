// QUESTÃO 2
// FABRICIO NUNES DE OLIVEIRA: fabricionunesdeoliveira

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Faça uma função que receba a idade de uma pessoa (somente a quantidade de anos que a pessoa já viveu) e retorna essa idade expressa em dias (considerar o ano com 365 dias). Imprimir na tela a seguinte mensagem: VOCÊ TEM X ANOS E ISTO REPRESENTA Y DIAS. X e Y são a idade em anos e dias respectivamente

int idade(int anos){
    return anos*365;
}


int main(){
    int anos;

    printf("Quantos anos voce tem?\nR: ");
    scanf("%d", &anos);

    printf("VOCE TEM %d ANOS E ISTO REPRESENTA %d DIAS.", anos, idade(anos));
}