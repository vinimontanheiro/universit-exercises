/*
 * 4exercicio40.cpp
 *
 *  Created on: 01/06/2012
 *      Author: casa
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i,fat,x,ch=1,c;
	float s=0,d;

	printf("Informe valor de X:");
	scanf("%d",x);

	for(i=2;i<=40;i+=2)
	{
		fat=fat*i;
		ch=-1*ch;

		if(ch==-1)
		{
			s=1-s+(pow(x,i)/fat);
		}
		else
		{
			s=1-s-(pow(x,i)/fat);
		}

		c=cos(s);
		d=c-s;
	}
	printf("\nDiferença:%f",d);
	printf("\nSomatorio:%f",s);
	printf("\nConseno:%f",c);

}


