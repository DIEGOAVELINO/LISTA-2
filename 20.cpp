
#include<stdio.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	
	int n,m,l,c,menor;
	
	printf("\n Digite o n�mero de linhas:\n");
	scanf("%d",&n);
	printf("\n Digite o n�mero de colunas:\n");
	scanf("%d",&m);
	
	int matriz[n][m];
	
	printf("\n Digite os valores da matriz:\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\n Matriz[%d][%d]=",l,c);
			scanf("%d",&matriz[l][c]);
			if(l==0&c==0){
				menor=matriz[l][c];
			}else if(matriz[l][c]<menor){
				menor=matriz[l][c];
			}
		}
	}
	
	printf("\n A matriz digitada foi:\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz[l][c]);
		}
		printf("\n");
	}
	printf("\n O menor n�mero da matriz � %d.",menor);
	
    return 0;
}
