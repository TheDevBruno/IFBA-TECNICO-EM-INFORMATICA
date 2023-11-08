#include <stdio.h>


int main(){
	
	float percentual, notaFinal, media, nota1, nota2, nota3, nota4;
	
		
	printf("Digite quatro notas: \n");
	scanf("%f", &nota1);
	scanf("%f", &nota2);
	scanf("%f", &nota3);	
	scanf("%f", &nota4);
	
	printf("\n Digite um percentual: ");
	scanf("%f", &percentual);
	
	media = (nota1 + nota2 + nota3 + nota4)/4;
	
	notaFinal = ((100 - percentual) / 100) * media;
	
	   if(notaFinal >=7){
		   printf("\n Nota Final: %f", notaFinal);
		   printf("\n Competidor Aprovado");
	   }
		
	return 0;
}