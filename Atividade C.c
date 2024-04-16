#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5

int main(){
	//Localiza��o.
	setlocale(LC_ALL, "");
	
	//Vari�veis.
	int numero[TAM], contadorPar = 0, contadorImpar = 0, contadorGeral = 0;
	int contadorPositivo = 0, contadorNegativo = 0, maiorNumero = INT_MIN, menorNumero = INT_MAX;
	float mediaPar, mediaImpar, mediaGeral;
	int somaPar = 0, somaImpar = 0, somaGeral = 0;
	
	//Dados do usu�rio.
	printf("Digite APENAS (5) n�meros.");
	
	int i = 0;
	
	for(i = 0; i < 5; i++){
		printf("\nDigite %i� n�mero: ", i + 1);
		scanf("%i", &numero[i]);
		
		if(numero[i] % 2 == 0){
			somaPar += numero[i];
			contadorPar += 1;
		}else{
			somaImpar += numero[i];
			contadorImpar += 1;
		}
		
		if(numero[i] > 0){
			contadorPositivo += 1;
		}else{
			contadorNegativo += 1;
		}
		
		contadorGeral += 1;
		
		
		if(numero[i] > maiorNumero){
			maiorNumero = numero[i];
		}
		
		if(numero[i] < menorNumero){
			menorNumero = numero[i];
		}
		
		
	}
	
	//Calculos.
	mediaPar = somaPar / contadorPar;
	mediaImpar = somaImpar / contadorImpar;
	mediaGeral = somaGeral / contadorGeral;
	
	
	system("cls");
	//Resultado.
	printf("---Resultados---");
	printf("\nQuantidades de n�meros:");
	printf("\nPares: %i", contadorPar);
	printf("\n�mpares: %i", contadorImpar);
	printf("\nPositivos: %i", contadorPositivo);
	printf("\nNegativos: %i", contadorNegativo);
	printf("\nN�meros inseridos: %i", contadorGeral);
	printf("\n------");
	printf("\nMaior n�mero: %i", maiorNumero);
	printf("\nMenor n�mero: %i", menorNumero);
	printf("\n------");
	printf("\nM�dia dos n�meros:");
	printf("\nPares: %.1f", mediaPar);
	printf("\n�mpares: %.1f", mediaImpar);
	printf("\nTodos os n�meros: %.1f", mediaGeral);
	
	
	
	return 0;
}
