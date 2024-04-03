#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Localização
	setlocale(LC_ALL, "");
	
	//Variável.
 int numero;	
	
	//Dados do usuário.
	printf("Digite o número: ");
	scanf("%i", &numero);
	
	//O comando começa aqui !
	
	if(numero % 2 == 0){ //(Variável) %(Resto da divisão) 2( regra da Formula) 0 (Se o resto n dar zero o número sera impar)
		
		printf("\nNúmero: %i", numero);
		printf("\nPar");
	}else{if(numero % 2 != 0){
		printf("\nImpar");
		}		
	}
	
	
	
	
	
	
	return 0;
}
