#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Aldair Meza ALanis 1911712*/

int lectura(char A[10][9][100]);
void impresion(char A[10][9][100],int n);

int main()
{
	int n;
	char estudiantes[10][9][100];
	n=lectura(estudiantes);
	impresion(estudiantes,n);
	printf("\n Presione cualquier tecla para continuar... ");
	fflush(stdin);
	getchar();
	return 0;	
}

int lectura(char A[10][9][100])
{
	int sn,i=0;
	do
	{
		printf("Programa de la practica de registro de estudiantes utilizando funciones\n");
		printf("\n Estudiante %d",i+1);
		printf("\nIdentificacion: ");
		fflush(stdin);
		gets(A[i][1]);
		printf("Nombre: ");
		gets(A[i][2]);
		printf("Apellido: ");
		gets(A[i][3]);
		printf("Segundo apellido: ");
		gets(A[i][4]);
		printf("Fecha de nacimiento: ");
		gets(A[i][5]);
		printf("Escuela: ");
		gets(A[i][6]);
		printf("Grado: ");
		gets(A[i][7]);
		printf("Carrera: ");
		fflush(stdin);
		gets(A[i][8]);
		printf("Genero: ");
		gets(A[i][9]);
		i++;
		do
		{
			printf("\n Desea introducir mas datos?\n 1) Si\n 2) No\n");
		scanf("%d",&sn);
		}while(sn!=1&&sn!=2);
	}while(sn==1&&i<10);
	return i;
}

void impresion(char A[10][9][100],int n)
{
	int j,k;
	printf("\n\nId.     Nombre   Apellido 2do ap.    Fecha nac.   Escuela    Grado    Carrera    Gen.");
	for(j=0;j<n;j++)
	{
		for(k=0;k<j;k++)
			if(strcmp(A[k][1],A[j][1])==0)
				break;
		if(k==j)
			printf("\n%-8s%-9s%-9s%-11s%-13s%-11s%-9s%-12s%s",A[j][1],A[j][2],A[j][3],A[j][4],A[j][5],A[j][6],A[j][7],A[j][8],A[j][9]);
	}
}
