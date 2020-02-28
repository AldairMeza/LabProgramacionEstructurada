#include <stdio.h>
#include <stdlib.h>

/* Aldair Meza Alanis 1911712 */

int main() 
{
	int i, Cont = 0;
	float Prom, SumaTot = 0;
	printf("\n Ingrese un numero cualquiera:");
	scanf("%d", &i);
	while(i>=0)
	{
	    SumaTot= SumaTot + i;
	    Cont++;	
	    printf("\n Ingrese otro numero cualquiera:");
	    scanf("%d", &i);
	}
	Prom = SumaTot/Cont;
	printf("\n El promedio de todos los numeros registrado es de: %.2f\n", Prom);
	system("pause");
	return 0;
}
