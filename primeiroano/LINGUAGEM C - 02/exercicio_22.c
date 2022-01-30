#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que, para um número indeterminado de pessoas: leia a idade de
cada uma, sendo que a idade 0 (zero) indica o fim da leitura e não deve ser considerada.
A seguir calcule:
• o número de pessoas;
• a idade média do grupo;
• a menor idade e a maior idade.
*/

int main(void){
    int soma, n, menor, maior, cont, i;
    soma = n = maior = cont = i = 0;
    float media;

    while(1){
        printf("Idade da pessoa %d[0 para parar]: ", cont+1);
        scanf("%d", &n);

        soma+=n;
        if(n==0){
            break;
        }else if(cont==0){
            maior = n;
            menor = n;
        }else if(n>maior){
            maior = n;
        }else if(n<menor){
            menor = n;
        }
        cont++;
    }
    media = soma / cont;
    printf("A menor idade eh: %d\n", menor);
    printf("A maior idade eh: %d\n", maior);
    printf("A media das idades eh: %.2f", media);
    return 0;
}