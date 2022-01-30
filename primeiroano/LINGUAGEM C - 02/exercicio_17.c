#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa em linguagem C que mostre todos os números ímpares de 1
até 1000.
*/

int main(void){

    for(int i = 1; i < 1001; i++){
        if(i%2!=0){
            printf("%d ", i);
        }
    }
    return 0;
}