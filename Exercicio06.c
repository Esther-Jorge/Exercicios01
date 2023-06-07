#include <stdio.h>
#include <stdlib.h>


void maiorNumero(int n[]){
	int maior=INT_MIN, i;
	for(i = 0; i<2; i++){
		if(n[i] > maior){
			maior = n[i];
		}
	}
	printf("Maior: %d \n", maior);
}

void menorNumero(int n[]){
	int menor=INT_MAX, i;
	for(i = 0; i < 2; i++){
		if(n[i] < menor){
			menor = n[i];
		}
	}
	printf("Menor: %d \n",menor);
}


int main(){
	int numeros[2], i;
	
	for(i=0; i < 2; i++){
		printf("Digite o %d numero:", i+1);
	scanf("%d",&numeros[i]);
}
	
	menorNumero(numeros);
	maiorNumero(numeros);
	
	return 0;
}
