#include <stdio.h>
	void main() {
		float salario, reajuste;
		
		printf("Informe o seu salario para o reajuste: ");
		scanf("%f", &salario);
			
			if(salario < 500){
				reajuste = salario*1.15;
				printf("O seu salario apos o reajuste sera de %.2f", reajuste);
 			
 			}else if((salario >= 500) && (salario <= 1000)){
 				reajuste = salario*1.10;
				printf("O seu salario apos o reajuste sera de %.2f", reajuste);
			
			}else if(salario > 1000){
				reajuste = salario*1.05;
				printf("O seu salario apos o reajuste sera de %.2f", reajuste);
			}
}
