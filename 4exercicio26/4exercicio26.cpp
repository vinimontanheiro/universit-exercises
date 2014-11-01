/*
 * 4exercicio26.cpp
 *
 *  Created on: 16/05/2012
 *      Author: Vini
 */

#include <stdio.h>

int main()
{
	int i,c;
	float s;

	for(i=1;i<=37;i++)
	{
		s=s+(39-i)*(38-i)/i;

		printf("%f \n",s);
	}
}

