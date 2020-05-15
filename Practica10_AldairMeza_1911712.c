#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Aldair Meza Alanis 1911712*/

int main()
{
	int i=0,j,k,sn;
	char estudiantes[10][9][100];
	printf("Programa que registra informacion personal de estudiantes de una escuela\n");
	// Lectura
	do
	{
		printf("\nEstudiante %d",i+1);
		printf("\nIdentificacion: ");
		fflush(stdin);
		gets(estudiantes[i][1]);
		printf("Nombre: ");
		gets(estudiantes[i][2]);
		printf("Apellido: ");
		gets(estudiantes[i][3]);
		printf("Segundo Apellido: ");
		gets(estudiantes[i][4]);
		printf("Fecha de nacimiento: ");
		gets(estudiantes[i][5]);
		printf("Escuela: ");
		gets(estudiantes[i][6]);
		printf("Grado: ");
		gets(estudiantes[i][7]);
		printf("Carrera: ");
		fflush(stdin);
		gets(estudiantes[i][8]);
		printf("Genero: ");
		gets(estudiantes[i][9]);
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
			if(strcmp(estudiantes[k][1],estudiantes[j][1])==0)
				break;
		if(k==j)
			printf("\n%-8s%-9s%-9s%-11s%-13s%-11s%-9s%-12s%s",estudiantes[j][1],estudiantes[j][2],estudiantes[j][3],estudiantes[j][4],estudiantes[j][5],estudiantes[j][6],estudiantes[j][7],estudiantes[j][8],estudiantes[j][9]);
	}
	fflush(stdin);
	getchar();
	return 0;	
}
