/*
 * 4exercicio28.cpp
 *
 *  Created on: 16/05/2012
 *      Author: vini
 */

#include<stdio.h>

int main()
{
	int i,c;
	float s;

	for(i=1;i<=50;i++)
	{
		c=1000;
		c-=3;

		if(c%2==0)
		{
			s=(s-c)/i;
		}
		else
		{
			s=(s+c)/i;
		}


		printf("Soma: %f\n",s);
	}

}


