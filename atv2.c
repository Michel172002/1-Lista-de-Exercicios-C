#include <stdio.h>

	void  main(){
		int numero, result1;
		
		printf("Informe um numero inteiro:");
		scanf("%i", &numero);
		
		result1 = numero % 2;
		
		switch(result1){
			case 0:
			printf("seu numero e PAR.");
			break;

			default:
			printf("Seu numero e IMPAR.");
			break;
		}
	}