#include <stdio.h>
#include <stdlib.h>

/* Aldair Meza Alanis 1911712 */

int main() 
{
	float Num1, Num2, Res;
	char OpR;
	printf("Calculadora Basica\n");
	printf("\n Introduzca el primer numero:");
	scanf("%f", &Num1);
	printf("\n Introduzca el segundo numero:");
	scanf("%f", &Num2);
	printf("\n Introduzca la operacion a realizar:");
	scanf("%s", &OpR);
	switch(OpR)
	{
		case '+':
		    Res = Num1 + Num2;
		    break;
		case '-':
			Res = Num1 - Num2;
			break;
		case '*':
			Res = Num1 * Num2;
			break;
		case '/':
			Res = Num1 / Num2;
			break;
		default:
			printf("\n Operador Invalido");
	}
	printf("%.2f %c %.2f = %.2f", Num1, OpR, Num2, Res);
	system("PAUSE");
	return 0;
}
