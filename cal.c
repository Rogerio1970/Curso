#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){
	setlocale(LC_ALL,"Portuguese");
	
	int vescolha;
	
	vescolha = 1;
	
	while (vescolha != 0)
	{
	
		char vsaida;
		float vnum1, vnum2, vresul;
	
		printf("   Informe uma das Op��es: \n");
		printf("\n");
		printf("   Digite (1) para ADI��O \n");
		printf("   Digite (2) para SUBTRA��O \n");
		printf("   Digite (3) para MULTIPLICA��O \n");
		printf("   Digite (4) para DIVIS�O \n");
		printf("   Digite (0) para SAIR \n");
		printf("\n");
		printf(" Informe sua Escolha: ");	
		scanf("%d",&vescolha);

		if (vescolha == 0)
		{
			system("cls");
			return 0;
	    }

		printf("   Digite o Primeiro Numero: ");
		scanf("%f",&vnum1);
		printf("\n");
		printf("   Digite o Segundo Numero: ");
		scanf("%f",&vnum2);
		printf("\n");		
	
		if (vescolha == 1)
		{
			vresul = vnum1 + vnum2;
			printf("   O Resultado da Soma �: %.2f \n",vresul );
		}
		else if (vescolha == 2) {
			vresul = vnum1 - vnum2;
			printf("   O Resultado da Subtra��o �: %.2f \n",vresul );
		} else if (vescolha == 3) {
			vresul = vnum1 * vnum2;
			printf("   O Resultado da Multiplica��o �: %.2f \n",vresul );
		} else if (vescolha == 4) {
			vresul = vnum1 / vnum2;
			printf("   O Resultado da Divis�o �: %.2f \n",vresul );
		}


		printf(" Deseja fazer outro Calculo S/N ???: ");	
		scanf(" %c",&vsaida);
		
		if (vsaida == 'N')
			exit(0);
		
		system("cls");
	}
	system("pause"); return 0;

}
