#include<stdio.h>
#include<stdlib.h>

/*Aldair Meza Alanis 1911712*/

int main()
{
	int Matriz[3][4], i=0, j=0, num=0;
	printf("Programa al que se le ingresa una matriz de 3x4, le asignan un valor para que esta sea multiplicada e\n");
	printf("imprime la ya multiplicada junto con la original\n\n\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Da el numero:");
			scanf("%d", &Matriz[i][j]);
		}
	}
	
	printf("\nIngrese el numero a multiplicar la matriz: ");
	scanf("%d", &num);
	printf("\nLa matriz es: \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d	", Matriz[i][j]);
		}
	printf("\n");
	}
	
	printf("\nLa matriz producto es: \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d	", Matriz[i][j]*num);
		}
	printf("\n");
	}
	
	system("pause");
	return 0;
}
