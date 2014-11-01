/*
 * 4exercicio56.cpp
 *
 *  Created on: 31/06/2012
 *      Author: casa
 */
#include<iostream>
using namespace std;
#include<math.h>

int main()
{

	float f,x,y,r;

	for(x=1;x<=100;x++)
	{
		for(y=1;y<=5;y++)
		{
			r=x*y-5*y+15;
			f=(pow(x,2)+3*x+pow(y,2))/r;

			cout<<"Valor de X:"<<x<<"  Valor de Y:"<<y<<"  f(x,y):"<<f<<"\n";
		}
	}
}



