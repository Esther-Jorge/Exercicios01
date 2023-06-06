#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calcularSoma(int numeroUm, int numeroDois)
{
    int soma;
    soma = numeroUm + numeroDois;
    printf("Soma: %d \n",soma);
}

int main(){

setlocale(LC_ALL,"portuguese");

int primeirNumero, segundaNumero;

printf("Digite o primeiro numero:");
scanf("%d",&primeirNumero);

printf("Digite o segundo numero:");
scanf("%d",&segundaNumero);

calcularSoma(primeirNumero,segundaNumero);


    return 0;
}