#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int Vcod;
	float Vvalpeca, Vtotal, Vquapeca;
	
	printf("****************************** \n");
	printf("Calcular Valor Total das Pecas \n");
	printf("****************************** \n");printf("\n");
	
	printf("Digite o Codigo da Peca ou Digite 0 p/ sair..: ");scanf("%d",&Vcod);

	if (Vcod == 0)
	{
    return 0;
	}

	printf("\n");
	printf("Digite a Quantidade Pretendida: : ");scanf("%f",&Vquapeca);	printf("\n");
	printf("Digite o Valor da Peca: R$ ");scanf("%f",&Vvalpeca);printf("\n");
	
	Vtotal = Vvalpeca * Vquapeca;
	printf("Valor Total a Pagar: R$ %.2f ",Vtotal);printf("\n");
	system("pause");
	return 0;

}

