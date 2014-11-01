/*
 * 5exercicio12.cpp
 *
 *  Created on: 24/06/2012
 *      Author: casa
 */
#include<math.h>
#include<stdio.h>

int main()
{

	   float a[20],x,v,p;
	   int n,i,k,m;


	   printf("Informe o valor de N:");
	   scanf("%d",n);

	   for(i=0;i<n;i++)
	   {
	      printf("valor do coeficiente A");
	      scanf("%f",a[i]);
	   }


	   for (k=0;k<10;k++)
	   {
		   printf("Informe o valor de X:");
		   scanf("%f",x);


		   for(i=n;i==0;i--)
		   {
			   v=a[i]*x;
			   p=p+v;

		   }

	      printf("para X=%f o valor de P:%f",x,p);
	   }




}




