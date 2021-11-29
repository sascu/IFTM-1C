#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
22. Crie uma função em linguagem C chamada dado() que retorna, através de sorteio, um número de 1 até 6.
*/

int dado(){
    return 1 + (rand() % 6);
}

int main(){

    srand(time(NULL));
    printf("O numero sorteado eh: %d\n", dado());

    return 0;
}