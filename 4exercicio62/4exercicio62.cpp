/*
 * 4exercicio62.cpp
 *
 *  Created on: 31/06/2012
 *      Author: casa
 */
#include<iostream>
using namespace std;

int main()
{
	int i,n;
	float x0,y0,h,xn,yn;


	x0=0;
	xn=1;
	n=10;

	h=(xn-x0)/n;

	yn=xn;
	xn=x0;

	for(i=0;i<n;i++)
	{
		yn=y0+h*xn*yn;
		y0=yn;
		xn=xn+h;

	}
	cout<<"A solucao da equacao:"<<yn;
}



