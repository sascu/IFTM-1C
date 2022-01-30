// QUESTÃO 1
// FABRICIO NUNES DE OLIVEIRA: fabricionunesdeoliveira

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Faça um procedimento que leia 5 valores inteiros e imprima o maior e o menor deles

int main(){
    int n, mai, men;

    for(int i = 0; i < 5; i++){
        printf("Digite um numero: ", i+1);
        scanf("%d", &n);

        if(n > mai){
            mai = n;
        }
        if(n < men){
            men = n;
        }
    }

    printf("\nO maior numero eh: %d\n", mai);
    printf("O menor numero eh: %d\n", men);
}