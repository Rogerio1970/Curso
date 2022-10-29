#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
	setlocale(LC_ALL,"Portuguese");
	
	char vescolha;
		
	vescolha = 'A';
	
	while (vescolha != 'X')
	{
	
		char vsaida;
		float vnum1, vnum2, vresul;
	
		printf("   Informe uma das Opções: \n");
		printf("\n");
		printf("   Digite (A) para ADIÇÃO \n");
		printf("   Digite (S) para SUBTRAÇÃO \n");
		printf("   Digite (M) para MULTIPLICAÇÃO \n");
		printf("   Digite (D) para DIVISÃO \n");
		printf("   Digite (X) para SAIR \n");
		printf("\n");
		printf(" Informe sua Escolha: ");	
		scanf(" %c",&vescolha);
	
		if (vescolha == 'X')
		{
			system("cls");
			return 0;
		}
		printf("\n");
		printf("   Digite o Primeiro Numero: "); scanf(" %f",&vnum1);
		printf("\n");
		printf("   Digite o Segundo Numero: "); scanf(" %f",&vnum2);
		printf("\n");		
	
		if (vescolha == 'A')
		{
			vresul = vnum1 + vnum2;
			printf("   O Resultado da Soma é: %.2f \n",vresul );
		}
		else if (vescolha == 'S') {
			vresul = vnum1 - vnum2;
			printf("   O Resultado da Subtração é: %.2f \n",vresul );
		} else if (vescolha == 'M') {
			vresul = vnum1 * vnum2;
			printf("   O Resultado da Multiplicação é: %.2f \n",vresul );
		} else if (vescolha == 'D') {
			vresul = vnum1 / vnum2;
			printf("   O Resultado da Divisão é: %.2f \n",vresul );
		}
		
		printf("\n");
		printf(" Deseja fazer outro Calculo S/N ???: "); scanf(" %c",&vsaida);
		
		if (vsaida == 'N')
			exit(0);
		
		system("cls");		
	}
	return 0;

}
