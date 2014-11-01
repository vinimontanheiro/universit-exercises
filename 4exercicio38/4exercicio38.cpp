/*
 * 4exercicio38.cpp
 *
 *  Created on: 21/05/2012
 *      Author: vini
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int x,i,fat;
	float exp,d,e;

		d=1;
		e=1;
		i=0;
		fat=1;
		printf("Informe o valor de x:");
		scanf("%d",&x);

		while(d>0.0001 )
		{
			i++;

			fat=fat*i;
			e=pow(e,x);
			exp=(pow(x,i)+e)/fat;
			d=e-exp;
			d=abs(d);


		}
		printf("O valor de x: %d ",x );
		printf("O valor calculado da serie: %f ",exp );
		printf("O valor dado pela função e: %f ",e );
		printf("Número de termos: %d ",i );
	}





