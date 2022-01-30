#include <stdio.h>
#include <stdlib.h>

//Questão 2
// FABRICIO NUNES DE OLIVEIRA: fabricionunesdeoliveira


int main(){
    int a;

    printf("Digite um numero: ");
    scanf("%d", &a);

    if(a >= 0){
        printf("Positivo.");
    }else{
        printf("Negativo.");
    }

    return 0;
}