#include <stdio.h>

	void main(){
		int a, b, b2, d;
		printf("Descubra o seu perfil!! \n");
		printf("0 - Timido;\n");
		printf("1 - Sonhador;\n");
		printf("2 - Paquerador;\n");
		printf("3 - Atraente;\n");
		printf("4 - Irresistivel.\n");
		
		printf("Informe o ano em que voce nasceu para descubrir o seu perfil:");
		
		scanf("%i", &a);
		b = a / 100;
		b2 = a % 100;
		d = (b + b2) % 5;
		
		switch(d){
			case 0:
				printf("O seu perfil e Timido.");
				break;

			case 1:
				printf("O seu perfil e Sonhador.");
				break;

			case 2:
				printf("O seu perfil e Paquerador.");
				break;

			case 3:
				printf("O seu perfil e Atraente.");
				break;

			case 4:
				printf("O seu perfil e Irresistivel.");
				break;
		}

	}