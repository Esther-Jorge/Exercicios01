#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calcularSoma(int numeroUm, int numeroDois)
{
    return numeroUm + numeroDois;
}

int main(){
setlocale(LC_ALL,"portuguese");
int primeirNumero, segundaNumero, soma;

printf("Digite o primeiro numero:");
scanf("%d",&primeirNumero);

printf("Digite o segundo numero:");
scanf("%d",&segundaNumero);

soma = calcularSoma(primeirNumero,segundaNumero);

printf("Soma: %d \n", soma)
    return 0;
}