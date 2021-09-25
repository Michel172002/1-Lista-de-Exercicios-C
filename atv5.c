#include <stdio.h>

	void main(){
		int CdE, PdC, CdC, PdCKg, VdC, VdI, VTotal;
		printf("Informe o codigo do estado de origem da carga do caminhao(1 a 5):");
		scanf("%i", &CdE);
		printf("Informe o peso do caminhao em toneladas:");
		scanf("%i", &PdC);
		printf("Informe o codigo da carga(10 a 40):");
		scanf("%i", &CdC);
		PdCKg = PdC * 1000;
		printf("------------------------------------------- \n");
		switch(CdE){
			case 1:
				if((CdC >= 10)&&(CdC <= 20)){
					printf("Peso da Carga em Kilos:%i Kg \n", PdCKg);
					VdC = PdCKg * 100;
					printf("O valor da carga do caminha e:%i R$ \n", VdC);
					VdI = VdC * 0.35;
					printf("O valor do imposto sobre a carga e de:%i R$ \n", VdI);
					VTotal = VdC + VdI;
					printf("O valor total transportado pelo caminhao e de:%i R$", VTotal);
				
				}else if((CdC >= 21)&&(CdC <= 30)){
					printf("Peso da Carga em Kilos:%i Kg \n", PdCKg);
					VdC = PdCKg * 250;
					printf("O valor da carga do caminha e:%i R$ \n", VdC);
					VdI = VdC * 0.35;
					printf("O valor do imposto sobre a carga e de:%i R$\n", VdI);
					VTotal = VdC + VdI;
					printf("O valor total transportado pelo caminhao e de:%i R$", VTotal);
				
				}else if((CdC >= 31)&&(CdC <= 40)){
					printf("Peso da Carga em Kilos:%i Kg \n", PdCKg);
					VdC = PdCKg * 340;
					printf("O valor da carga do caminha e de:%i R$\n", VdC);
					VdI = VdC * 0.35;
					printf("O valor do imposto sobre a carga e de:%i R$ \n", VdI);
					VTotal = VdC + VdI;
					printf("O valor total transportado pelo caminhao e de:%i R$", VTotal);
				
				}else{
					printf("Codigo da Carga Invalido!!");
				}
				break;

			case 2:
				if((CdC >= 10)&&(CdC <= 20)){
					printf("Peso da Carga em Kilos:%i Kg \n", PdCKg);
					VdC = PdCKg * 100;
					printf("O valor da carga do caminha e:%i R$ \n", VdC);
					VdI = VdC * 0.25;
					printf("O valor do imposto sobre a carga e de:%i R$ \n", VdI);
					VTotal = VdC + VdI;
					printf("O valor total transportado pelo caminhao e de:%i R$", VTotal);
				
				}else if((CdC >= 21)&&(CdC <= 30)){
					printf("Peso da Carga em Kilos:%i Kg \n", PdCKg);
					VdC = PdCKg * 250;
					printf("O valor da carga do caminha e:%i R$ \n", VdC);
					VdI = VdC * 0.25;
					printf("O valor do imposto sobre a carga e de:%i R$ \n", VdI);
					VTotal = VdC + VdI;
					printf("O valor total transportado pelo caminhao e de:%i R$", VTotal);
				
				}else if((CdC >= 31)&&(CdC <= 40)){
					printf("Peso da Carga em Kilos:%i Kg \n", PdCKg);
					VdC = PdCKg * 340;
					printf("O valor da carga do caminha e:%i R$\n", VdC);
					VdI = VdC * 0.25;
					printf("O valor do imposto sobre a carga e de:%i R$ \n", VdI);
					VTotal = VdC + VdI;
					printf("O valor total transportado pelo caminhao e de:%i R$", VTotal);
				
				}else{
					printf("Codigo da Carga Invalido!!");
				}
				break;

			case 3:
				if((CdC >= 10)&&(CdC <= 20)){
					printf("Peso da Carga em Kilos:%i Kg \n", PdCKg);
					VdC = PdCKg * 100;
					printf("O valor da carga do caminha e:%i R$ \n", VdC);
					VdI = VdC * 0.15;
					printf("O valor do imposto sobre a carga e de:%i R$ \n", VdI);
					VTotal = VdC + VdI;
					printf("O valor total transportado pelo caminhao e de:%i R$", VTotal);
				
				}else if((CdC >= 21)&&(CdC <= 30)){
					printf("Peso da Carga em Kilos:%i Kg \n", PdCKg);
					VdC = PdCKg * 250;
					printf("O valor da carga do caminha e:%i R$ \n", VdC);
					VdI = VdC * 0.15;
					printf("O valor do imposto sobre a carga e de:%i R$ \n", VdI);
					VTotal = VdC + VdI;
					printf("O valor total transportado pelo caminhao e de:%i R$", VTotal);
				
				}else if((CdC >= 31)&&(CdC <= 40)){
					printf("Peso da Carga em Kilos:%i Kg \n", PdCKg);
					VdC = PdCKg * 340;
					printf("O valor da carga do caminha e:%i R$ \n", VdC);
					VdI = VdC * 0.15;
					printf("O valor do imposto sobre a carga e de:%i R$ \n", VdI);
					VTotal = VdC + VdI;
					printf("O valor total transportado pelo caminhao e de:%i R$", VTotal);
				
				}else{
					printf("Codigo da Carga Invalido!!");
				}
				break;

			case 4:
				if((CdC >= 10)&&(CdC <= 20)){
					printf("Peso da Carga em Kilos:%i Kg \n", PdCKg);
					VdC = PdCKg * 100;
					printf("O valor da carga do caminha e:%i R$ \n", VdC);
					VdI = VdC * 0.05;
					printf("O valor do imposto sobre a carga e de:%i R$ \n", VdI);
					VTotal = VdC + VdI;
					printf("O valor total transportado pelo caminhao e de:%i R$", VTotal);
				
				}else if((CdC >= 21)&&(CdC <= 30)){
					printf("Peso da Carga em Kilos:%i Kg \n", PdCKg);
					VdC = PdCKg * 250;
					printf("O valor da carga do caminha e:%i R$ \n", VdC);
					VdI = VdC * 0.05;
					printf("O valor do imposto sobre a carga e de:%i R$ \n", VdI);
					VTotal = VdC + VdI;
					printf("O valor total transportado pelo caminhao e de:%i R$", VTotal);
				
				}else if((CdC >= 31)&&(CdC <= 40)){
					printf("Peso da Carga em Kilos:%i Kg \n", PdCKg);
					VdC = PdCKg * 340;
					printf("O valor da carga do caminha e:%i R$\n", VdC);
					VdI = VdC * 0.05;
					printf("O valor do imposto sobre a carga e de:%i R$ \n", VdI);
					VTotal = VdC + VdI;
					printf("O valor total transportado pelo caminhao e de:%i R$", VTotal);
				
				}else{
					printf("Codigo da Carga Invalido!!");
				}
				break;

			case 5:
				if((CdC >= 10)&&(CdC <= 20)){
					printf("Peso da Carga em Kilos:%i Kg \n", PdCKg);
					VdC = PdCKg * 100;
					printf("O valor da carga do caminha e:%i R$ \n", VdC);
					printf("Isento de imposto.\n");
					VTotal = VdC;
					printf("O valor total transportado pelo caminhao e de:%i R$", VTotal);
				
				}else if((CdC >= 21)&&(CdC <= 30)){
					printf("Peso da Carga em Kilos:%i Kg \n", PdCKg);
					VdC = PdCKg * 250;
					printf("O valor da carga do caminha e:%i R$ \n", VdC);
					printf("Isento de imposto.\n");
					VTotal = VdC;
					printf("O valor total transportado pelo caminhao e de:%i R$", VTotal);
				
				}else if((CdC >= 31)&&(CdC <= 40)){
					printf("Peso da Carga em Kilos:%i Kg \n", PdCKg);
					VdC = PdCKg * 340;
					printf("O valor da carga do caminha e:%i R$ \n", VdC);
					printf("Isento de imposto.\n");
					VTotal = VdC;
					printf("O valor total transportado pelo caminhao e de:%i R$", VTotal);
				
				}else{
					printf("Codigo da Carga Invalido!!");
				}
				break;

			default:
				printf("Codigo Do Estado Invalido!!");
				break;
		}
}



