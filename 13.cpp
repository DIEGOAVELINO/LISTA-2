#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int Resultado[100],k,V1,V2,V3=0,n,m;

	printf("\n Qual o tamanho do vetor A?\n");
	scanf("%d",&n);
	int vetor1[n];
		
	printf("\n Digite os valores do vetor A:\n\n");
	
	for(k=0;k<n;k++){
		scanf("%d",&vetor1[k]);
	}
	
	printf("\n Qual o tamanho do vetor B?\n");
	scanf("%d",&m);
	int vetor2[m];
	
	printf("\n Digite os valores do vetor B:\n\n");
	
	for(k=0;k<m;k++){
		scanf("%d",&vetor2[k]);
	}
	
	for(V1=0;V1<n;V1++){
	for(V2=0;V2<m;V2++){
	if(vetor1[V1]==vetor2[V2]){
	Resultado[V3]=vetor1[V1];
	V3++;
			}
		}
	}
	
	printf("\n Valores em comum:\n\n");
	
	for(k=0;k<V3;k++){
		printf(" %d\n",Resultado[k]);
	}
	
	
    return 0;
}
