/*
 * verficaPrimo.cpp
 *
 *  Created on: 17/09/2012
 *      Author: home
 */

#include<math.h>
#include<iostream>
using namespace std;

int main()
{
	int x,n,y[1000],i,j;

	cout<<"Informe um numero:";
	cin>>n;

	x = sqrt(n);
	x = x+1;

	for(i=1;i<=x;i++)
	{
		if(x%2>0)
		{
			y[i] = x/2;
		}
	}
	for(j=1;j<=x;j++)
	{
		if(n%y[j]==0)
		{
			cout<<"O número "<<n<<" e primo!";
		}
		else
		{
			cout<<"O numero "<<n<<" nao e primo!";
		}
	}
}



