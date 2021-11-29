#include <stdio.h>
#include <stdlib.h>


/*
9. Faça uma função que recebe a média final de um aluno por parâmetro e retorna o seu conceito, conforme a tabela abaixo:

Nota Conceito
de 0,0 a 4,9 D
de 5,0 a 6,9 C
de 7,0 a 8,9 B
de 9,0 a 10,0 A

*/

char class(float n){
    if(n >= 0.0 && n <=4.9) return printf("0,0 a 4,9 - D ");
    else if(n >= 5.0 && n <= 6.9) return printf("5,0 a 6,9 - C");
    else if(n >= 7.0 && n <=8.9) return printf("7,0 a 8,9 - B");
    else if(n >= 9 && n <= 10.0) return printf("9,0 a 10,0 - A");
    else return printf("NULL");
}

int main(){ 
    float n;

    printf("Digite a media: ");
    scanf("%f", &n);

    printf("CLASSIFICACAO: \n");
    class(n);

    return 0;
}