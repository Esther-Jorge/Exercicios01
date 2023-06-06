#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade; // inteiro
    float peso; // real
    char nome[100]; // caracter 99, pois um já é para indenficar que é um vetor
    char sexo; // somente um caracter

    printf("Digite sua idade: "); 
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    fflush(stdin); //limpa o buffer do teclado 

    printf("Digite seu nome: ");
    gets(nome);

    printf("Digite seu sexo: ");
    scanf("%c", &sexo);

    system("cls"); // limpa tela

    printf("Idade: %i \n", idade); //i = inteiro
    printf("Peso: %f \n", peso); // f = float
    printf("Nome: %s \n", nome); // s = string (cadeia de caracteres)
    printf("Sexo: %c \n", sexo); // c = caracter 

    system("pause"); 

return 0;
}