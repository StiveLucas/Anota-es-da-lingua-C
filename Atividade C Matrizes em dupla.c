#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
	//Localiza��o.
	setlocale(LC_ALL, "");
	
	//Vari�veis.
	char disciplinas[3][200];
	float notas[3][3], mediaCada[3];
	int soma = 0, somaPeso = 0, peso;
	
	//Dados do usu�rio.
	int x;
	int y;
	
	printf("Digite tr�s disciplinas e suas tr�s notas e d� o peso.");
	
	for(x = 0; x < 3; x++){
		printf("\nDigite o nome da %i� disciplina: ", x + 1);
		scanf("%s", &disciplinas[x]);
	
	for(y = 0; y < 3; y++){
		do{
			
		somaPeso = 0;
		
		printf("\nDigite a %i� nota: ", y + 1);
		scanf("%f", &notas[x][y]);
		fflush(stdin);
		
	do{
		printf("\nPeso: ");
		scanf("%i", &peso);
		
		somaPeso += peso;
	
		if(notas[x][y] > 10 || notas[x][y] < 0){
			printf("\nDigite n�meros acima de (0) e abaixo de (10).");
		}
		
	}while(notas[x][y] > 10 || notas[x][y] < 0);

	soma += notas[x][y];

	if(somaPeso > 10){
		printf("\nA soma dos pesos n�o podem passar de 10.");
	}
	
}while(somaPeso > 10);
   }
 
	mediaCada[x] = soma / y;	
	soma = 0;
}
	
	
	system("cls");
	//Resultados.
	printf("---Resultados---");
	for(x = 0; x < 3; x++){
		printf("\nNome da %i� disciplina: %s", x + 1, disciplinas[x]);
		
		for(y = 0; y < 3; y++){
			printf("\n%i� nota: %.1f", y + 1, notas[x][y]);
		}
		
		printf("\nM�dia: %.1f", mediaCada[x]);
	}
	
	
	
	return 0;	
}
