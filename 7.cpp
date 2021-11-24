#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){
	int tam = 0,escolha=0,k, numAleatorio, par=0;
	float soma=0;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Qual o tamanho dos vetores?\n");
	scanf("%i",&tam);
	
	int v1[tam], v2[tam], v3[tam];
	
	printf("\n Digitar ou Gerar os vetores?\n1-Digitar 2-Gerar\n");
	
	
	do{
		if(escolha == 0)
		{
			scanf("%i",&escolha);
		}else if(escolha != 1 && escolha != 2){
			printf("\nOpção Invalida!\nTente outra vez\n");
			printf("\n Digitar ou Gerar o vetor?\n1-Digitar 2-Gerar\n");
			scanf("%i",&escolha);
		}
	
	}while(escolha != 1 && escolha != 2);
	
	if(escolha == 1){
		printf("\n\nDigite os valores do 1º vetor:\n\n");
		for(k=0;k<tam;k++){
			printf("[%d] = ",k);
			scanf("%i",&v1[k]);
		}
		printf("\n\nDigite os valores do 2º vetor:\n\n");
		for(k=0;k<tam;k++){
			printf("[%d] = ",k);
			scanf("%i",&v2[k]);
		}
	}else if(escolha == 2){
		printf("\n\nGerando os valores do 1º vetor.\n\n");
		for(k=0;k<tam;k++){
			numAleatorio = rand() % 10;
			printf("[%d] = %d\n",k,numAleatorio);
			v1[k] = numAleatorio;
		}
		printf("\n\nGerando os valores do 2º vetor.\n\n");
		for(k=0;k<tam;k++){
			numAleatorio = rand() % 10;
			printf("[%d] = %d\n",k,numAleatorio);
			v2[k] = numAleatorio;
		}
	}
	
	printf("\n\nMultiplicação:\n");
	for(k=0;k<tam;k++){
		v3[k] = v1[k]*v2[k];
		printf("\n%d * %d = %d",v1[k],v2[k],v3[k]);
	}
	
	printf("\n\nVetor resultante:\n\n");
	
	for(k=0;k<tam;k++){
		printf("[%d] = %d\n",k,v3[k]);
	}
	 return 0;
}
