#include <stdio.h>
#include <locale.h>
 
int main(){
	setlocale(LC_ALL, "Portuguese");
    int quantAlunos,k,l,pont[10];
    char gabarito[10],respostas[10];
   
    printf("\n Quantos alunos tem na turma?\n");
    scanf("%i",& quantAlunos);
   
    char nomes_Alunos[quantAlunos][100];
   
    printf("\n Digite os nomes dos Alunos:\n\n");
    for(k=0;k<quantAlunos;k++){
        printf("[%i] - ",k);
        scanf("%s",&nomes_Alunos[k]);
        pont[k]=0;
    }
   
    printf("\n");
   
    printf("\n Digite o gabarito da prova contendo múmero da questão e alternativa correta:");
   
    for(k=0;k<10;k++){
        printf("\n Questão %d: ",k);
        scanf("%s",&gabarito[k]);
    }
    printf("\n Digite as resposta de cada aluno:\n\n");
   
    for(k=0;k<quantAlunos;k++){
        for(l=0;l<10;l++){
            printf("\n Aluno %s \n Questão %d:",nomes_Alunos[k],l);
            scanf("%s",&respostas[l]);
            if(respostas[l]==gabarito[l]){
            	pont[k]++;	
            }
            
        }
        
        printf("\n");
    }
   
    printf("\n Resultado final:\n\n");
   for(k=0;k<quantAlunos;k++){
        printf("\n Aluno %s tem %d acertos.",nomes_Alunos[k],pont[k]);
    }
    return 0;
}
