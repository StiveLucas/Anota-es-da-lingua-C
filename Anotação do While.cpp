#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Localização.
	setlocale(LC_ALL, "");
	
	//Comando começa aqui.
//Comando i é um condição pode ser qualquer coisa. Aqui ele está valendo 1
{
	int i= 1;
	
	//While é o comando de repetição, o comando vai repetir até 'i' valer 10
	
	while(i <= 10){
		printf("\n%d", i);
		
		//Aqui onde o comando somará i + 1, e depois irá repetir.
		i++;
	}
}
	
	//Aqui o comando completo.
	int i = 1;
	
	while(i <= 10){
		printf("\n%d", i);
	i++;
	}
	
	
	return 0;
}
