#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tam = 0,escolha=0,k, numAleatorio, soma=0,valor,tva=0;

	printf("\n Qual o tamanho do vetor?\n");
	scanf("%d",&tam);	
	int v[tam];
	
	printf("\n Qual valor você deseja encontrar no vetor?\n");
	scanf("%d",&valor);
	

	printf("\n Digite os valores do vetor:\n\n");
	for(k=0;k<tam;k++){
		printf("[%d] = ",k);
		scanf("%i",&v[k]);
	}

	printf("\n\nO vetor contém os seguintes valores:\n\n");
	
	for(k=0;k<tam;k++){
		printf("[%d] = %d\n",k,v[k]);
		if(v[k] == valor){
			tva++;
		}
	}
	
	printf("\n\nO valor %d apareceu %d vezes.",valor,tva);
	return 0;
}

