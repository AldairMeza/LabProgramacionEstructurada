#include <stdio.h>
#include <stdlib.h>

/* Aldair Meza Alanis 1911712 */

int main()
{
	int i=0, Cont=-1;
	float Prom, SumaTot=0;
	printf("Programa que le ingresan solo numeros positivos, y calcula el promedio de los ingresados\n");
	
	do
	{
		SumaTot= SumaTot + i;
		Cont++;
		printf("Ingrese un numero cualquiera:");
		scanf("%d", &i);
	}
	while(i>=0);
	    if(Cont==0)
	    {
	    	Cont=1;
		}
	    Prom = SumaTot/Cont;
	    printf("El promedio de los numeros registrados es de %.2f\n", Prom);
	
	system("pause");
	return 0;
}
