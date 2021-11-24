
#include<stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n,m,x,l,c,k=0;
	printf("\n Digite o número de linhas:\n");
	scanf("%d",&n);
	printf("\n Digite o número de colunas:\n");
	scanf("%d",&m);
	printf("\n Digite um número(X):\n");
	scanf("%d",&x);
	
	int matriz[n][m];
	
	printf("\n Digite os valores da matriz:\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\n Matriz[%d][%d]=",l,c);
			scanf("%d",&matriz[l][c]);
			if(matriz[l][c]>x){
				k++;
			}
		}
	}
	
	printf("\n A matriz digitada foi:\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d",matriz[l][c]);
		}
		printf("\n");
	}
	printf("\n Existem %d números maiores que %d.",k,x);
	
    return 0;
}
