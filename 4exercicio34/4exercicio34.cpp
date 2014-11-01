/*
 * 4exercicio34.cpp
 *
 *  Created on: 20/05/2012
 *      Author: Vini
 */

#include<stdio.h>

int main()
{
	int i,v;
	float s;

	for(i=1;i<=16384;i*=2)
	{

		v=225;
		if(v%2==0)
		{
			v=v-(29-i);
			s=(i/v)-s;
		}
		else
		{
			v=v-(29-i);
			s=(i/v)+s;
		}

		printf("Valor de S: %f",s);
	}

}


