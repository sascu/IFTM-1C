#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que pergunte ao usuário quantos alunos tem na sala dele.
Em seguida, através de um laço while, pede ao usuário para que entre com as notas de
todos os alunos da sala, um por vez. Por fim, o programa deve mostrar a média, aritmética,
da turma.
*/

int main(void){
    int i,a=0, soma=0, n;
    float media;
    printf("Digite o numero de alunos: ");
    scanf("%d", &a);

    while(i!=a){
        printf("Nota do aluno %d: ", i+1);
        scanf("%d", &n);
        soma+=n;
        i++;
    }
    media = soma / a;
    printf("A media da turma eh: %.2f", media);

    return 0;
}