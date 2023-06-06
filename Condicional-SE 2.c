#include <stdio.h> 
#include <stdlib.h>

int main() {

    char nome[100];    
    int idade; 
    float nota1, nota2, nota3, somaNotas, media; 

    printf("Digite o nome do aluno: ");
    gets(nome);

    fflush(stdin);

    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota do aluno: "); 
    scanf("%f", &nota2); 

    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &nota3);

    system("cls");

    somaNotas = nota1 + nota2 + nota3;
    media = somaNotas/3;

    printf("Aluno: %s \n", nome);
    printf("Idade: %d \n", idade);
    printf("Media Final: %f \n", media);

    if(media >= 7) {
        printf("O Aluno esta aprovado! \n");
    } else {
        printf("O Aluno esta reprovado! \n");
    }

    system("pause");

return 0;
}