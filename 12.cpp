
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int k,tam,face[6];

	printf("\n Quantas vezes o dado foi jogado? \n");
	scanf("%d",&tam);
	
	int dado[tam];
	
	for(k=0;k<6;k++){
		face[k]=0;
	}
		
	printf("\n Digite as faces do dado:\n");
	for(k=0;k<tam;k++)
	{
		
		scanf("%d",&dado[k]);
		
		switch(dado[k]){
			case 1:
				face[0]=face[0]+1;
				break;
			case 2:
				face[1]=face[1]+1;
				break;
			case 3:
				face[2]=face[2]+1;
				break;
			case 4:
				face[3]=face[3]+1;
				break;
			case 5:
				face[4]=face[4]+1;
				break;
			case 6:
				face[5]=face[5]+1;
				break;
				
		}
		
	}
	printf("\n Face / Número de aparições",(k+1),face[k]);
	for(k=0;k<6;k++){
		printf("\n\n [%d] / [%d]",(k+1),face[k]);
		
	}
	
    return 0;
}
