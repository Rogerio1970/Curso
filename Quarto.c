#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int Vnum1, Vnum2, Vmult;

	printf("******************************** \n");
	printf("Faca a Multiplicacao dos Numeros \n");
	printf("******************************** \n");
	printf("\n");

	printf("Digite o Primeiro Numero: ");
	scanf ("%d",&Vnum1);
	printf("\n");
	printf("Digite o Segundo Numero para Multiplicar: ");
	scanf ("%d",&Vnum2);
	printf("\n");
	
	Vmult = Vnum2 * Vnum1;
 		
	printf("Resultado da MULTIPLICACAO: %d \n",Vmult);
	printf("\n");
	
	system("pause");
	return 0;
}

