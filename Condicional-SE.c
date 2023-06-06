#include <stdio.h> 
#include <stdlib.h>

int main() {

    float primeiraNota, segundaNota, media, soma;

    printf("Digite a sua primeira nota: ");
    scanf("%f", &primeiraNota);

    printf("Digite a sua segunda nota: ");
    scanf("%f", &segundaNota);

    soma = primeiraNota + segundaNota;
    media = soma/2;

    printf("Media Final: %f \n",  media);

    if(media >= 7) {
        printf("Aprovado");
    } else if (media >= 5) {
        printf("Recuperacao");
    } else {
        printf("Reprovado");
        }  
    


return 0;
}