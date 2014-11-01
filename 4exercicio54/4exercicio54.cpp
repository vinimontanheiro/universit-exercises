/*
 * 4exercicio54.cpp
 *
 *  Created on: 31/06/2012
 *      Author: casa
 */
#include<iostream>
using namespace std;

#include<math.h>
int main()
{
	int i;
	float x1,x2,y;

	 cout<<"Informe um numero positivo:";
	 cin>>y;

	    if(y>0)
	    {
	        x1=y/2;

	        for(i=1;i<=20;i++)
	        {
	            x2=(pow(x1,2)+y)/(2*x1);
	            x1=x2;
	        }
	        cout<<"Raiz quadrada de"<<y<<" e "<<x2;
	    }
	    else
	    {
	        cout<<"Erro: Informe um numero positivo";
	    }
	}




