#include <stdio.h>
#include <stdlib.h>

void soma(int n1, int n2){
	int soma;
	n1 = 10;
	n2 = 0;
	soma = n1 +n2;
	printf("Soma: %d \n", soma);
}

void subtracao(int n1, int n2){
	int subtracao;
	n1 = 10;
	n2 = 0;
	subtracao = n1 +n2;
	printf("subtracao: %d \n", soma);
}
int main(){
	int numeroUm, numeroDois;
	
	printf("Digite um numero: ");
	scanf("%d",&numeroUm);
	
	printf("Digite outro numero: ");
	scanf("%d", &numeroDois);
	
	soma(numeroUm,numeroDois);
	subtracao(numeroUm,numeroDois);
	
	
	return 0;
}
