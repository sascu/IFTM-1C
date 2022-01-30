#include <stdio.h>
#include <stdlib.h>


/*
4. Faça um procedimento que recebe por parâmetro o tempo de duração de uma fábrica expressa em segundos e imprima esse tempo em horas, minutos e segundos em formato de texto, ex.: 6000 segundos terá um retorno de “01:40:00:
*/

int main(){ 

    int valor, horas, minutos, segundos;

    printf("Segundos: ");
    scanf("%d", &valor);

    segundos = valor;
    horas = segundos / 3600;
    segundos = segundos % 3600;
    minutos = segundos / 60;
    segundos = segundos % 60;
    
    printf("Convertido [h:m:s]: %d:%d:%d\n", horas, minutos, segundos);

    return 0;
}