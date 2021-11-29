#include <stdio.h>
#include <stdlib.h>


/*
13. Faça uma função que leia um número não determinado de valores positivos e retorna a média aritmética dos mesmos. Terminar quando o usuário digitar -1.
*/

float fuu(){
    int i = 0;
    float soma, n, media;

    for(;;){
        
        printf("Digite o valor %d [-1 para]: ", i+1);
        scanf("%f", &n);
        if(n == -1) break;
        else{
            i++;
            soma += n;
        }
    }

    return media = soma / i; 
}

int main(){ 

    float media = 0;

    media = fuu();

    printf("A media dos valores eh: %.2f", media);
    return 0;
}