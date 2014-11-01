/*
 * 4exercicio36.cpp
 *
 *  Created on: 20/06/2012
 *      Author: casa
 */

#include<stdio.h>

int main()
{

	int i=0,fat=1,c=63;
	float s=0,r=1;


	while(r>=0.0000001)
	{
		i++;
		fat=fat*(i+1);
		c=c-2;
		r=c/fat;
		s=s+r;
	}
	printf("\nValor da série:%f",s);
	printf("\nQuantidade de termos:%d",i);
}


