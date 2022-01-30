#include <stdio.h>
#include <stdlib.h>

//Questão 4
// FABRICIO NUNES DE OLIVEIRA: fabricionunesdeoliveira


int main(){
    int contador, i;
    float a, soma;
    for(;;){
        printf("Digite o numero %d[-1 para finalizar]: ", i+1);
        scanf("%f", &a);
        if(a == -1){
            break;
        }
        soma += a;
        i++;
    }
    printf("A media dos numeros eh: %.2f", soma/i);

    return 0;
}