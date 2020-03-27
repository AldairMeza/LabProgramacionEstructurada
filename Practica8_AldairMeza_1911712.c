#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

/*Aldair Meza Alanis 1911712*/

int main()
{
	int Max, NumeroEvaluar, Divisor, Residuo, Indice;
	bool Numeros[100], EsDivisible;
	
	printf("Programa que indica en un arrelo de no mas de 100 numeros, si estos son primos o no:\n\n");
	printf("Numero maximo:\n");
	scanf("%d", &Max);
	for(Indice=0; Indice<Max; Indice++)
	{
		//Es primo
		NumeroEvaluar=Indice+1;
		Residuo=1;
		EsDivisible=Residuo==0;
		Divisor=2;
		
		while(Divisor<NumeroEvaluar && EsDivisible == false)
		{
			Residuo=NumeroEvaluar%Divisor;
			//printf("p?:%d n:%d r:%d \n", NumeroEvaluar, Divisor, Residuo);
			EsDivisible=Residuo==0;
			Divisor++;
		}
		//printf("Es primo? %d\n", EsDivisible);
		Numeros[Indice] =! EsDivisible;
	}
	
	printf("\nResultado\n");
	for(Indice=0; Indice<Max; Indice++)
	{
		NumeroEvaluar=Indice+1;
		printf("Numero: %d es primo: %d\n", NumeroEvaluar, Numeros[Indice]);
	}
	system("pause");
	return 0;
}
