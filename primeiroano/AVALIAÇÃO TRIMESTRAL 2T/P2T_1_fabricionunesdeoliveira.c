#include <stdio.h>
#include <stdlib.h>

//Questão 1
// FABRICIO NUNES DE OLIVEIRA: fabricionunesdeoliveira


int main(){
    float a, b;

    printf("Digite um numero: ");
    scanf("%f", &a);

    printf("Digite outro numero: ");
    scanf("%f", &b);

    printf("\nSoma: %.2f\n", a+b);
    printf("Multiplicacao: %.2f\n", a*b);
    printf("Os numeros sao: %f e %f", a, b);


    return 0;
}