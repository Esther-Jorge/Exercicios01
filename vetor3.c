#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main() {

    int numeros[5];
    int i;

    for (size_t i = 0; i < 5; i++)
    {
        printf("\n Digite um número: ", i);
        scanf("%d", &numeros[i]);
    }
    
    for (size_t i = 0; i < 5; i++)
    {
       printf("%d\n", i, numeros[i]);
    }
    
    getch();

    return 0;

}