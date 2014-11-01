/*
 * numerosinversos.cpp
 *
 *  Created on: 27/06/2012
 *      Author: casa
 */


#include<iostream>
using namespace std;

int main()
{

	int v[9],i,j,k;

	for(i=0;i<9;i++)
	{
		cout<<"Informe os valores:";
		cin>>v[i];
	}
	k=i;
	for(j=0;j<k;j++)
	{
		while(i!=0)
		{
			v[j]=v[i];
			i--;
		}
	}
	cout<<"Numero invertido:";
	for(j=0;j<k;j++)
	{
		cout<<v[j];
	}
}


