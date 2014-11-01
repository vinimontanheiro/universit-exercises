/*
 * 4exercicio60.cpp
 *
 *  Created on: 01/06/2012
 *      Author: casa
 */
#include<iostream>
using namespace std;

int main()
{
	int i,a,b,c,m1,m2,m3,mdc,v1,v2;

	for(i=0;i<25;i++)
	{
		cout<<"Informe o prineiro numero:";
		cin>>a;
		cout<<"Informe segundo numero:";
		cin>>b;
		cout<<"Informe o terceiro numero:";
		cin>>c;

		if(a>b && a>c)
		{
			m1=a;
			if(b>c)
			{
				m2=b;
				m3=c;
			}
			else
			{
				m2=c;
				m3=b;
			}
		}
		else
		{
			if(b>a && b>c)
			{
				m1=b;
				if(a>c)
				{
					m2=a;
					m3=c;
				}
				else
				{
					m2=c;
					m3=a;
				}
			}
			else
			{
				if(c>a && c>b)
				{
					m1=c;
					if(a>b)
					{
						m2=a;
						m3=b;
					}
					else
					{
						m2=b;
						m3=a;
					}
				}
			}

		}
		while(m2!=0)
		{
			v1=(m1*m2);
			v2=m1-v1*m2;
			m1=m2;
			m3=v2;
			mdc=m1;
		}
		if(m2>mdc)
		{
			m1=m2;
			m3=mdc;
		}
		else
		{
			m1=mdc;
			m3=m2;
		}

		while(m2!=0)
		{
			v1=m1/m3;
			v2=m1-v1*m3;
			m1=m3;
			m3=v2;
		}
		mdc=m1;

		cout<<"Valores de A:"<<a<<" B:"<<b<<" C:"<<c<<" M.D.C:"<<mdc<<"\n";

	}
}


