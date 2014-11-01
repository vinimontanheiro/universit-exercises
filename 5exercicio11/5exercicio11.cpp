/*
 * 5exercicio11.cpp
 *
 *  Created on: 24/06/2012
 *      Author: casa
 */

#include<stdio.h>

int main()
{
	int m,n,i,a[30],b[20],c[50],j,l;

	printf("Informe o valor de M:");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		printf("Informe o valor de A:");
		scanf("%d",&a[i]);

	}

	printf("Informe o valor de N:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Informe o valor de B:");
		scanf("%d",&b[i]);

	}

	for (i=0;i<m;i++)
	{
		c[i]=a[i];
	}

	l=m+n;
	for (i=0;i<m;i++)
	{
		c[i]=a[i];
	}

	for (i=m;i<l;i++)
	{
		c[i]=b[j];
		j++;
	}


}






