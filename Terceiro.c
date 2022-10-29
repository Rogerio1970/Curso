#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int Vnum1, Vnum2, Vmenus;

	printf("**************************** \n");
	printf("Faca a Subtracao dos Numeros \n");
	printf("**************************** \n");
	printf("\n");

	printf("Digite o Primeiro Numero: ");
	scanf ("%d",&Vnum1);
	printf("\n");
	printf("Digite o Segundo Numero para Diminuir: ");
	scanf ("%d",&Vnum2);
	printf("\n");
	
	if (Vnum1 > Vnum2)
	{
		Vmenus = Vnum1 - Vnum2;
	}
	else
	{
		Vmenus = Vnum2 - Vnum1;
 	}
	
	printf("Resultado do MAIOR x MENOR: %d \n",Vmenus);
	printf("\n");
	
	system("pause");
	return 0;
}

