#include <stdio.h>
#include <stdlib.h>

void soma(int n1, int n2){
	int soma;
	n1 = 10;
	n2 = 0;
	soma = n1 +n2;
	printf("Soma: %d \n", soma);
}

int subtracao(int n1, int n2){
	int subtracao;
	n1 = 10;
	n2 = 0;
	subtracao = n1 +n2;
	return subtracao;
}
void cabecalho(){
	printf("----------------------------\n");
	printf("\t-----PROGRAMA SENAI-------\n");
	printf("----------------------------\n");
}

int main(){
	int numeroUm, numeroDois, sub;
	
	cabecalho();
	
	printf("Digite um numero: ");
	scanf("%d",&numeroUm);
	
	printf("Digite outro numero: ");
	scanf("%d", &numeroDois);
	
	//Funcao - void nao retorna um numero
	soma(numeroUm,numeroDois); 
	
	//Funcao com return - retorna um numero
	sub = subtracao(numeroUm,numeroDois);
	printf("subtracao: %d \n", soma);
	
	return 0;
}
