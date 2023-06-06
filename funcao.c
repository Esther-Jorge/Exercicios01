#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int caucularSoma(int numeroUm, int numeroDois)
{
    return numeroUm + numeroDois;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int primeiroNumero, segundoNumero, soma;

    printf("Digite o primeiro número: ");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo numero: ");
    scanf("%d", &segundoNumero);

    soma = caucularSoma(primeiroNumero, segundoNumero);

    printf("Soma: %d \n", soma)

    return 0
}