#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Localiza��o.
	setlocale(LC_ALL, "");
	
	//Comando come�a aqui.
//Comando i � um condi��o pode ser qualquer coisa. Aqui ele est� valendo 1
{
	int i= 1;
	
	//While � o comando de repeti��o, o comando vai repetir at� 'i' valer 10
	
	while(i <= 10){
		printf("\n%d", i);
		
		//Aqui onde o comando somar� i + 1, e depois ir� repetir.
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
