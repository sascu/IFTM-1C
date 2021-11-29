#include <stdio.h>
#include <stdlib.h>


/*12. Escreva um procedimento que recebes 3 valores reais X, Y e Z e que verifique se esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso, retornar qual o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor do que a soma do comprimento dos outros dois lados. O procedimento deve identificar o tipo de triângulo formado observando as seguintes definições:

o Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
o Triângulo Isósceles: os comprimentos de 2 lados são iguais.
o Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.

*/

char simornao(float a, float b, float c){
    if(a + b > c && a + c > b && b + c > a) printf("As tres medidas formam um triangulo\n");
        else printf("As tres medidas nao formam um trinagulo\n");
}


int main() {
    float a, b, c;

    printf("Digite tres valores: ");
    scanf("%f %f %f", &a, &b, &c);

    simornao(a, b, c);
    return 0;
}
    