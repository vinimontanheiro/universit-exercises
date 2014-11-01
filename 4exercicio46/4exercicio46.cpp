/*
 * 4exercicio46.cpp
 *
 *  Created on: 29/06/2012
 *      Author: casa
 */
#include<iostream>
using namespace std;

int main()
{
	int x,y;

	cout<<"Informe valor de X:";
	cin>>x;
	cout<<"Informe valor de Y:";
	cin>>y;

	while(x!=0 && y!=0)
	{
		if(x>0)
		{
			if(y<3*x && y>x/3 )
			{
				cout<<"INTERIOR\n";
			}
			else
			{
				cout<<"EXTERIOR\n";
			}
		}
		else
		{
			if(x<0)
			{
				if(y>3*x && y<x/3 )
				{
					cout<<"INTERIOR\n";
				}
				else
				{
					cout<<"EXTERIOR\n";
				}
			}
		}
		cout<<"Informe valor de X:";
		cin>>x;
		cout<<"Informe valor de Y:";
		cin>>y;

	}
}



