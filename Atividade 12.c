#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");

    int i, j;
    char disciplinas[3][250];
    float notas[3][2];
    float media[3];
    float somaNotas;

    for (i = 0; i < 3; i++)
    {
        printf("Digite o nome da %dª disciplina: ", i+1);
        gets(disciplinas[i]);

        for (j = 0; j < 2; j++)
        {
            printf("Digite o valor da %dª nota: \n", j+1);
            scanf("%f", &notas[i][j]);

            somaNotas += notas[i][j];
        }

        media[i] = somaNotas / j;
        somaNotas = 0;
    }

    for (i = 0; i < 3; i++)
    {
        printf("%dº nome: %s \n", i + 1, disciplinas[i]);

        for (j = 0; j < 2; j++)
        {
            printf("%d nota: %f \n", j + 1, notas[i][j]);
        }
    }
    printf("Média: %f", media[i]);

    return 0;
}