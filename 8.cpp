#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	int tam= 0,k,x;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Qual o tamanho dos vetores?\n");
	scanf("%i",&tam);
	printf("\n\nDigite o valor utilizado na multiplicação:\n");
	scanf("%d",&x);
	
	int v1[tam],v2[tam];


	printf("\n\nDigite os valores do vetor:\n\n");
	for(k=0;k<tam;k++){
		printf("[%d] = ",k);
		scanf("%i",&v1[k]);
	}

     printf("\n\nMultiplicação:\n");
	for(k=0;k<tam;k++){
		v2[k] = v1[k]*x;
		printf("\n%d * %d = %d",v1[k],x,v2[k]);
	}
	
	printf("\n\nVetor resultante:\n\n");
	
	for(k=0;k<tam;k++){
		printf("[%d] = %d\n",k,v2[k]);
	}
	
	return 0;
}
