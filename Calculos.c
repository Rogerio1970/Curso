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
	
		printf("   Informe uma das Op��es: \n");
		printf("\n");
		printf("   Digite (A) para ADI��O \n");
		printf("   Digite (S) para SUBTRA��O \n");
		printf("   Digite (M) para MULTIPLICA��O \n");
		printf("   Digite (D) para DIVIS�O \n");
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
			printf("   O Resultado da Soma �: %.2f \n",vresul );
		}
		else if (vescolha == 'S') {
			vresul = vnum1 - vnum2;
			printf("   O Resultado da Subtra��o �: %.2f \n",vresul );
		} else if (vescolha == 'M') {
			vresul = vnum1 * vnum2;
			printf("   O Resultado da Multiplica��o �: %.2f \n",vresul );
		} else if (vescolha == 'D') {
			vresul = vnum1 / vnum2;
			printf("   O Resultado da Divis�o �: %.2f \n",vresul );
		}
		
		printf("\n");
		printf(" Deseja fazer outro Calculo S/N ???: "); scanf(" %c",&vsaida);
		
		if (vsaida == 'N')
			exit(0);
		
		system("cls");		
	}
	return 0;

}
