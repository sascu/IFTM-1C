// QUESTÃO 3
// FABRICIO NUNES DE OLIVEIRA: fabricionunesdeoliveira

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Faça uma função que recebe, por parâmetro, a altura (em metros) e o sexo de uma pessoa (M ou F) e retorna o seu peso ideal. Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7 * altura - 58. Para mulheres, peso ideal = 62.1 * alttura - 44.7. Imprimir na tela a seguinte mensagem: VOCÊ É DO SEXO X, TEM UMA ALTURA DE Y METROS E SEU PESO IDEAL É Z. X você deverá substituir por MASCULINO ou FEMININO, Y e Z são a altura e o peso ideal

float ideal(float alt, char sexo[10]){
    if(sexo[0] == 'M' || sexo[0] == 'm') return 72.7 * alt - 58;
    else if(sexo[0] == 'f' || sexo[0] == 'F') return 62.1 * alt - 44.7;
}

int main(){
    float alt;
    char sexo[10];

    printf("Digite sua altura em metros: ");
    scanf("%f", &alt);

    setbuf(stdin, NULL);

    printf("Qual o seu sexo [M ou F]: ");
    gets(sexo);
    
    if(sexo[0] == 'f' || sexo[0] == 'F') printf("VOCE EH DO SEXO FEMININO, TEM UMA ALTURA DE %.2f METROS E SEU PESO IDEAL EH %.2f.", alt, ideal(alt, sexo));
    else if(sexo[0] == 'm' || sexo[0] == 'M') printf("VOCE EH DO SEXO MASCULINO, TEM UMA ALTURA DE %.2f METROS E SEU PESO IDEAL EH %.2f.", alt, ideal(alt, sexo));
}