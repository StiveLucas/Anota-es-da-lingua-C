#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5

int main(){
	//Localização.
	setlocale(LC_ALL, "");
	
	//Variáveis.
	int numero[TAM], contadorPar = 0, contadorImpar = 0, contadorGeral = 0;
	int contadorPositivo = 0, contadorNegativo = 0, maiorNumero = INT_MIN, menorNumero = INT_MAX;
	float mediaPar, mediaImpar, mediaGeral;
	int somaPar = 0, somaImpar = 0, somaGeral = 0;
	
	//Dados do usuário.
	printf("Digite APENAS (5) números.");
	
	int i = 0;
	
	for(i = 0; i < 5; i++){
		printf("\nDigite %iº número: ", i + 1);
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
	printf("\nQuantidades de números:");
	printf("\nPares: %i", contadorPar);
	printf("\nÍmpares: %i", contadorImpar);
	printf("\nPositivos: %i", contadorPositivo);
	printf("\nNegativos: %i", contadorNegativo);
	printf("\nNúmeros inseridos: %i", contadorGeral);
	printf("\n------");
	printf("\nMaior número: %i", maiorNumero);
	printf("\nMenor número: %i", menorNumero);
	printf("\n------");
	printf("\nMédia dos números:");
	printf("\nPares: %.1f", mediaPar);
	printf("\nÍmpares: %.1f", mediaImpar);
	printf("\nTodos os números: %.1f", mediaGeral);
	
	
	
	return 0;
}
