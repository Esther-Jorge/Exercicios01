#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Crie um programa que leia 5 números, armazenando em um
//vetor e informe qual é o menor número e o maior.

//Mostre os números informados pelo usuário.

int main(){
    // ACEITANDO CARACTER PARA ACENTO � NESCESSARIO MODIFICAR O UTI PARA ISO 8859-1 
    setlocale(LC_ALL,"");
	int i, num[5], maiornum=0, menornum=INT_MAX;// INT_MAX recebe maior numero positivo de um inteiro
    //INT_MIN coloca o menor numero positivo

	
	for(i =0; i <5; i++){
		printf("Digite o %i numero: ", i);
		scanf("%i", &num[i]);
		
		if(num[i] >= maiornum){
			maiornum = num[i];
			
		}
        
        if(num[i] <= menornum){
			menornum = num[i];
		}
		
	}
	system("cls");
	
	for(i = 0; i <5; i++){
		printf("%i numero: %i \n", i, num[i]);	
    }
    printf("Maior numero: %i ", maiornum);
    printf("Menor numero: %i ", menornum);
    
}