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
int main(){
	int numeroUm, numeroDois, sub;
	
	printf("Digite um numero: ");
	scanf("%d",&numeroUm);
	
	printf("Digite outro numero: ");
	scanf("%d", &numeroDois);
	
	soma(numeroUm,numeroDois); // funcao
	
	sub = subtracao(numeroUm,numeroDois);
	printf("subtracao: %d \n", soma);
	
	return 0;
}
