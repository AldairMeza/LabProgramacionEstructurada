#include <stdio.h>

int main() {
	char c;
	printf("Ingresar un caracter: ");
	c = getchar();
	int a = (int) c;
	if(48 <= a && a <= 57){
		printf("Numero entero: ");
	}else{
		if(65 <= a && a <= 90){
			printf("Es letra mayuscula: ");
		}else{
			if(97 <= a && a <= 122){
				printf("Es una letra minuscula: ");
			}else{
				printf("Es un simbolo: ");
			}
		}
	}
	putchar(c);
	printf("\n");
	return 0;
}
