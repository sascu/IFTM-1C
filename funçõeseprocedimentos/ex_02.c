#include <stdio.h>
#include <stdlib.h>

/*2. Escreva uma função que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a letra for A a função calcula e retorna a média aritmética das notas do aluno, se for, P a sua médi poanderada (pesos: 5, 3 e 2) e se não for nenhuma das letras anteriores retornar o valor -1;
*/

float ativdois(float a, float b, float c, char d){
    if(d == 'a' || d == 'A'){
        return (a+b+c)/3;
    }else if(d == 'p' || d == 'P'){
        return (a*5+b*3+c*2)/10;
    }else{
        return -1;
    }
}


int main(){ 

    float a, b, c;
    char d;
    
    printf("Nota 1: ");
    scanf("%f", &a);
    printf("Nota 2: ");
    scanf("%f", &b);
    printf("Nota 3: ");
    scanf("%f", &c);

    setbuf(stdin, NULL);

    printf("Operacao: ");
    scanf("%c", &d);

    printf("O resutado final eh: %.2f\n", ativdois(a, b, c, d));

    return 0;
}