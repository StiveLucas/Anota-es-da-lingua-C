#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	//Localiza��o.
	setlocale(LC_ALL, "");
	
	//Anota��o pra maior e menor.
	//N�o esque�a dos comandos 'maiorNumero = INT_MIN' E 'menorNumero = INT_MAX.'
	
	int  numero, maiorNumero = INT_MIN, menorNumero = INT_MAX;
	
	//Comando passo a passo.

		if(Variavel > maiorNumero){
		maiorNumero = Variavel;
	}
	
	if(Variavel < menorNumero){
		menorNumero = Variavel;
	}
	
	//Comando montado.
	
	if(numero > maiorNumero){
		maiorNumero = numero;
	}
	
	if(numero < menorNumero){
		menorNumero = numero;
	}
}
