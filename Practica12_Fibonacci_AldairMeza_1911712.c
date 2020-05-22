#include<stdio.h>

/* Aldair Meza Alanis 1911712 */

int fibonacci(int k);

int main()
{
	int i,cant,n;
	printf("Programa que imprime la serie Fibonacci usando funciones\n");
	printf("\nCantidad de numeros que tendra la serie: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		printf("\n%d",fibonacci(i));
	printf("\n\nPresione cualquier tecla para continuar... ");
	fflush(stdin);
	getchar();
}

int fibonacci(k)
{
	if(k<=1)
		return k;
	return (fibonacci(k-1)+fibonacci(k-2));
}
