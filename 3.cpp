

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	int tam = 0,escolha=0,k, num_Aleatorio, imp
	=0;
	setlocale(LC_ALL, "Portuguese");
	printf("Qual o tamanho do vetor?\n");
	scanf("%i",&tam);
	
	int vetor[tam];
	
	printf("\nEscolha entre Digitar ou Gerar o vetor:\n 1-Digitar 2-Gerar \n");
	
	
	do{
		if(escolha == 0){
			scanf("%i",&escolha);
		}else if(escolha != 1 && escolha != 2){
			printf("\nOpção Invalida!\nTente outra vez\n");
			printf("\nDigitar ou Gerar o vetor?\n 1-Digitar 2-Gerar\n");
			scanf("%i",&escolha);
		}
	
	}while(escolha != 1 && escolha != 2);
	
	if(escolha == 1){
		printf("\n\n Valores do vetor:\n\n");
		for(k=0;k<tam;k++){
			printf("[%d] = ",k);
			scanf("%i",&vetor[k]);
		}
	}else if(escolha == 2){
		printf("\n\nGerando os valores do vetor.\n\n");
		for(k=0;k<tam;k++){
			num_Aleatorio = rand() % 10;
			printf("[%d] = %d\n",k,num_Aleatorio);
			vetor[k] = num_Aleatorio;
		}
	}
	
	printf("\n\n O vetor contém os valores:\n\n");
	
	
	for(k=0;k<tam;k++){
		printf("[%d] = %d\n",k,vetor[k]);
		if(vetor[k]%2 != 0){
			imp++;
		}
			
	}
	
	printf("\n\n Foram encontrado %d números impares.",imp);
	printf("\n\nSão eles:\n");
	
	for(k=0;k<tam;k++){
		
		if(vetor[k]%2 != 0){
			printf("[%d] = %d\n",k,vetor[k]);
		}
			
	}
		

	
	
	
    return 0;
}
