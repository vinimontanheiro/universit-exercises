/*
 * 5exercicio06.cpp
 *
 *  Created on: 23/06/2012
 *      Author: casa
 */

#include<stdio.h>
#include<string.h>

int main()
{
	char id[250];
	int i,qtda,qtdb,a[250],b[250];

	printf("Informe o nome de identificação:");
	gets(id);

	while(strcmp(id,"vazio")!=0)
	{
		printf("\nInforme a QTD elementos conjunto A:");
		scanf("%d",&qtda);
		printf("\nInforme a QTD elementos conjunto B:");
		scanf("%d",&qtdb);


			for(i=0;i<qtda;i++)
			{
				printf("\nInforme os valores elemento A:");
				scanf("%d",&a[i]);
			}
			for(i=0;i<qtdb;i++)
			{
				printf("\nInforme os valores elemento B:");
				scanf("%d",&b[i]);
			}
			for(i=0;i!=a[i];i++)
			{
				if(a[i]!=b[i])
				{
				printf("Pares dijuntos:%s",id[i]);
				}
				else
				{
					printf("Informe o nome de identificação:");
					gets(id);

				}
			}

	}



}



