#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Aldair Meza Alanis 1911712 //

int main()
{
	int i=0,j,k,sn;
	struct stud
	{
		int grad;
		char id[20],nom[30],ap[20],seg[20],nac[20],esc[20],car[30],gen[10];
	} est[100];
	FILE *fp;
	fp=fopen("estudiantes.txt","w+");
	fprintf(fp,"\"Students\":\[\n");
	// Lectura
	do
	{
		printf("\n Estudiante %d",i+1);
		printf("\n Identificacion: ");
		fflush(stdin);
		gets(est[i].id);
		printf("\n Nombre: ");
		gets(est[i].nom);
		printf("\n Apellido: ");
		gets(est[i].ap);
		printf("\n Segundo apellido: ");
		gets(est[i].seg);
		printf("\n Fecha de nacimiento: ");
		gets(est[i].nac);
		printf("\n Escuela: ");
		gets(est[i].esc);
		printf("\n Grado: ");
		scanf("%d",&est[i].grad);
		printf("\n Carrera: ");
		fflush(stdin);
		gets(est[i].car);
		printf("\n Genero: ");
		gets(est[i].gen);
		fprintf(fp,"\{\"matricula\": %d, ",est[i].id);
		fprintf(fp,"\"nombre\": %s, ",est[i].nom);
		fprintf(fp,"\"apellido\": %s, ",est[i].ap);
		fprintf(fp,"\"segundo apellido\": %s, ",est[i].seg);
		fprintf(fp,"\"fecha de nacimiento\": %s, ",est[i].nac);
		fprintf(fp,"\"escuela\": %s, ",est[i].esc);
		fprintf(fp,"\"grado\": %d, ",est[i].grad);
		fprintf(fp,"\"carrera\": %s, ",est[i].car);
		fprintf(fp,"\"genero\": %s\n",est[i].gen);
		i++;
		do
		{
			printf("\n Desea introducir mas datos?\n 1) Si\n 2) No\n");
		scanf("%d",&sn);
		}while(sn!=1&&sn!=2);
	}while(sn==1);
	printf("\n\nId.  Nombre   Apellido 2do ap.    Fecha nac. Escuela    Grado Carrera Gen.");
	// Impresión
	for(j=0;j<i;j++)
	{
		for(k=0;k<j;k++)
			if(strcmp(est[k].id,est[j].id)==0)
				break;
		if(k==j)
			printf("\n%-5s%-9s%-9s%-11s%-11s%-11s%-6d%-9s%s",est[j].id,est[j].nom,est[j].ap,est[j].seg,est[j].nac,est[j].esc,est[j].grad,est[j].car,est[j].gen);
	}
	printf("\n Presione cualquier tecla para continuar... ");
	fflush(stdin);
	fprintf(fp,")");
	fclose(fp);
	getchar();
	return 0;	
}
