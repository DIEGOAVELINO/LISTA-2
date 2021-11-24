#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	int n=0,m=0,l,c,numAleatorio;
  
  do{
    
		if(n>=101 || m>=101){
			printf("\n O tamanho máximo é 100! \nTente outra vez\n\n");
			printf("\n Digite o número de linhas:\n");
    	scanf("%d",&n);
    	printf("\n Digite o número de colunas:\n");
      scanf("%d",&m);
		}else{
			printf("\n Digite o número de linhas:\n");
    	scanf("%d",&n);
	    printf("\n Digite o número de colunas:\n");
	    scanf("%d",&m);
		}
	
	}while(n>=101 || m>=101);
  
	
	
	int matriz[n][m];
	
	printf("\n Gerando a matriz:\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
      numAleatorio = rand() % 10;
			printf("%d ",numAleatorio);
			matriz[l][c]=numAleatorio;
		}
    printf("\n");
	}
	
	printf("\n A matriz gerada foi:\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz[l][c]);
		}
		printf("\n");
	}
  printf("\n\n A diagonal Principal é:");
  	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
      if(l==c){
        printf("%d ",matriz[l][c]);
      }
			
		}

	}
    return 0;
}
