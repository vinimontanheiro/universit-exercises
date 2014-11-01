/*
 * 5exercicio10.cpp
 *
 *  Created on: 23/06/2012
 *      Author: casa
 */

#include<stdio.h>

int main()
{
int j=0,a[100],b[100],c[100],i,na,nb,nc;

	printf("Informe o nº elementos conjunto A:");
	scanf("%d",&na);
	for (i=0;i<na;i++)
	{
		printf("Informe o valor do vetor A:");
		scanf("%d",&a[i]);
	}

	printf("Informe o nº elementos conjunto B:");
	scanf("%d",&nb);
	for(i=0;i<nb;i++)
	{
		printf("Informe o valor do vetor B:");
		scanf("%d",&b[i]);
	}

	nc=na+nb;
	for (i=0;i<na;i++)
	{
		c[i]=a[i];
	}

	for (i=na;i<nc;i++)
	{
		c[i]=b[j];
		j++;
	}



	for (i=0;i<nc;i++)
	{
	printf("%d-",c[i]);
	}



}

