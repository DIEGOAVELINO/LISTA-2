#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int tam = 0,k;
	char v[100][100]; 

	printf("Qual o tamanho do vetor?\n");
	do{
		if(tam>=100){
			printf("\n O tamanho máximo é 100! \nTente outra vez\n\n Qual o tamanho do vetor?\n");
			scanf("%i",&tam);
		}else{
			scanf("%i",&tam);
		}
	
	}while(tam>100);
		
	printf("\n\nDigite os valores do vetor:\n\n");
	for(k=0;k<tam;k++){
		fflush(stdin);
		gets(v[k]);
		
		
	}
	
	printf("\n\n O vetor em ordem inversa:\n\n");
	
	for(k=tam-1;k>=0;k--){
		printf("[%d] = %s\n",k,v[k]);
	}
	
    return 0;
}
