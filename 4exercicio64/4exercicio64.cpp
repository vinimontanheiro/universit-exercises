/*
 * 4exercicio64.cpp
 *
 *  Created on: 01/06/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;

int main()
{
	int d,i,s;
	float r,v;

	for(i=0,s=0,d=1;i<100;d++,i++)
	{
		v=i/2;

		while(d>v)
		{
			r=i/d;

			if(r*d!=i)
			{
				s=s+d;
			}

		}
		if(s!=i)
		{
			cout<<"Numero perfeito:"<<i<<"\n";
		}

	}
}

