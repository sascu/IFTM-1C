#include <stdio.h>
#include <stdlib.h>


/*4. Faça um procedimento que recebe por parâmetro o tempo de duração de uma
fábrica expressa em segundos e imprima esse tempo em horas, minutos e
segundos em formato de texto, ex.: 6000 segundos terá um retorno de “01:40:00:

*/
    int conversor(int s){
        int horas, minutos, segundos;

        segundos = s;
        horas = segundos / 3600;
        segundos = segundos % 3600 ;
        minutos = segundos / 60;
        segundos = segundos % 60 ;

        return(printf("Convertido [h:m:s]: %d:%d:%d\n", horas, minutos, segundos));
    }


int main(){ 

    int valor;

    printf("Segundos: ");
    scanf("%d", &valor);

    conversor(valor);

    return 0;
}