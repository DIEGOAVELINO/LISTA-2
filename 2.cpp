
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	int tam= 0,escolha=0,k, num_Aleatorio, ma=0, me=0;
	setlocale(LC_ALL, "Portuguese");
	printf("\n Qual o tamanho do vetor?\n");
	scanf("%i",&tam);
	
	int vetor[tam];
	
	printf("\n Escolha entre Digitar ou Gerar o vetor:\n 1-Digitar 2-Gerar\n");
	
	
	do{
		if(escolha == 0){
			scanf("%i",&escolha);
		}else if(escolha != 1 && escolha != 2){
			printf("\n Opção Invalida!\nTente outra vez\n");
			printf("\n Digitar ou Gerar o vetor?\n1-Digitar 2-Gerar\n");
			scanf("%i",&escolha);
		}
	
	}while(escolha != 1 && escolha != 2);
	
	if(escolha == 1){
		printf("\n\nDigite os valores do vetor:\n\n");
		for(k=0;k<tam;k++){
			printf("[%d] = ",k);
			scanf("%i",&vetor[k]);
			ma=vetor[k];
			me=vetor[k];
		}
	}else if(escolha == 2){
		printf("\n\nGerando os valores do vetor.\n\n");
		for(k=0;k<tam;k++){
			num_Aleatorio = rand() % 10;
			printf("[%d] = %d\n",k,num_Aleatorio);
			vetor[k] = num_Aleatorio;
			ma=vetor[k];
			me=vetor[k];
		}
	}
	
	printf("\n\nO vetor contém os seguintes valores:\n\n");
	
	
	for(k=0;k<tam;k++){
		printf("[%d] = %d\n",k,vetor[k]);
		if(vetor[k]<me){
			me=vetor[k];
		}if(vetor[k]>ma){
			ma=vetor[k];
		}
			
	}
	
	printf("\n\nO menor número no vetor: %d.",me);
	printf("\n\nO maior número no vetor:%d.",ma);
		

	
	
	
    return 0;
}
