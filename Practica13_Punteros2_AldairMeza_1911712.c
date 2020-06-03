#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// ALdair Meza Alanis 1911712 //

struct stud
	{
		char dato[10][100];
	};

int lectura(struct stud *a);
int impresion(struct stud *a,int n);
int repeticion(struct stud *a,int n);
int estadisticas(struct stud *a,int n);

int main()
{
	int n;
	struct stud est[100];
	n=lectura(est);
	impresion(est,n);
	estadisticas(est,n);
	printf("\n\n Presione cualquier tecla para continuar... ");
	fflush(stdin);
	getchar();
	return 0;	
}

int lectura(struct stud *a)
{
	struct stud *b;
	b=a;
	int i=0,sn;
	do
	{
		printf("\n Estudiante %d",i+1);
		printf("\n Identificacion: ");
		fflush(stdin);
		gets(b->dato[1]);
		printf("\n Nombre: ");
		gets(b->dato[2]);
		printf("\n Apellido: ");
		gets(b->dato[3]);
		printf("\n Segundo apellido: ");
		gets(b->dato[4]);
		printf("\n Fecha de nacimiento: ");
		gets(b->dato[5]);
		printf("\n Escuela: ");
		gets(b->dato[6]);
		printf("\n Grado: ");
		gets(b->dato[7]);
		printf("\n Carrera: ");
		fflush(stdin);
		gets(b->dato[8]);
		printf("\n Genero (H o M): ");
		gets(b->dato[9]);
		b++;
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
	int (*apf)(struct stud *a,int n);
	int j;
	apf=&repeticion;
	printf("\n\nId.     Nombre   Apellido 2do ap.    Fecha nac.   Escuela    Grado    Carrera    Gen.");
	for(j=0;j<n;j++)
	{
		if(apf(a,j)==0)
			printf("\n%-8s%-9s%-9s%-11s%-13s%-11s%-9s%-12s%s",a[j].dato[1],a[j].dato[2],a[j].dato[3],a[j].dato[4],a[j].dato[5],a[j].dato[6],a[j].dato[7],a[j].dato[8],a[j].dato[9]);
	}
	return 0;
}

int repeticion(struct stud *a,int n)
{
	int k;
	struct stud *b;
	b=a+n;
	for(k=0;k<n;k++)
		if(strcmp((a->dato[1]),(b->dato[1]))==0)
			return 1;
	return 0;
}

int estadisticas(struct stud *a,int n)
{
	int hom=0,muj=0,cont;
	struct stud *b,*c;
	printf("\n\n Total de estudiantes: %d",n);
	for(b=a;b<a+n;b++)
		if((b->dato[9][0])=='H'||(b->dato[9][0])=='h')
			hom++;
		else
			if((b->dato[9][0])=='M'||(b->dato[9][0])=='m')
				muj++;
	printf("\n Total de hombres: %d",hom);
	printf("\n Total de mujeres: %d",muj);
	for(b=a;b<a+n;b++)
	{
		for(c=a;c<b;c++)
			if(strcmp((c->dato[8]),(b->dato[8]))==0)
				break;
		if(c==b)
		{
			for(c=b,cont=0;c<a+n;c++)
				if(strcmp((c->dato[8]),(b->dato[8]))==0)
					cont++;
			printf("\n Estudiantes de %s: %d",b->dato[8],cont);
		}
	}
	return 0;		
}
