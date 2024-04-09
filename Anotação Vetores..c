#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Localização.
	setlocale(LC_ALL, "");
	
	//Anotação de Vetores.
	
	//Variáveis.
	int numeros[5]; //(numero) é o vetor, entre ([]) é a quantidade de vetores que você vai atribuir.
	 numeros[0] = 1; //Você tambem pode usar uma biblioteca chamada "#define TAM 'Número desejado'"
	 numeros[1] = 2;
	 numeros[2] = 3;
	 numeros[3] = 4;
	 numeros[4] = 5;
	 
	 //Exibindo os resultados.
	 printf("Elemento 1: %i\n", numeros[0]);
	 printf("Elemento 2: %i\n", numeros[1]);
	 printf("Elemento 3: %i\n", numeros[2]);
	 printf("Elemento 4: %i\n", numeros[3]);
	 printf("Elemento 5: %i\n", numeros[4]);
	
	system("cls");
	//Exemplo usando vetores com laço de repetição
	int vetor[5];
	int i;
	
	printf("Digite os elementos do vetor:\n");
	 for(i = 0; i < 5; i++){
	 	printf("Elementos %d: ", i + 1);//Não esqueça do 'i + 1'.
	 	scanf("%d", &vetor[i]);

	 }
	
	//Exibindo dados
	for(i = 0; i < 5; i++){
		printf("Elementos %d: %d\n", i + 1, vetor[i]);
	}
	
	
	return 0;
}
