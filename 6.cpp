#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){
	int tam = 0,k, numAleatorio, num,t=0;
	float soma=0;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Qual o tamanho do vetor?\n");
	scanf("%i",&tam);
	printf("\nQual n�mero voc� deseja procurar?\n");
	scanf("%d",&num);
	
	int v[tam],vB[tam],vP[tam];
	
	printf("\n\nGerando os valores do vetor.\n\n");
	for(k=0;k<tam;k++){
		numAleatorio = rand() % 10;
		printf("[%d] = %d\n",k,numAleatorio);
		v[k] = numAleatorio;
	}
	
	printf("\n\nO vetor cont�m os valores:\n\n");
	
	for(k=0;k<tam;k++){
		printf("[%d] = %d\n",k,v[k]);
		if(v[k]==num){
			vB[t] = v[k];
			vP[t]=k;
			t++;
		}
		
		
	}
	
	if(t == 1){
		printf("\n\nForam encontrados %d n�mero %d, e est�o na seguinte posi��o:\n",t,num);
	}else{
		printf("\n\nForam encontrados %d n�meros %d, e est�o na seguinte posi��o:\n",t,num);
	}
	
	for(k=0;k<t;k++){
		printf("[%d] = %d\n",vP[k],vB[k]);
	}

	return 0;
}
