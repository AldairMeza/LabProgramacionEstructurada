#include <stdio.h>
#include <stdlib.h>

/*Aldair Meza Alanis 1911712*/

int main() 
{
	int NumB, N, i, Multiplo;
	printf("***Programa que imprime los multiplos de un numero base***");
	printf("\n\nIngrese un numero base para obtener sus multiplos:");
	scanf("%d", &NumB);
	printf("\nIngrese cuantos multiplos desea que se le generen:");
	scanf("%d",&N);
	printf("Los multiplos de %d son:", NumB);
	
	for(i=0; i<N; i++)
	{
	  Multiplo= NumB * i;
	  printf("\n%d", Multiplo);	
	}
	printf("\n");
	
	system("pause");
	return 0;
}
