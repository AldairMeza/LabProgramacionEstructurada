#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Aldair Meza Alanis //

struct stud
	{
		char dato[10][100];
	};

int lectura(struct stud *a);
int impresion(struct stud *a,int n);

int main()
{
	int n;
	struct stud est[100];
	n=lectura(est);
	impresion(est,n);
	printf("\n Presione cualquier tecla para continuar... ");
	fflush(stdin);
	getchar();
	return 0;	
}

int lectura(struct stud *a)
{
	int i=0,sn;
	do
	{
		printf("\n Estudiante %d",i+1);
		printf("\n Identificacion: ");
		fflush(stdin);
		gets(a[i].dato[1]);
		printf("\n Nombre: ");
		gets(a[i].dato[2]);
		printf("\n Apellido: ");
		gets(a[i].dato[3]);
		printf("\n Segundo apellido: ");
		gets(a[i].dato[4]);
		printf("\n Fecha de nacimiento: ");
		gets(a[i].dato[5]);
		printf("\n Escuela: ");
		gets(a[i].dato[6]);
		printf("\n Grado: ");
		gets(a[i].dato[7]);
		printf("\n Carrera: ");
		fflush(stdin);
		gets(a[i].dato[8]);
		printf("\n Genero: ");
		gets(a[i].dato[9]);
		i++;
		do
		{
			printf("\n Desea introducir mas datos?\n 1) Si\n 2) No\n");
		scanf("%d",&sn);
		}while(sn!=1&&sn!=2);
	}while(sn==1&&i<10);
	return i;
}

int impresion(struct stud *a,int n)
{
	int j,k;
	printf("\n\nId.     Nombre   Apellido 2do ap.    Fecha nac.   Escuela    Grado    Carrera    Gen.");
	for(j=0;j<n;j++)
	{
		for(k=0;k<j;k++)
			if(strcmp(a[k].dato[1],a[j].dato[1])==0)
				break;
		if(k==j)
			printf("\n%-8s%-9s%-9s%-11s%-13s%-11s%-9s%-12s%s",a[j].dato[1],a[j].dato[2],a[j].dato[3],a[j].dato[4],a[j].dato[5],a[j].dato[6],a[j].dato[7],a[j].dato[8],a[j].dato[9]);
	}
	return 0;
}
