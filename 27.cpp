#include<stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n,m,l,c;

	printf("\n Digite o número de linhas:\n");
	scanf("%d",&n);
	printf("\n Digite o número de colunas:\n");
	scanf("%d",&m);
	
  int matriz[n][m];
  int matriz2[n][m];

	printf("\n Digite os valores da matriz 1:\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\n Matriz1[%d][%d]=",l,c);
			scanf("%d",&matriz[l][c]);
			
		}
	}
	
	printf("\n A matriz 1 digitada foi:\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz[l][c]);
		}
		printf("\n");
	}

  printf("\n Digite os valores da matriz 2:\n");
	
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("\nmatriz[%d][%d]=",l,c);
			scanf("%d",&matriz2[l][c]);
			
		}
	}
	
	printf("\n A matriz 2 digitada foi:\n");
	for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz2[l][c]);
		}
		printf("\n");
	}
	
  printf("\n Resultado: \n\n");

  for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz[l][c]);
		}
		printf("\n");
	}

  printf("\n+\n\n");

  for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz2[l][c]);
		}
		printf("\n");
	}

  printf("\n=\n\n");

 for(l=0;l<n;l++){
		for(c=0;c<m;c++){
			printf("%d  ",matriz2[l][c]+matriz[l][c]);
		}
		printf("\n");
	}

  printf("\n");

	
    return 0;
}
