#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	float notas[5],maiornota,menornota,soma=0;
	int k,pma_Nota,pme_Nota;
	
	for(k=0;k<5;k++){
		scanf("%f",&notas[k]);
		if(k==0){
			maiornota=notas[k];
			menornota=notas[k];
			pma_Nota=0;
			pme_Nota=0;
			
		}
		
		if(maiornota<notas[k]){
			maiornota=notas[k];
			pma_Nota=k;
			
		}
		
		if(menornota>notas[k]){
			menornota=notas[k];	
			pme_Nota=k;
			
		}
	}
	

	for(k=0;k<5;k++){
		if(k!=pme_Nota && k!=pma_Nota){
			soma+=notas[k];
		}
	}
	
	printf("\n%.1f",soma);
    return 0;
}
