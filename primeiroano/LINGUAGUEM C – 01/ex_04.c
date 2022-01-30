#include <stdio.h>
#include <stdlib.h>

/* ENUNCIADO:

Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um
programa em linguagem C para ler o preço do litro da gasolina e o valor do
pagamento, e exibir na tela quantos litros ele conseguiu colocar no tanque.

*/

void main() {
    float x, gasolina, preco;

    printf("Digite o seu dinheiro: ");
    scanf("%f", &x);

    printf("Digite o preco da gasolina: ");
    scanf("%f", &preco);

    gasolina = x / preco;

    printf("Com %.2fR$ voce colocOU %.2fL de gasolina no tanque. Com o preco da gasolina sendo: %.2fR$. \n", x, gasolina, preco);
}