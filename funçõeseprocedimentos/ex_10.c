#include <stdio.h>
#include <stdlib.h>


/*
10. Faça uma função que recebe, por parâmetro, a altura (alt) e o sexo de uma pessoa e retorna o seu peso ideal. Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7 x alt - 58 e, para mulheres, peso ideal = 62.1 x alt - 44.7.
*/

float calcu(float alt, char s[22]){
    float n;

    if(s[0] == 'M' || s[0] == 'm') n = 62.1 * alt - 44.7;
    else if(s[0] == 'H' || s[0] == 'h') n = 72.7 * alt - 58;

    return n;
}

int main(){ 

    float alt;
    char sexo[22];

    printf("Altura: ");
    scanf("%f", &alt);

    setbuf(stdin, NULL);

    printf("Sexualidade [H or M]: ");
    gets(sexo);

    printf("Peso ideal: %.2f", calcu(alt, sexo));
    return 0;
}