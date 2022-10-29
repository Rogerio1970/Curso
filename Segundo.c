#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int Vnum1, Vnum2, Vsoma;

	printf("Digite o Primeiro Numero: ");
	scanf ("%d",&Vnum1);
	printf("\n");
	printf("Digite o Segundo Numero: ");
	scanf ("%d",&Vnum2);
	printf("\n");
	
	Vsoma = Vnum1 + Vnum2;
	printf("Total dos Numeros: %d \n",Vsoma);
	printf("\n");
	
	
	
	system("pause");
	return 0;
}


