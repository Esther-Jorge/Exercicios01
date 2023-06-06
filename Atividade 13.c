#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um algoritmo que receba: nome de três bandas musicais; e cinco integrantes para cada banda.
int main()
{
    setlocale(LC_ALL, "");

    int i, j;
    char banda[3][250];
    char nome[3][5];

    for (i = 0; i < 3; i++)
    {
        printf("Digite o nome da %d banda: ", i + 1);
        gets(banda[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Digite o nome do %dº integrante: ", j + 1);
            scanf("%s", &nome[i][j]);
        }
    }

    system("cls");

    for (i = 0; i < 3; i++)
    {
        printf("%d banda: %s \n", i + 1, banda[i]);

        for (j = 0; i < 5; j++)
        {
            printf("%d integrante:%s", j+1, nome[i][j]);
        }
        
    }

    return 0;
}