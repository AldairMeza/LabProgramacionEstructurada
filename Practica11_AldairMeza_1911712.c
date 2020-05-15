#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Aldair Meza Alanis 1911712 */

int main()
{
	int i=0,j,k,sn;
	struct stud
	{
		char dato[10][100];
	} est[100];
	printf("Programa de la practica anterior utilizando estructuras\n");
	// Lectura
	do
	{
		printf("\nEstudiante %d",i+1);
		printf("\nIdentificacion: ");
		fflush(stdin);
		gets(est[i].dato[1]);
		printf("Nombre: ");
		gets(est[i].dato[2]);
		printf("Apellido: ");
		gets(est[i].dato[3]);
		printf("Segundo Apellido: ");
		gets(est[i].dato[4]);
		printf("Fecha de nacimiento: ");
		gets(est[i].dato[5]);
		printf("Escuela: ");
		gets(est[i].dato[6]);
		printf("Grado: ");
		gets(est[i].dato[7]);
		printf("Carrera: ");
		fflush(stdin);
		gets(est[i].dato[8]);
		printf("Genero: ");
		gets(est[i].dato[9]);
		i++;
		do
		{
			printf("\n Desea introducir mas datos?\n 1) Si\n 2) No\n");
		scanf("%d",&sn);
		}while(sn!=1&&sn!=2);
	}while(sn==1&&i<10);
	printf("\n\nId.     Nombre   Apellido 2do ap.    Fecha nac.   Escuela    Grado    Carrera    Gen.");
	// Impresión
	for(j=0;j<i;j++)
	{
		for(k=0;k<j;k++)
			if(strcmp(est[k].dato[1],est[j].dato[1])==0)
				break;
		if(k==j)
			printf("\n%-8s%-9s%-9s%-11s%-13s%-11s%-9s%-12s%s",est[j].dato[1],est[j].dato[2],est[j].dato[3],est[j].dato[4],est[j].dato[5],est[j].dato[6],est[j].dato[7],est[j].dato[8],est[j].dato[9]);
	}
	fflush(stdin);
	getchar();
	return 0;	
}
