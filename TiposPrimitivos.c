#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade = 10; // ineteiro
    float peso = 60.2; // real
    char nome[100] = "Marta"; // caracter 99, pois um já é para indenficar que é um vetor
    char sexo = 'F'; // somente um caracter

    printf("Idade: %d \n", idade); //d = decimal
    printf("Peso: %f \n", peso); // f = float
    printf("Nome: %s \n", nome); // s = stream (cadeia de caracteres)
    printf("Sexo: %c \n", sexo); // c = caracter 

return 0;
}