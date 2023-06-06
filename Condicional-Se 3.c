#include <stdio.h> 
#include <stdlib.h>

int main() {

    float valor1, valor2, soma;
    float media, produto;

    printf("Digite um valor: ");
    scanf("%f", &valor1);

    printf("Digite outro valor: ");
    scanf("%f", &valor2);

    system("cls");

    produto = valor1 * valor2;
    soma = valor1 + valor2;
    media = soma/2;
    

    printf("Media: %f \n", media);
    printf("Soma: %f \n", soma);
    printf("Produto: %f \n", produto);

    if(valor1 > valor2) {
        printf("Maior valor: %f \n", valor1);
        printf("Menor valor: %f \n", valor2);
    } else {
        printf("Maior valor: ¨%f \n", valor2);
        printf("Menor valor: %f \n", valor1);
    }

return 0;
}