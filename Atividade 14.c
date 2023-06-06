#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um algoritmo que receba o nome de três disciplinas, receba três notas para cada disciplina e mostre a média
// ponderada de cada disciplina:
int main()
{

    setlocale(LC_ALL, "");

    int i, j;
    char disciplinas[3][250];
    char notas[3][3];
    float media[3];
    float somaNotas;

    for (i = 0; i < 3; i++)
    {
        printf("Digite a %dº disciplina: ", i + 1);
        gets(disciplinas[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Digite a %dº nota: ", j + 1);
            scanf("%s", &notas[i][j]);

            somaNotas += notas[i][j];
        }
        media[i] = somaNotas / i;
        somaNotas = 0;
        fflush(stdin);
    }
    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf("%dº disciplina: %s \n", i + 1, disciplinas[i]);

        for (j = 0; j < 3; j++)
        {
            printf("%d notas: %s \n", notas[i][j]);
        }
    }
    printf("Media: %f", media[i]);
    return 0;
}