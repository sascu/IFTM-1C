#include <stdio.h>
#include <stdlib.h>

//Questão 3
// FABRICIO NUNES DE OLIVEIRA: fabricionunesdeoliveira


int main(){
    float numero, soma;

    for(int i = 0; i < 5; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%f", &numero);

        soma += numero;
    }
    printf("A media dos numeros eh: %.2f", soma/5);
    return 0;
}