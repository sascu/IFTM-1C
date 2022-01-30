#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
1. Faça uma função que recebe por parâmetro o raio de uma esfera, calcule e retorne o seu volume (v = 4*PI *R^3/3). Valor PI= 3.1416.
*/

float volume(float raio){
    return (4*3.1416 *pow(raio, 3))/3;
}


int main(){ 
    
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    
    printf("O volume eh: %.2f\n", volume(raio));

    return 0;
}