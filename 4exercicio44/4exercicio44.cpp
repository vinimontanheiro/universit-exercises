/*
 * 4exercicio44.cpp
 *
 *  Created on: 24/06/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	float x,y,area;

	cout<<"Informe o valor de A:";
	cin>>a;
	cout<<"Informe o valor de B:";
	cin>>b;

	while(a!=0 && b!=0)
	{
		x=b/a;
		y=b;
		area=x*y/2;

		cout<<"Valor A:"<<a<<" Valor B:"<<b<<" e "<<area<<"\n \n";

		if(a==0 ||b==0)
			{
				cout<<"Valor A:"<<a<<" Valor B:"<<b<<"e 0";
			}

			cout<<"Informe o valor de A:";
			cin>>a;
			cout<<"Informe o valor de B:";
			cin>>b;

	}

}



