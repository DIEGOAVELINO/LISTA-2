
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){
	int tam = 0,escolha=0,k, num_Aleatorio, soma=0;
	setlocale(LC_ALL, "Portuguese");
	printf("Qual o tamanho do vetor?\n");
	do{
		if(tam>=100){
			printf("\nO tamanho máximo é 100! \nTente outra vez\n\nQual o tamanho do vetor?\n");
			scanf("%i",&tam);
		}else{
			scanf("%i",&tam);
		}
	
	}while(tam>100);
	
	int vetor[tam];
	
	printf("\nDigitar ou Gerar o vetor?\n(1-Digitar) (2-Gerar)\n");
	
	
	do{
		if(escolha == 0){
			scanf("%i",&escolha);
		}else if(escolha != 1 && escolha != 2){
			printf("\nOpção Invalida!\nTente outra vez\n");
			printf("\nDigitar ou Gerar o vetor?\n(1-Digitar) (2-Gerar)\n");
			scanf("%i",&escolha);
		}
	
	}while(escolha != 1 && escolha != 2);
	
	if(escolha == 1){
		printf("\n\nDigite os valores do vetor:\n\n");
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
	
	printf("\n\nO vetor contém os seguintes valores:\n\n");
	
		for(k=0;k<tam;k++){
			printf("[%d] = %d\n",k,vetor[k]);
			soma+=vetor[k];
		}
		
	printf("\nA soma desses valores é %d",soma);
	
	
	
    return 0;
}
