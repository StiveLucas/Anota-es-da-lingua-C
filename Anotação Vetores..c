#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Localiza��o.
	setlocale(LC_ALL, "");
	
	//Anota��o de Vetores.
	
	//Vari�veis.
	int numeros[5]; //(numero) � o vetor, entre ([]) � a quantidade de vetores que voc� vai atribuir.
	 numeros[0] = 1; //Voc� tambem pode usar uma biblioteca chamada "#define TAM 'N�mero desejado'"
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
	//Exemplo usando vetores com la�o de repeti��o
	int vetor[5];
	int i;
	
	printf("Digite os elementos do vetor:\n");
	 for(i = 0; i < 5; i++){
	 	printf("Elementos %d: ", i + 1);//N�o esque�a do 'i + 1'.
	 	scanf("%d", &vetor[i]);

	 }
	
	//Exibindo dados
	for(i = 0; i < 5; i++){
		printf("Elementos %d: %d\n", i + 1, vetor[i]);
	}
	
	
	return 0;
}
