#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main() {

    float notas[4]; 
    float somaNotas, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &notas[1]);

    printf("Digite a segunda nota: ");
    scanf("%f", &notas[2]);

    printf("Digite a terceira nota: ");
    scanf("%f", &notas[3]);

    printf("Digite a quarta nota: ");
    scanf("%f", &notas[4]);

    somaNotas = notas[1] + notas[2] + notas[3] + notas[4]; 
    media = somaNotas/4;

    printf("Primeira Nota: %.1f\n", notas[1]);
    printf("Segunda Nota: %.1f\n", notas[2]);
    printf("Terceira Nota: %.1f\n", notas[3]);
    printf("Quarta Nota: %.1f\n", notas[4]);
    printf("Media: %f\n", media);

   getch();

return 0;
}