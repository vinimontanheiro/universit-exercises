/*
 * 4exercicio42.cpp
 *
 *  Created on: 01/06/2012
 *      Author: casa
 */

#include<iostream>
using namespace std;
#include<math.h>
int main()
{

	int x1,x2,y1,y2;
	float d;




	cout<<"Informe o primeiro valor X1:";
	cin>>x1;
	cout<<"Informe o primeiro valor X2:";
	cin>>x2;
	cout<<"Informe o primeiro valor Y1:";
	cin>>y1;
	cout<<"Informe o primeiro valor Y2:";
	cin>>y2;



	while(x1!=0 && x2!=0 && y1!=0 && y2!=0)
	{

		d=sqrt(pow(x2-x1,2)+(pow(y2-y1,2)));

		cout<<"\nDistância:"<<d<<"\n";

		cout<<"Informe o primeiro valor X1:";
		cin>>x1;
		cout<<"Informe o primeiro valor X2:";
		cin>>x2;
		cout<<"Informe o primeiro valor Y1:";
		cin>>y1;
		cout<<"Informe o primeiro valor Y2:";
		cin>>y2;



	}
}


