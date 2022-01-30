#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa em linguagem C para calcular o novo salário de um funcionário.
Sabe-se que os funcionários que possuem salário atual até R$ 500,00 terão aumento de
20%, os demais terão aumento de 10%. O salário do funcionário deverá ser lido via
teclado do computador e armazenado em uma variável do tipo float.
*/

int main(void){

    float salario;

    printf("Digite o valor do seu salario: ");
    scanf("%f", &salario);

    if(salario<500){
        printf("Seu novo salario eh: %.2f\n", (salario*0.2)+salario);
    }else{
        printf("Seu novo salario eh: %.2f\n", (salario*0.1)+salario);
    }

    return 0;
}