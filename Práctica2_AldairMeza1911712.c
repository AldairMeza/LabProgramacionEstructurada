#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int main () 
{
	int a=12;
	int b=5;
	int c= a + b;
	printf("Operaciones con enteros \n");
	printf("%d + %d = %d \n", a, b, c);
	c = a - b; 
	printf("%d - %d = %d \n", a, b, c);
	c = a * b;
	printf("%d * %d = %d \n", a, b, c);
	c = a / b;
	printf("%d / %d = %f \n", a, b, c);
	c= a % b; 
	printf("%d % %d = %d \n", a, b, c);
	c= a++;
	printf("%d ++ = %d \n", a, c);
	c= b--;
	printf("%d -- = %d \n", b, c);
	
	float x= 12.5;
	float y= 5.5;
	float z= x + y;
	printf ("Operaciones con flotantes \n");
	printf("%f + %f = %f \n", x, y, z);
	z= x - y;
	printf("%f - %f = %f \n", x, y, z);
	z= x * y;
	printf("%f * %f = %f \n", x, y, z);
	z= x / y; 
	printf("%f / %f = %f \n", x, y, z);
	z= x > y;
	printf("%f > %f = %f \n", x, y, z);
	z= x < y;
	printf("%f < %f = %f \n", x, y, z);
	z= x == y;
	printf("%f == %f = %f \n", x, y, z);
	z= x >= y;
	printf("%f >= %f = %f \n",x, y, z);
	z= x <= y,
	printf("%f <= %f = %f \n", x, y, z);
	
	int d= 8;
	int  e= 7;
	int f= 10;
	int  g= 9;
	bool H, I, J;
	H= d > e & g < f;
	printf("Operaciones booleanas \n");
	printf("%d > %d & %d < %d= %d \n", d, e, g, f);
	I= e > f || d < g;
	printf("%d > %d || %d < %d= %d \n", e, f, d, g);
	J= e = e;
	printf("%d = %d= %d \n", e, e, J);
	
	system("pause");
	return 0;
}

