#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n=0,m=0,l,c,numAleatorio;

		printf("\n Digite o número de linhas:\n");
    	scanf("%d",&n);
	    printf("\n Digite o número de colunas:\n");
	    scanf("%d",&m);

	int matriz[n][m];
	
	printf("\n Gerando a matriz:\n\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
      numAleatorio = rand() % 10;
			printf("%d ",numAleatorio);
			matriz[l][c]=numAleatorio;
		}
    printf("\n");
	}
	
	printf("\n A matriz gerada foi:\n\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz[l][c]);
		}
		printf("\n");
	}
  printf("\n A diagonal Secundaria é:");
  	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
      if(l==c){
        printf("%d ",matriz[l][m-c-1]);
      }
			
		}

	}
    return 0;
}
