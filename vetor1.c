#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main() {

    float notas[3]; 
    float somaNotas, media;

    printf("Digite a primeira nota: \n");
    scanf("%f", &notas[1]);

    printf("Digite a segunda nota: \n");
    scanf("%f", &notas[2]);

    printf("Diginte a terceira nota: \n");
    scanf("%f", &notas[3]);

    somaNotas = notas[1] + notas[2] + notas[3]; 
    media = somaNotas/3;

    printf("Primeira Nota: %.1f\n", notas[1]);
    printf("Segunda Nota: %.1f\n", notas[2]);
    printf("Terceira Nota: %.1f\n", notas[3]);
    printf("Media: %f\n", media);

   getch();

return 0;
}