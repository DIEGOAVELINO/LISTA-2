#include <stdio.h>
#include <stdlib.h>

int main(){

	int vetor[10],k;
		printf("\n Digite os vetores:\n");
	for(k=0;k<10;k++){
	
		scanf("%d",&vetor[k]);
		if(vetor[k]<=0){
			vetor[k]=1;
		}
	}
		printf("\n\n Resultado:");
	for(k=0;k<10;k++){
		printf("\n%d",vetor[k]);
	}
	
    return 0;
}
