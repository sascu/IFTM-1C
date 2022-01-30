#include <stdio.h>
#include <stdlib.h>

/*
Um determinado material radioativo perde metade de sua massa a cada 50 segundos.
Dada a massa inicial, em gramas, fazer um algoritmo que determine o tempo necessário
para que essa massa se torne menor do que 0,5 gramas. Escreva a massa inicial, a massa
final e o tempo calculado em horas, minutos e segundos.
*/

int main(void){
    int tt, th, tm, ts;
    float inicio, final;

    printf("Massa inicial: ");
    scanf("%f", &inicio);
    final = inicio;
    tt = 0;
    
    while (final >= 0.5){
        final /= 2;
        tt += 50;
    }

    th = (tt / 3600);
    tm = (tt % 3600) / 60;
    ts = (tt % 3600) % 60;

    printf("\nMassa inicial: %.2f g\n", inicio);
    printf("Massa final: %f g\n", final);
    printf("Tempo total: %d s\n", tt);

    printf("Tempo[h:m:s]: %d:%d:%d", th, tm, ts);

    return 0;
}