#include <stdio.h>
#include <stdlib.h>


/*
6. Faça uma função que recebe a idade de um nadador por parâmetro e retorna a categoria desse nadador de acordo com a tabela abaixo:

Idade Categoria
5 a 7 anos A
8 a 10 anos B
11-13 anos C
14-17 anos D
Maiores de 18 anos (inclusive) E
*/

char idade(int n){
    if(n >= 5 && n <=7) return printf("5 a 7 anos - A");
    else if(n >= 8 && n <= 10) return printf("8 a 10 anos - B");
    else if(n >= 11 && n <= 13) return printf("11 a 13 anos - C");
    else if(n >= 14 && n <= 17) return printf("14 a 17 anos - D");
    else if(n >= 18) return printf("Maior de idade - E");
    else return printf("NULL");
}

int main(){ 
    int n;

    printf("Digite sua idade, nadador: ");
    scanf("%d", &n);

    idade(n);

    return 0;
}