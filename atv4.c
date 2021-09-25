#include <stdio.h>

	void main(){
		int mes;
		
		printf("informe um numero de 1 a 12 para saber o mes dele: ");
		scanf("%i", &mes);
		
		switch(mes){
			case 1:
				printf("1 - Janeiro.");
				break;

			case 2:
				printf("2 - Fevereiro.");
				break;

			case 3:
				printf("3 - Marco.");
				break;

			case 4:
				printf("4 - Abril.");
				break;

			case 5:
				printf("5 - Maio.");
				break;

			case 6:
				printf("6 - Junho.");
				break;

			case 7:
				printf("7 - Julho.");
				break;

			case 8:
				printf("8 - Agosto.");
				break;

			case 9:
				printf("9 - Setembro.");
				break;

			case 10:
				printf("10 - Outubro.");
				break;

			case 11:
				printf("11 - Novembro.");
				break;

			case 12:
				printf("12 - Dezembro.");
				break;

			default:
				printf("Valor Invalido!!");
				break;
	}		
}
